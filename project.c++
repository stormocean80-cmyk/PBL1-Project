#include<iostream>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
class Student{
    private:
        string Name;
        string ID;
        string Major;
        string Subject;
        string Level;
        string Goal;
        public:
        Student(string Name, string ID, string Major, string Subject, string Level, string Goal)
        :Name(Name), ID(ID), Major(Major), Subject(Subject), Level(Level), Goal(Goal){};
        string getName() const{ return Name; }
        string getID() const{ return ID; }
        string getMajor() const{ return Major; }
        string getSubject() const{ return Subject; }
        string getLevel() const{ return Level; }
        string getGoal() const{ return Goal; }
        void setName(const string Name){
            this -> Name = Name;
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
};
class Matchingsystem {
    private:
        vector<Student> Students;
        static const int MATCHING_THRESHOLD;
        static const int SUBJECT_WEIGHT;
        static const int LEVEL_WEIGHT;
        static const int GOAL_WEIGHT;
    public:

};
int main(){
    cout << "PBL 1 Project";
}