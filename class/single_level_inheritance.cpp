#include <iostream>

using std::cout;
using std::cin;
// using std::endl;  // poor buffering issue..


class student {         //base class

    private:
    int id;
    char name[20];
    public:
    void getStudent(){
    cout << "enter the student id and name"<< "\n"; 
    
    cin >> id ; cin >> name;
    }
    void showData(){
        cout << "id is " << id << "\n";
        cout << "name is " << name << "\n";
    }
};

//class details:public student{       //derived class with public visibility
//float h,w;
//public:
//void getPhysical(){
//cout << "enter the height and weight"<< "\n";
//cin >> h >> w;
//}
//void showPhysical(){
//cout << "height is " << h << "\n";
//cout << "weight is " << w << "\n";
//}
//};
//
//
//int main (){
//    details d;          // derived class object
//    d.getStudent();
//    d.getPhysical();
//    d.showData();
//    d.showPhysical();
//    getchar;
//}




// if the visibility is private --->


class details:private student{       //derived class with private visibility
float h,w;
public:
void getPhysical(){
getStudent(); //calling base class member functions
cout << "enter the height and weight"<< "\n";
cin >> h >> w;
}
void showPhysical(){
 showData();  // calling base class member functions
cout << "height is " << h << "\n";
cout << "weight is " << w << "\n";
}
};


int main (){
    details d;          // derived class object
   // d.getStudent();   // no need to call anymore  cause already called in getPhysical()
    d.getPhysical();
    //d.showData();     // no need to call anymore  cause already called in showPhysical()   
    d.showPhysical();    
    getchar;
}