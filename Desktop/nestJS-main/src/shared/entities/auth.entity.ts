import { ApiProperty } from "@nestjs/swagger";
import { Role } from "src/enum/role.enum";
import { Column, Entity, PrimaryGeneratedColumn } from "typeorm";

@Entity({name: "Auth"})
export class Auth {
  @PrimaryGeneratedColumn()
  id: number;

  @Column()
  @ApiProperty({default: "elyor"})
  username: string;

  @Column()
  @ApiProperty({default: "elyor@gmail.com"})
  email: string;

  @Column()
  @ApiProperty({default: "elyorr"})
  password: string;

  @Column({default: Role.User})
  role: string;
}
