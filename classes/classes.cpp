#include<iostream>
#include <string>
using namespace std;






//****************************/
//       COMMON
//****************************/
class Common {
    private :
        int id;
        string name;
        int age ;
        string phoneNumber;
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

};

//****************************/
//       TEACHER
//****************************/

class Teacher: public Common {
    private :
        int salary;
    public :
        void setSalary(int salary){
            this->salary = salary;
        }
        double getSalary(){
            return salary;
        }
};


//****************************/
//       STUDENT 
//****************************/
class Student: public Common{
    private :
        double gpa;
        Teacher teachers[5];
    public :
        void setGpa(double gpa){
            this->gpa = gpa;
        }
        void setTeachers(Teacher tab[5]){
            for(int i=0; i<5; i++){
                this->teachers[i] = tab[i];
            }
        }
        double getGpa(){
            return gpa;
        }
        Teacher * getTeachers(){
            Teacher tab[5];
            for(int i=0; i<5; i++){
                tab[i] = this->teachers[i];
            }
            return tab;
        }
};