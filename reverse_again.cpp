#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int arr[n];
    int start = 0,end = n-1;
    while (start<end)
    {
       int temp = arr[start];
       arr[start]=arr[end];
       cout<<arr
       start++;
       end--;
       
    }
    
}