#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int list[5]={12,34,55,67,69};
    int pos = -1,n;
    cin>>n;
    for(int i=0; i<5; i++){
        if(n == list[i]){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<pos<<endl;
    }

    return 0;
}
