#include<iostream>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
class Person{
    private:
        string Name;
        string Gender;
        string Phonenumber;
        string Subject;
        string SubjLevel;
        string Time;
        public:
        Person (string Name, string Gender, string Phonenumber, string Subject, string SubjectLevel, string Time){
            this -> Name = Name;
            this -> Gender = Gender;
            this -> Phonenumber = Phonenumber;
            this ->Subject = Subject;
            this ->SubjLevel = SubjectLevel;
            this ->Time = Time;};
};