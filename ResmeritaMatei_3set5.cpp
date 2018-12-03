#include<iostream>
using namespace std;
int main()
{
    int n,counter=0,m;
    cin>>n;
    m=n;
    if(n==0)
    {
        counter=1;
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
            counter=1;
        }
        else
        while(n<-1)
        {
            n=n>>1;
            counter++;
        }
        if(m<0) m=-m;
    for(int i=1;i<=counter;i++)
    {
        n=m;
        n=n<<(32-i);
        n=n>>31;
        if(n==-1)
            n=1;
        cout<<n<<endl;
    }
}
