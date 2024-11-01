#include<iostream>
#include <string>

using namespace std;

class Student{
    private :
        int id;
        string name;
        int age ;
        string phoneNumber;
        double gpa;
    public :
        void setId(int id){
            this->id = id;
        }
        void setName(string name){
            this->name = name;
        }
        void setAge(int Age){
            this->age = Age;
        }
        void setPhoneNumber(string phoneNumber){
            this->phoneNumber = phoneNumber;
        }
        void setGpa(double gpa){
            this->gpa = gpa;
        }

        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        string getPhoneNumber(){
            return phoneNumber;
        }
        double getGpa(){
            return gpa;
        }
};