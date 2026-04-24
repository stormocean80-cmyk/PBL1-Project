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
            this ->Time = Time;
        };
        string getName() const{ return Name; }
        string getGender() const{ return Gender; }
        string getPhonenumber() const{ return Phonenumber; }
        string getSubject() const{ return Subject; }
        string getSubjLevel() const{ return SubjLevel; }
        string getTime() const{ return Time; }
        void setName(const string Name){
            this -> Name = Name;
        }
        void setGender(const string Gender){
            this -> Gender = Gender;
        }
        void setPhonenumber(const string Phonenumber){
            this -> Phonenumber = Phonenumber;
        }
        void setSubject(const string Subject){
            this -> Subject = Subject;
        }
        void setSubjLevel(const string SubjLevel){
            this -> SubjLevel = SubjLevel;
        }
        void setTime(const string Time){
            this -> Time = Time;
        }
        
};
int main(){
    cout << "hello";
}