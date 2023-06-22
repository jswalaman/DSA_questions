// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int arr[5] = {0, 1, 0, 0, 1};
    for(int i: arr){
        while(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            i++;
        }
    }
    for(int i=0; i<5;i++){
                cout << arr[i] << " ";
    }
    return 0;
}
