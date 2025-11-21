import { Controller, Get, Post, Body, Patch, Param, Delete, Query } from '@nestjs/common';
import { StudentService } from './student.service';
import { CreateStudentDto } from './dto/create-student.dto';
import { UpdateStudentDto } from './dto/update-student.dto';

@Controller('student')
export class StudentController {
  constructor(private readonly studentService: StudentService) {}

  // 🟢 ADD
  @Post()
  create(@Body() createStudentDto: CreateStudentDto) {
    return this.studentService.create(createStudentDto);
  }

  // 🟢 GET ALL (search bilan)
  @Get()
  findAll(@Query('search') search?: string) {
    return this.studentService.findAll(search);
  }

  // 🟡 UPDATE
  @Patch(':id')
  update(@Param('id') id: string, @Body() updateStudentDto: UpdateStudentDto) {
    return this.studentService.update(+id, updateStudentDto);
  }

  // 🔴 DELETE
  @Delete(':id')
  remove(@Param('id') id: string) {
    return this.studentService.remove(+id);
  }

  // 📊 STATISTICS
  @Get('statistics')
  getStatistics() {
    return this.studentService.getStatistics();
  }
}
