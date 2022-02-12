#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[30],n,i;
    //cout<<"how many nuber do you want to print:"<<endl;
    cin>>n;
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i<n; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    cout<<endl;
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
