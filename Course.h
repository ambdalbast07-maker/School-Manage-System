#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
class Course
{
    public:
        Course()
    {
        courseCode = "";
        CourseName = "";
        teacherName = "";
    }
        void setCoursecode(string courseCode)
        {
            this->courseCode=courseCode;
        }
        void setCourseName(string CourseName)
        {
            this->CourseName=CourseName;
        }
        void setTeacherName(string teacherName)
        {
            this->teacherName=teacherName;
        }
        string getCourseCode()
        {
            return courseCode;
        }
        string getCourseName()
        {
            return CourseName;
        }
        string getTeacherName()
        {
            return teacherName;
        }
        void print()
        {
            cout<<"The Course Code is:"<<courseCode<<endl;
            cout<<"The Course Name is:"<<CourseName<<endl;
            cout<<"The Teacher Name is:"<<teacherName<<endl;
        }
        void information()
        {
            cout<<"Please Enter Your Course Code:"<<endl;
            cin>>courseCode;
            cout<<"Please Enter Your Course Name:"<<endl;
            cin>>CourseName;
            cout<<"Please Enter Your Teacher Name:"<<endl;
            cin>>teacherName;
            cout<<"The Course Is Add In School Successfully"<<endl;
        }
        Course(string courseCode,string CourseName,string teacherName)
         {
            this->courseCode=courseCode;
            this-> CourseName= CourseName;
            this->teacherName=teacherName;
         }
        virtual ~Course() {}

    protected:
        string courseCode;
        string CourseName;
        string teacherName;

};

#endif // COURSE_H
