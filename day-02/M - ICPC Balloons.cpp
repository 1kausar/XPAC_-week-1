
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int>mp;
        for(int i=0 ; i<n ; i++)
        {
            mp[s[i]]++;
        }

        int ans=0;
        for(auto it=mp.begin() ; it!=mp.end() ; it++)
        {
            if((it->second)>1)
            {
                ans+=(it->second)+1;
            }
            else
            {
                ans+=(it->second)+1;
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}
