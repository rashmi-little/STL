#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row=3,column=3;
    int *ptr[row];
    for(int i=0;i<column;i++)
    {
        ptr[i]=new int[column];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            ptr[i][j]=10;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
}