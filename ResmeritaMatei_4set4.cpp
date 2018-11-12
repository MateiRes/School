#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i=1,n,p,z=3,g,cz;
    cin>>n;
    cout<<2<<' ';
    while(i<n)
    {
        cz=1;
        p=3;
        g=(int)sqrt(z)+1;
        if(p*p==z)
            cz=0;
        else
            while(p<z)
            {
                if(z%p==0)
                {
                    p=z;
                    cz=0;
                }
                p+=2;
            }
        if(cz==1)
        {
            cout<<z<<' ';
            i++;
        }
        z+=2;
    }
}
