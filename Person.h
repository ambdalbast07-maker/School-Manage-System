#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
    protected:
        string name;
        int age;
        string gender;
        string address;
        string phoneNumber;
        string email;
    public:
        person()
        {

        }
        person(string name,int age,string gender,string address,string phoneNumber,string email)
        {

            this->name=name;
            this->age=age;
            this->gender=gender;
            this->address=address;
            this->phoneNumber=phoneNumber;
            this->email=email;
        }
        string getName()
        {
            return name;
        }
        int getAge()
        {
           return age;
        }
        string getGender()
        {
            return gender;
        }
        string getAddress()
        {
            return address;
        }
        string getEmail()
        {
            return email;
        }

        void setName( string name)
        {
            this->name=name;
        }
        void setAge(int age)
        {
           this->age=age;
        }
        void setGender(string gender)
        {
           this->gender=gender;
        }
        void setAddress(string address )
        {
          this->address=address;
        }
        void setPhoneNumber(string phoneNumber)
        {
          this->phoneNumber=phoneNumber;
        }
        void setEmail(string email)
        {
          this->email=email;
        }
        void print()
        {
            cout<<"The Name is:"<<name<<endl;
            cout<<"The Age is:"<<age<<endl;
            cout<<"The gender is:"<<gender<<endl;
            cout<<"The address is:"<<address<<endl;
            cout<<"The phoneNumber is:"<<phoneNumber<<endl;
            cout<<"The email is:"<<email<<endl;
        }
};

#endif // PERSON_H
