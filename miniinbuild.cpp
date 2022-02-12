#include<iostream>
using namespace std;
int getMini(int arr[],int n){
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<getMini(arr,size);


}