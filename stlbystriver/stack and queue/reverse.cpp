#include<iostream>
using namespace std;
int main()
{
    int rev=0,rem;
    cout<<"Enter the number"<<endl;
    int number;
    cin>>number;
    while(number!=0)
    {
        rem=number%10;
        rev=rev*10+rem;
        number=number/10;
    }
    cout<<"The reverse of the number is "<<rev<<endl;
    return 1;
}