#include <iostream>
#include <string.h>
using namespace std;
class Student {

    char studentName[20];
    char studentCourse[20];
    float fee;
    public:
    void showStudent(){
          cout << "Student Name: " << studentName << endl;
            cout << "Student Course: " << studentCourse << endl;
            cout << "Student Fee: " << fee << endl;
      }
    Student(char studentName[20], char studentCourse[20])
    {
strcpy(this -> studentName, studentName);
strcpy(this -> studentCourse, studentCourse);
fee =0;
    }
Student(char studentName[20], char studentCourse[20], float fee){
Student::Student(studentName, studentCourse){
this -> fee = fee;
}
}    
Student(){

}
};


int main (){

Student s1("John", "C++");
Student s2("rama", "java", 1000);
s1.showStudent();


}