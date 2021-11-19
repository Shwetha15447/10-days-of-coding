#include<iostream>
using namespace std;
int main()
{
    int i,a[10],n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    cout<<"Reversed Array"<<endl;
    for(i=0;i<n;i++)
    {
    	cout<<a[n-i-1];
    }
  return 0;
}
