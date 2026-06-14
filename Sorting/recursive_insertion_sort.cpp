#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[],int key,int j){
   if(j<0 || arr[j]<=key){
       arr[j+1]=key;
       return;
   }
   arr[j+1]=arr[j];
    j = j-1;
    insertion(arr,key,j);
}
void insertionSort(int arr[], int n,int i){
    if(i>=n){
        return;
    }
    int key = arr[i];
    int j = i-1;
    insertion(arr,key,j);
    insertionSort(arr,n,i+1);
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
    insertionSort(arr,n,j);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}