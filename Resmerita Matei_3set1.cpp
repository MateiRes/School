#include<iostream>
using namespace std;
int v[100];
int i,j,n;
int main()
{
    int k,maxim;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"Initial\n";
    for(i=n-1;i>=0;i--)
    {
        cout<<v[i]<<' ';
    }
    for(i=0;i<n;i++)
    {
        maxim=-10000000;
        for(j=i;j<n;j++)
        {
            if(maxim<v[j])
            {
                maxim=v[j];
                k=j;
            }
        }
        swap(v[i],v[k]);
    }
    cout<<"\nSortat\n";
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
    }
}
