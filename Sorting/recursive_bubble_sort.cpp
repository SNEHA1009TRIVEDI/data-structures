#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int j, int n){
    if(j == n - 1){
        return;
    }

    if(arr[j] > arr[j + 1]){
        swap(arr[j], arr[j + 1]);
    }

    bubble(arr, j + 1, n);
}

void bubbleSort(int arr[], int n){
    if(n <= 1){
        return;
    }

    bubble(arr, 0, n);

    bubbleSort(arr, n - 1);
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
    int j =0;
    bubbleSort(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      
    
    return 0;
}