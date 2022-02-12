#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int array1[5]={1,2,3,4,5}, array2[5];
    for(int i=0; i<5; i++){
        cout<<array1[i]<<" ";

    }
    cout<<endl;

    // copying array1 to array2;
    for(int i =0; i<5; i++){
        array2[i] = array1[i];
    }
    for(int i=0; i<5; i++){
        cout<<array2[i]<<" ";
    }
    return 0;
}
