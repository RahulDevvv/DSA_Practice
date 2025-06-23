// #include<iostream>
// using namespace std;

// void myfun1(int &x){
//     x++;
//     cout<<"Increment done, x is "<<x<<endl;

// }
// int main(){
//     int a=5;
//     myfun1(a);
//     cout<<"new value of a: "<<a<<endl;

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5;
//     int *ptr = &a;
//     //int &ref=a;

//     //cout<<ref;
//     cout<<&a<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;

// }


#include <iostream>
using namespace std;

int main() {
    int b = 15;
    int *p = &b;     
    int **ptr = &p;

    cout << &b << endl;     
    //cout << *ptr << endl;   
    cout << **ptr << endl;  

    return 0;
}
