// #include <iostream>
// using namespace std;

// class Student{
//     public:
//     string name;
//     int id;
//     int age;

//     // void getAge(){
//     //     cout<<"Age of Student is "<<age<<endl;
//     // }
//     // int getAge(){
//     //     return age;
//     // }
//     void getName(){
//         cout<<"Nmae of Student is "<<name<<endl;
//     }
//     // string getName(){
//     //     return name;
//     // }
    
// };


// int main(){
//     Student s1;
//     s1.name="Person1";
//     Student s2;
//     s2.age=22;
//     s2.name="Ram";
    
//     // cout<<s2.getAge();
//     //s2.getAge();
//     //cout<<s2.getName();
//     s2.getName();
// }


// #include <iostream>
// using namespace std;

// class Box {
// public:
//     int l, w, h;

//     int calArea() {
//         return l * w;
//     }

//     int calVol() {
//         return l * w * h;
//     }
// };

// int main() {
//     Box box1;
//     box1.l = 10;
//     box1.w = 5;
//     box1.h = 4;

//     Box box2;
//     box2.l = 6;
//     box2.w = 4;
//     box2.h = 3;

//     cout<<"Box 1 "<<box1.calArea()<<endl;
//     cout<<"Box 1 "<<box1.calVol()<<endl;
//     cout<<"Box 2 "<<box2.calArea()<<endl;
//     cout<<"Box 2 "<<box2.calVol()<<endl;
// }

// A constructor is a special member function which is called automatically when an object is created.
// It will have same name as that of class.
// It does not have return typre.

// #include <iostream>
// using namespace std;

// class Student{
//     public:
//     int age;
//     string name;
//     int roll;
//     Student(int i, string j){
//         age = i;
//         name = j;
//         //ut<<"Counstructer called " <<endl;
//     }
//     // void getName(){
//     //     cout<<"getName called "<<endl;
//     // }

//     Student(string n, int a, int r) {
//         name = n;
//         age = a;
//         roll = r;
//     }
// };
// int main(){
//     Student s1(20, "Student1");
//     cout<<s1.age<<" "<<s1.name<<endl;
//     Student s2("Student2", 22, 101); 
//     cout<<s2.name<<" "<<s2.age<<" "<<s2.roll<<endl;
// }

#include <iostream>
using namespace std;

class Student {
  public:
    int age;
    string name;

    Student(int age, string name) {
        this->age = age;
        this->name = name;
    }
};

int main() {
    Student s1(20, "Student1");
    cout << s1.age << " " << s1.name << endl;
}
