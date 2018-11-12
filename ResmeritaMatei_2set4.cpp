#include <iostream>
using namespace std;
int main()
{
    int a=0,b,i,z=0,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
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
    cout<<z;
}
