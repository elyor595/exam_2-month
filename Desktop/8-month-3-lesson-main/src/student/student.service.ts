import { Injectable, NotFoundException } from '@nestjs/common';
import { CreateStudentDto } from './dto/create-student.dto';
import { UpdateStudentDto } from './dto/update-student.dto';
import { InjectRepository } from '@nestjs/typeorm';
import { Student } from './student.entity';
import { Repository, Between, ILike } from 'typeorm';

@Injectable()
export class StudentService {
  private leftThisMonth = 0; // shu oy o‘chirilgan studentlar soni

  constructor(@InjectRepository(Student) private studentRepo: Repository<Student>) {}

  // 🟢 ADD
  async create(createStudentDto: CreateStudentDto): Promise<Student> {
    const { fullName, phoneNumber, profession, parentName, parentNumber, img } = createStudentDto;
    const student = this.studentRepo.create({ fullName, phoneNumber, profession, parentName, parentNumber, img });
    return this.studentRepo.save(student);
  }

  // 🟢 GET ALL (search bilan)
  async findAll(search?: string): Promise<Student[]> {
    if (search) {
      return this.studentRepo.find({
        where: { fullName: ILike(`%${search}%`) },
        order: { id: 'DESC' },
      });
    }

    return this.studentRepo.find({ order: { id: 'DESC' } });
  }

  // 🟡 UPDATE
  async update(id: number, updateStudentDto: UpdateStudentDto): Promise<{ message: string }> {
    const student = await this.studentRepo.findOneBy({ id });
    if (!student) throw new NotFoundException('Student not found');

    await this.studentRepo.update(id, updateStudentDto);
    return { message: 'Updated' };
  }

  // 🔴 DELETE
  async remove(id: number): Promise<{ message: string }> {
  const student = await this.studentRepo.findOneBy({ id });
  if (!student) throw new NotFoundException('Student not found');

  student.leftAt = new Date();
  await this.studentRepo.save(student);

  return { message: 'Deleted' };
}


 async getStatistics(): Promise<any> {
  const qb = this.studentRepo.createQueryBuilder('student')
    .select("DATE_TRUNC('month', student.createdAt)", 'month')
    .addSelect("COUNT(student.id)", 'totalJoined')
    .groupBy("DATE_TRUNC('month', student.createdAt)")
    .orderBy("DATE_TRUNC('month', student.createdAt)", 'ASC');

  const stats = await qb.getRawMany();

  // shu oy o‘chirilgan studentlar soni
  const startOfMonth = new Date(new Date().getFullYear(), new Date().getMonth(), 1);
  const endOfMonth = new Date(new Date().getFullYear(), new Date().getMonth() + 1, 0, 23, 59, 59);

  const leftThisMonth = await this.studentRepo.count({
    where: { leftAt: Between(startOfMonth, endOfMonth) }
  });

  return {
    studentsStats: stats.map(item => ({
      month: item.month,
      totalJoined: +item.totalJoined,
      leftCount: leftThisMonth
    })),
    leftThisMonth
  };
}

}
