#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,counter=0,m,g=0;
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
    for(int i=counter;i>0;i--)
    {
        n=m;
        n=n<<(32-i);
        n=n>>31;
        if(n==-1)
            n=1;
            else
                n=0;
        if(n==1)
            g+=pow(2,counter-i);
    }
    if(g==m)
        cout<<"DA";
    else
        cout<<"NU";
}
