#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }    
}