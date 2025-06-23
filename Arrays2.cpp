// Find Maximum Element-----------------------------------
// #include<iostream>
// using namespace std;

// int findMax(int arr[], int size){
//     int maxElement = arr[0];
//     for(int i = 1; i < size; i++){
//         if(arr[i] > maxElement){
//             maxElement = arr[i];
//         }
//     }
//     return maxElement;
// }

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     //int maxElement = findMax(arr, 5);
//     cout << "Maximum element : " << findMax(arr, 5) << endl;

//     return 0;
// }


//Find Even and Odd----------------------------------

// #include <iostream>
// using namespace std;

// int findEven(int arr[], int size){
//     int num=0;
//     for(int i = 0; i < size; i++){
//        if(arr[i]%2==0){
//         num++;
//        }
//     }
//     return num;
// }

// int findOdd(int arr[], int size){
//     int num=0;
//     for(int i = 0; i < size; i++){
//        if(arr[i]%2!=0){
//         num++;
//        }
//     }
//     return num;
// }
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     cout<<"Even :"<<findEven(arr,5)<<endl;
//     cout<<"Odd :"<<findOdd(arr,5)<<endl;
// }

// #include <iostream>
// using namespace std;

// void findEvenOdd(int arr[], int size, int &evenCount, int &oddCount){
//     evenCount = 0;
//     oddCount = 0;
//     for(int i = 0; i < size; i++){
//        if(arr[i]%2==0){
//         evenCount++;
//        }else{
//         oddCount++;
//        }
//     }
// }
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int evenCount=0;
//     int oddCount=0;
//     findEvenOdd(arr, 5, evenCount, oddCount);
//     cout<<"Even :"<<evenCount<<" "<<"Odd :"<<oddCount<<endl;
//     return 0;
// }


// Reverse Array---------------------------------------------


// #include <iostream>
// using namespace std;    

// void reverseArray(int arr[], int size){
//     for(int i = size - 1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     reverseArray(arr, 5);
//     cout << endl;
//     return 0;
// }


// Find the second Largest Element--------------------------------------


// #include<iostream>
// using namespace std;

// void secondLargest(int arr[], int size){
//     int maxElement = arr[0];
//     for(int i = 1; i < size; i++){
//         if(arr[i] > maxElement){
//             maxElement = arr[i];
//         }
//     }
//     for(int i = 0; i < size; i++){
//         if(arr[i] == maxElement){
//             arr[i] = -1; 
//         }
//     }
//     int secondLargest = arr[0];
//     for(int i = 1; i < size; i++){
//         if(arr[i] > secondLargest){
//             secondLargest = arr[i];
//         }
//     }
//     cout << secondLargest << endl;
// }

// int main(){
//     int arr[5] = {1, 2, 3, 6, 8};
//     cout << "Second Largest Element : ";
//     secondLargest(arr, 5);  
// }


// #include <iostream>
// using namespace std;        

// int secondLargest(int arr[], int size) {
//     int firstMax = INT_MIN, secondMax = INT_MIN; 

//     for (int i = 0; i < size; i++) {
//         if (arr[i] > firstMax) {
//             secondMax = firstMax; 
//             firstMax = arr[i];
//         } else if (arr[i] > secondMax && arr[i] != firstMax) {
//             secondMax = arr[i];
//         }
//     }
//     return secondMax;
// }
// int main() {
//     int arr[5] = {1, 2, 3, 6, 8};
//     cout << "Second Largest Element : " << secondLargest(arr, 5) << endl;

//     return 0;
// }


// Find the first repeating Element--------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 3, 4, 5, 6};
//     int size = 7;

//     for(int i = 0; i < size; i++) {
//         for(int j = i + 1; j < size; j++) {
//             if(arr[i] == arr[j]) {
//                 cout << "First repeating element is: " << arr[i] << endl;
//             }
//         }
//     }
// }


//check if an array is sorted--------------------------------------


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     bool isSorted = true;

//     for (int i = 0; i < size - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             isSorted = false;
//             break;
//         }
//     }

//     if (isSorted)
//         cout << "Array is sorted." << endl;
//     else
//         cout << "Array is not sorted." << endl;

//     return 0;
// }


// #include <iostream> 
// using namespace std;

// bool isSorted(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[]={1,5,3,4};
//     if(isSorted(arr,4))  cout << "Array is sorted." << endl;
//     else
//         cout << "Array is not sorted." << endl;
// }

//(1,0,0,1,1,1,0)  Count the number of zeros and one
//{4,7,8,3,1,10,17}, k=9 -> count the number of elements greater than k