#include <bits/stdc++.h>
using namespace std;

 void Selectionsort(int arr[],int n){
   
    for(int i =0 ;i<n;i++){
        int mini = i;
        for(int j =i+1;j<n;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    return;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    Selectionsort(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      
    
    return 0;
}