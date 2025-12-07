#include <iostream>
#include<Teacher.h>
#include<Person.h>
#include<Student.h>
#include<Staff.h>
#include<Course.h>
#include<Classroom.h>
#include<Exam.h>
#include<School.h>
using namespace std;

int main()
{
   School s;

    int n;
    do
    {
           cout<<"Please Enter Option:"<<endl;
           cout<<"Press 0 To Exit"<<endl;
           cout<<"Press 1 To Add Student In School"<<endl;
           cout<<"Press 2 To Add Teacher In School"<<endl;
           cout<<"Press 3 To Add Staff In School"<<endl;
           cout<<"Press 4 To Add Course In School"<<endl;
           cout<<"Press 5 To Add Classroom In School"<<endl;
           cin>>n;
        switch(n)
        {
        case  0:
            return 0;
        case  1:{
            Student  Stud;
            Stud.information();
            s.addStudent(Stud);
             break;
    }
        case  2:{
            Teacher  teach;
            teach.information();
            s.addTeacher(teach);
             break;
             }
        case 3:
            {
                Staff  staff;
                staff.information();
                s.addStaff(staff);
                break;
            }
        case 4:
            {
                Course  course;
                course.information();
                s.addCourse(course);
                break;
            }
        case 5:
            {
                Classroom  classroom;
                classroom.information();
                s.addClassroom(classroom);
                break;
            }
        }
    }
    while(n!=0);
        return 0;
}
