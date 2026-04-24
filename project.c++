#include<iostream>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
class Person{
    private:
        string Name;
        string gender;
        string Phonenumber;
        string Subject;
        string SubjLevel;
        public:
        Person (string Name, string gender, string Phonenumber, string Subject, string SubjectLevel){
            this->Name=Name;
            this->gender=gender;
            this->Phonenumber=Phonenumber;
            this->Subject=Subject;
            this->SubjLevel=SubjectLevel;};
        };