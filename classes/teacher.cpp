#include<iostream>
#include <string>

using namespace std;


class Teacher {
    private :
        int id;
        string name;
        int age ;
        string phoneNumber;
        int salary;

    public :
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
        void setSalary(int salary){
            this->salary = salary;
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
        double getSalary(){
            return salary;
        }
};