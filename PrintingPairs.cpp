// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, N, M;
    cin >> x;
    int k;
    
    int arr1[] = {3, 2, 4, 5, 7};
    int arr2[] = {5, 6, 3, 4, 8};
    vector<vector<int>> aman;

    
    for (auto i: arr1){
        for(auto j: arr2){
            if((i + j) == x){
                aman.push_back({i, j});
        }
    }
    
    }
    for(auto i: aman){
        cout << i[0] << " " << i[1] << "\n";
    }
}

