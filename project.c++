#include<iostream>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
class Student{
    private:
        string Name;
        string Gender;
        string ID;
        string Major;
        string Subject;
        string Level;
        string Goal;
        string Time;
        public:
        Student(string Name, string Gender, string ID, string Major, string Subject, string Level, string Goal, string Time){
            this -> Name = Name;
            this -> Gender = Gender;
            this -> ID = ID;
            this -> Major = Major;
            this -> Subject = Subject;
            this -> Level = Level;
            this -> Goal = Goal;
            this -> Time = Time;
        };
        string getName() const{ return Name; }
        string getGender() const{ return Gender; }
        string getID() const{ return ID; }
        string getMajor() const{ return Major; }
        string getSubject() const{ return Subject; }
        string getLevel() const{ return Level; }
        string getGoal() const{ return Goal; }
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
        void setLevel(const string Level){
            this -> Level = Level;
        }
        void setGoal(const string Goal){
            this -> Goal = Goal;
        }
        void setTime(const string Time){
            this -> Time = Time;
        }
        
};
class Matchingsystem {
    private:
        vector<Student> Students;
    public:

};
int main(){
    cout << "PBL 1 Project";
}