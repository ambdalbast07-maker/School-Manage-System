#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
using namespace std;
class School
{
     private:
         string schoolName;
         string address;
         string principalName;
         int StudentCounter=0;
         int TeacherCounter=0;
         int CourseCounter=0;
         int ClassroomCounter=0;
         Student  students[1000];
         Teacher  teachers[50];
         Staff  staffMembers[20];
         Course  courses[6];
         Classroom  classrooms[50];
         int StaffCounter=0;
    public:
        School() {
    schoolName = "";
    address = "";
    principalName = "";
    StudentCounter = 0;
    TeacherCounter = 0;
    StaffCounter = 0;
    CourseCounter = 0;
    ClassroomCounter = 0;
}
        void setSchoolName(string schoolName)
        {
            this->schoolName=schoolName;
        }
        void setAddress(string address)
        {
            this->address=address;
        }
        void setPrincipalName(string principalName)
        {
            this->principalName=principalName;
        }
        string getSchoolName()
        {
            return schoolName;
        }
        string getAddress()
        {
            return address;
        }
        string getPrincipalName()
        {
            return principalName;
        }
       void addStudent(Student Stud)
       {
           if(StudentCounter==1000)
           {
            cout<<"The Students in School is Full"<<endl;
           }
           else
           {
               students[StudentCounter]=Stud;
               StudentCounter++;
           }
       }
       void addTeacher(Teacher Teach)
       {
          if(TeacherCounter==50)
          {
              cout<<"The Teacher in School is Full"<<endl;
          }
          else
           {
               teachers[TeacherCounter]=Teach;
               TeacherCounter++;
           }
       }
       void addStaff(Staff staff)
       {
           if(StaffCounter==20)
           {
               cout<<"The Staff Members in School is Full"<<endl;
           }
           else
           {
             staffMembers[StaffCounter]=staff;
             StaffCounter++;
           }
       }
       void addCourse(Course course)
       {
           if(CourseCounter==6)
           {
               cout<<"The Course in School is Full"<<endl;
           }
           else
           {
               courses[CourseCounter]=course;
               CourseCounter++;
           }
       }
       void addClassroom(Classroom classroom)
       {
           if(ClassroomCounter == 50)

           {
              cout<<"The Class Room in School is Full"<<endl;
           }
        else
       {
           classrooms[ClassroomCounter] = classroom;

           ClassroomCounter++;
       }
      }
      void printStudents()
      {
         for(int i=0;i<StudentCounter;i++)
         {
            students[i].print();
             cout<<endl<<endl;
         }
      }
       void printTeachers()
      {
         for(int i=0;i<TeacherCounter;i++)
         {
            teachers[i].print();
             cout<<endl<<endl;
         }
      }
       void printStaffs()
      {
         for(int i=0;i<StaffCounter;i++)
         {
            staffMembers[i].print();
             cout<<endl<<endl;
         }
      }
      void printCourses()
      {
         for(int i=0;i<CourseCounter;i++)
         {
            courses[i].print();
             cout<<endl<<endl;
         }
      }
      void printClassrooms()
      {
         for(int i=0;i<ClassroomCounter;i++)
         {
            classrooms[i].print();
             cout<<endl<<endl;
         }
      }
        School(string schoolName,string address,string principalName)
        {
            this->schoolName=schoolName;
            this->address=address;
            this->principalName=principalName;
            StudentCounter = 0;
            TeacherCounter = 0;
            StaffCounter = 0;
            CourseCounter = 0;
            ClassroomCounter = 0;
        }
        virtual ~School() {}

    protected:
};

#endif // SCHOOL_H
