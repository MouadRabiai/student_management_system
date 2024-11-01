#include "common.cpp"



class Student: public Common{
    private :
        double gpa;
    public :
        void setGpa(double gpa){
            this->gpa = gpa;
        }
        double getGpa(){
            return gpa;
        }
};