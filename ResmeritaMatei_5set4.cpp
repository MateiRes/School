#include <iostream>
using namespace std;
int main()
{
    int i,n,maxim=0,z=0,a,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        maxim=max(maxim,a);
        b=z;
        if(a==b)
        {
            z=a;
        }
        else
            if(a==0 || b==0)
            {
                if(a)
                {
                    z=a;
                }
                else
                {
                    z=b;
                }
            }
            else
            {
                while(a!=b)
                {
                    if(a>b)
                        a-=b;
                    else
                        b-=a;
                }
                z=a;
            }
    }
    cout<<maxim+z;
}
