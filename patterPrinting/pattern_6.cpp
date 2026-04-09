// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n =4;
    
    for(int i =0;i<n;i++){
        int count = 4;
        for(int j=0;j<i+1;j++){
            cout<<count;
            count--;
        }
        count++;
        for(int j=0;j<n-i-1;j++){
            cout<<count;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<count;
        }
         for(int j=n-i;j<n;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
   
    for(int i =1;i<n;i++){
        int count =4;
        int j=0;
        for(;j<n-i;j++){
            cout<<count;
            count--;
        }
        count++;
        for(int k=j-1;k<n-1;k++){
            cout<<count;
        }
        for(int k=j;k<n-1;k++){
            cout<<count;
        }
   
        for(int j=i-1;j<n-1;j++){
            cout<<j+2;
        }
        cout<<endl;
    }
    

    return 0;
}