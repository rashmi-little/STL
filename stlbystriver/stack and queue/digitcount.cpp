#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;

    cout<<"Enter the number"<<endl;

    cin>>number;

    int count=floor(log10(number));

    cout<<count+1;
}