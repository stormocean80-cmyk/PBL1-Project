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
        string ID;
        string Major;
        string Subject;
        string SubjLevel;
        string Time;
        public:
        Person (string Name, string Gender, string ID, string Major, string Subject, string SubjectLevel, string Time){
            this -> Name = Name;
            this -> Gender = Gender;
            this -> ID = ID;
            this -> Major = Major;
            this ->Subject = Subject;
            this ->SubjLevel = SubjectLevel;
            this ->Time = Time;
        };
        string getName() const{ return Name; }
        string getGender() const{ return Gender; }
        string getID() const{ return ID; }
        string getMajor() const{ return Major; }
        string getSubject() const{ return Subject; }
        string getSubjLevel() const{ return SubjLevel; }
        string getTime() const{ return Time; }
        void setName(const string Name){
            this -> Name = Name;
        }
        void setGender(const string Gender){
            this -> Gender = Gender;
        }
        void setID(const string ID){
            this -> ID = ID;
        }
        void setMajor(const string Major){
            this -> Major = Major;
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
class Matchingsystem {
    private:
        vector<Person> student;
    public:
};
int main(){
    cout << "PBL 1 Project";
}