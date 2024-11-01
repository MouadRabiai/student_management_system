#include "common.cpp"

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