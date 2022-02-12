#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(i+1 == arr[i]){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
