// ****
// *  *
// *  *
// ****

#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n =4;
    for(int i =0;i<n;i++){//rows
        if(i==0 || i == n-1){
            for(int j =0;j<n;j++){
                cout<<"*";
            }
        }
        else{
            for(int j=0;j<n;j++){//col
                if(j==0 || j==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

// optimal
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}