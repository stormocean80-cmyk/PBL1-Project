#include<iostream>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
class Student{
    private:
        string Name;
        string MSSV;
        string Major;
        string Subject;
        string Level;
        string Character;
        string Email;
        public:
        Student(string Name, string MSSV, string Major, string Subject, string Level, string Character, string Email)
        :Name(Name), MSSV(MSSV), Major(Major), Subject(Subject), Level(Level), Email(Email){};
        string getName() const{ return Name; }
        string getMSSV() const{ return MSSV; }
        string getMajor() const{ return Major; }
        string getSubject() const{ return Subject; }
        string getLevel() const{ return Level; }
        string getCharacter() const{ return Character; }
        string getEmail() const{ return Email; }
        void setName(const string Name){
            this -> Name = Name;
        }
        void setID(const string MSSV){
            this -> MSSV = MSSV;
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
        void setCharacter(const string Character){
            this -> Character = Character;
        }
        void setEmail(const string Email){
            this -> Email = Email;
        }
};
class Matchingsystem {
    private:
        vector<Student> Students;
        vector<vector<Student>> groups;
        //CHECK SINH VIEN DA TON TAI CHUA
        bool Checkstudent(const string& mssv){
        for(const auto& s: Students)
            if(s.getMSSV() == mssv) return true;
        return false;}
        //TINH DIEM
        int tinhDiem(const Student& a, const Student& b){
        int score = 0;

        if(a.getMajor() == b.getMajor()) score += MAJOR_WEIGHT;
        if(a.getSubject() == b.getSubject()) score += SUBJECT_WEIGHT;
        if(a.getLevel() == b.getLevel()) score += LEVEL_WEIGHT;
        if(a.getCharacter() == b.getCharacter()) score += CHARACTER_WEIGHT;

        return score;
    }
        //DIEM NHOM
        int diemNhom(const Student& s, const vector<Student>& group){
        int tong = 0;
        for(const auto& mem: group)
            tong += tinhDiem(s, mem);
        return tong / group.size();
    }
        //MATCH 
    void MatchNhom(const Student& s){
        int bestScore=-1, bestGroup=-1;

        for(int i=0;i<groups.size();i++){
            if(groups[i].size()>=MAX_GROUP_SIZE) continue;

            int score = diemNhom(s, groups[i]);

            if(score>bestScore){
                bestScore=score;
                bestGroup=i;
            }
        }

        if(bestScore>=MATCHING_THRESHOLD && bestGroup!=-1){
            groups[bestGroup].push_back(s);
            cout<<"Match vao nhom "<<bestGroup+1<<endl;
        } else {
            groups.push_back({s});
            cout<<"Tao nhom moi\n";
        }
    }
        static int MATCHING_THRESHOLD;
        static int MAX_GROUP_SIZE;
        static string FILENAME;
        static int MAJOR_WEIGHT;
        static int SUBJECT_WEIGHT;
        static int LEVEL_WEIGHT;
        static int CHARACTER_WEIGHT;
    public:
    void themSV(const Student& s){
        if(Checkstudent(s.getMSSV())){
            cout<<"MSSV da ton tai!"<<endl;
            return;
        }
        Students.push_back(s);
        MatchNhom(s);
    }
    Student* timSVTheoMSSV(string mssv) {
    for (auto& s : Students) {
        if (s.getMSSV() == mssv) return &s;
    }
    return nullptr; 

}
void luuVaoFile() {
    ofstream outFile(FILENAME); 
    if (!outFile) {
        cout << "Loi: Khong the mo file de luu!" << endl;
        return;
    }

    for (const auto& s : Students) {
        outFile << s.getName() << ","
                << s.getMSSV() << ","
                << s.getMajor() << ","
                << s.getSubject() << ","
                << s.getLevel() << ","
                << s.getCharacter() << ","
                << s.getEmail() << endl;
    }
    outFile.close();
    cout << "Da luu thay doi vao file " << FILENAME << endl;
}
        
};
int Matchingsystem::MATCHING_THRESHOLD = 50;
int Matchingsystem::MAX_GROUP_SIZE = 4;
string Matchingsystem::FILENAME = "students.txt";
int Matchingsystem::MAJOR_WEIGHT = 10;
int Matchingsystem::SUBJECT_WEIGHT = 50;
int Matchingsystem::LEVEL_WEIGHT = 10;
int Matchingsystem::CHARACTER_WEIGHT = 30;

int main(){
    Matchingsystem ms;
    int choice;
    do {
        cout<<"=====       =====  ========  =====     ==  ===     ==="<<endl;
	    cout<<"======     ======  ========  ======    ==  ===     ==="<<endl;
	    cout<<"=== ===   === ===  ===       === ===   ==  ===     ==="<<endl;
	    cout<<"===  === ===  ===  ========  ===  ===  ==  ===     ==="<<endl;
	    cout<<"===   =====   ===  ========  ===   === ==  ===     ==="<<endl;
	    cout<<"===    ===    ===  ===       ===    =====  ===     ==="<<endl;
	    cout<<"===     =     ===  ========  ===     ====  ====   ===="<<endl;
	    cout<<"===           ===  ========  ===      ===   ========= "<<endl;
	    cout<<"======================================================"<<endl;
	    cout<<"||1.Dang ky thong tin sinh vien                     ||"<<endl;
	    cout<<"||__________________________________________________||"<<endl;
        cout<<"||2.Chinh sua thong tin sinh vien                   ||"<<endl;
	    cout<<"||__________________________________________________||"<<endl;
	    cout<<"||3.Xem danh sach sinh vien                         ||"<<endl;
    	cout<<"||__________________________________________________||"<<endl;
	    cout<<"||4.Xem danh sach cac nhom hien tai                 ||"<<endl;
	    cout<<"||__________________________________________________||"<<endl;
        cout<<"||5.Tuy chinh thuat toan                            ||"<<endl;
	    cout<<"||__________________________________________________||"<<endl;
        cout<<"||6. Chay lai he thong                              ||"<<endl;
	    cout<<"||__________________________________________________||"<<endl;
	    cout<<"||7.Thoat he thong                                  ||"<<endl;
	    cout<<"======================================================"<<endl;
        cout<<"Lua chon cua ban la: ";
        cin >> choice;
    if (choice ==1){
            string name,mssv,major,subject,level,character,email;

            cout<<"Ten: "; getline(cin,name);
            cout<<"MSSV: "; getline(cin,mssv);
            cout<<"Nganh: "; getline(cin,major);
            cout<<"Mon hoc:"; getline(cin,subject);
            cout<<"Trinh do(A,B,C,D): "; getline(cin,level);
            cout<<"Tinh Cach(huong ngoai hay huong noi): "; getline(cin,character);
            cout<<"Email: "; getline(cin,email);
            ms.themSV(Student(name,mssv,major,subject,level,character,email));
            ms.luuVaoFile();
           
        }
    else if(choice == 2){
            string MSSV;
            cout << "Nhap MSSV cua sinh vien can chinh sua: ";
            cin.ignore(); 
            getline(cin, MSSV);

             Student* sv = ms.timSVTheoMSSV(MSSV);

             if (sv != nullptr) {
             string temp;
            cout << "--- Dang chinh sua thong tin cho SV: " << sv->getName() <<endl;
        
            cout << "Nhap ten moi (De trong neu khong doi): "; 
            getline(cin, temp); if(!temp.empty()) sv->setName(temp);

            cout << "Nhap nganh moi (De trong neu khong doi): "; 
            getline(cin, temp); if(!temp.empty()) sv->setMajor(temp);

            cout << "Nhap mon hoc moi (De trong neu khong doi): "; 
            getline(cin, temp); if(!temp.empty()) sv->setSubject(temp);

            cout << "Nhap trinh do moi (De trong neu khong doi): "; 
            getline(cin, temp); if(!temp.empty()) sv->setLevel(temp);

            cout << "Nhap tinh cach moi (De trong neu khong doi): "; 
            getline(cin, temp); if(!temp.empty()) sv->setCharacter(temp);

            cout << "Nhap email moi (De trong neu khong doi): "; 
            getline(cin, temp); if(!temp.empty()) sv->setEmail(temp);
            ms.luuVaoFile();

            cout << "Cap nhat thanh cong!"<<endl;
    } else {
        cout << "Khong tim thay sinh vien co MSSV: " << MSSV << endl;
    };};
    
}
           
        
    while (choice !=1 && choice !=2 && choice !=3 && choice !=4 && choice !=5 && choice !=6);{
        cout<<"Lua chon khong hop le,vui long chon lai!"<<endl;
    };}