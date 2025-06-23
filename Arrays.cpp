// #include<iostream>
// using namespace std;

// int main(){
//     // int arr[5] = {10,20,30,40,50};
//     // cout<<arr[2]<<endl;
//     int arr[5];
//     int sum=0;
//     cout<<"Enter 5 numbers : "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//         sum += arr[i];
//     }
//     cout<<"Numbers are : ";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\nSum "<<sum<<endl;
// }


#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int result = sumArray(arr, 5);
    cout << "Sum of array : " << result << endl;

    return 0;
}
