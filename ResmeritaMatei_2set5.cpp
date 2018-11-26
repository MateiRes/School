#include<iostream>
using namespace std;
int main ()
{
    int n,counter=0;
    cin>>n;
    if(n==0)
    {
        cout<<1;
        return 0;
    }
    if(n>=0)
    {
        while(n>0)
        {
            n=n>>1;
            counter++;
        }
    }
    else
        if(n==-1)
        {
            cout<<1;
            return 0;
        }
        else
        while(n<-1)
        {
            n=n>>1;
            counter++;
        }
    cout<<counter;
}
