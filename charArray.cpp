#include<iostream>
using namespace std;
void PrintArray(char array[], int n){
    for(int i = 0; i<5; i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int n = 5;
    char array[n] = {'a','b','c','d','f'};

    PrintArray(array,n);

}