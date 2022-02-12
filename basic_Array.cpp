
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    float avg;
    
    //cout<<arr[5]<<endl;
    for (int i = 0; i<n; i++)
    {
      cin>>arr[i];
    }
    for (int i = 0; i<n; i++)
    {
      sum += arr[i];
    }
    cout<<"The sum of array is "<<sum<<endl;
    cout<< fixed<<setprecision(2)<<"The avarage is "<<(float)sum/5<<endl;

    
    return 0;
}
