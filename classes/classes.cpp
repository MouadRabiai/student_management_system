#include<iostream>
#include <string>
using namespace std;



//****************************/
//       SharedMethodes 
//****************************/
class SharedMethodes {
    private:
        int id;
        string name;
    public:
    void setId(int id){
            this->id = id;
        }
        void setName(string name){
            this->name = name;
        }
        int getId(){
            return this->id;
        }
        string getName(){
            return this->name;
        }

};



//****************************/
//       COMMON
//****************************/
class Common : public SharedMethodes {
    private :
        int age ;
        string phoneNumber;
    public :
        void setAge(int Age){
            this->age = Age;
        }
        void setPhoneNumber(string phoneNumber){
            this->phoneNumber = phoneNumber;
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
        int studentsIds[5];
    public :
        void setSalary(int salary){
            this->salary = salary;
        }
        void setStudents(int students[5]){
            for(int i=0; i<sizeof(studentsIds)/sizeof(studentsIds[0]); i++){
                this->studentsIds[i] = students[i];
            }
        }
        double getSalary(){
            return salary;
        }
        int * getStudentsIds(){
            return studentsIds;
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
            for(int i=0; i<sizeof(teachers)/sizeof(teachers[0]); i++){
                this->teachers[i] = tab[i];
            }
        }
        double getGpa(){
            return gpa;
        }
        Teacher * getTeachers(){
            return this->teachers;
        }
};

//****************************/
//       COURSE
//****************************/

class Course: public SharedMethodes {
    private:
        double hour;
    public:
        
        void setHour(double hour){
            this->hour = hour;
        }
        double getHour(){
            return this->hour;
        }


};


