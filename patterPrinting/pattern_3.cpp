// E 
// D E 
// C D E 
// B C D E 
// A B C D E 
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;
    for(int i =0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<char('A'+(n-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}