#include<iostream>
#include <string>
#include "common.cpp"

using namespace std;

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