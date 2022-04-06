#include <iostream>
#include <string.h>
using std::cout;
using std::cin;

class student {
private:
int id;
char name[10];

public:
void getstudent(){

    cout << " enter the student id and name" << "\n";
    cin >> id ;
    cin >> name;
    
}
    void showstudent(){
        cout << " the id is " << id << "\n";
        cout << " the name is " << name << "\n";
    }
//void sstudent(char name[10]){             // no need to use this function
//strcpy(this -> name, name);
//}

};

class marks{
protected:
int marks1;
int marks2;
int marks3;
public: 
void getMarks(){
  cout << "enter the marks" << "\n";
  cin >> marks1;
  cin >> marks2;
  cin >> marks3;
}
void showMarks(){
    cout << "the marks of marks1" << marks1 << "\n";
    cout << "the marks of marks2 " << marks2 << "\n";
    cout << "the marks of marks3 " << marks3 << "\n";
}
};

class result:public student,public marks{
    int total;
    float average;
    public:
    void showresult(){
    total = marks1 + marks2 + marks3;
    average = total/3.0;
    cout << "the total is " << total << "\n";
    cout << "the average is " << average << "\n";

    }
};

int main (){
    result r;

r.getstudent();
r.getMarks();
r.showstudent();
r.showMarks();
r.showresult();

}