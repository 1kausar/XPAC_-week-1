
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a;
    int ans=0,i=2;
    while( a<=(c + 0.5) )
    {
        a=x;
        ans+=b;
        a*=i;
        i++;

    }
    cout<<ans<<endl;
}
