
//       A 
//     A B A 
//   A B C A B 
// A B C D A B C 


#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n = 4;
    int count = 0;
    for(int i =0;i<n;i++){
       for(int j =0;j<n-i-1;j++){
           cout<<"  ";
       }
        for(int j =0;j<i+1;j++){
            cout<<char('A' + j)<<" ";
   
        }
        if(i>=1){
            for(int j =0;j<i;j++){
                cout<<char('A' + j)<<" ";
            }
        }
        count++;
        cout<<endl;
        
    }

    return 0;
}