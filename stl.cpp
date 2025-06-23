#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m1;

    m1[001] = "Person1";
    m1[99] = "person2";
    //m1[99] = "person3";

    cout << m1[99] << endl;
    cout << m1.size() << endl;

    for(auto i: m1){
        cout << i.first << " " << i.second << endl;
    }
}