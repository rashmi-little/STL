#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row=3,column=2;
    int **ptr;
    ptr=new int *[row];
    for(int i=0;i<3;i++)
    {
        ptr[i]=new int[column];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            ptr[i][j]=10;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
}