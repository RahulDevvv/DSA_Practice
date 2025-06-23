// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v1;
//     v1.push_back(10);
//     v1.push_back(20);

//     for (int i = 0; i < v1.size(); i++) {
//         cout << v1.at(i) << " ";
//     }
//     // for(int i : v1){
//     //     cout << i << endl;
//     // }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter num ";
    cin >> n;

    vector<int> v;

    cout << "Enter " << n << " integer:" << endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    cout << "Vector in reverse: ";
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    return 0;
}
