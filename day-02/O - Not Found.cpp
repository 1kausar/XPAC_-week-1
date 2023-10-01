#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    bool flage=false;
    string s,ans; cin>>s;
    sort(s.begin(),s.end());
    set<char>ss;
    for(int i=0 ; i<s.size() ; i++)
    {
        ss.insert(s[i]);
    }
    for(char i='a' ; i<='z' ; i++)
    {
        if(ss.count(i)==0)
        {
        flage=true;
        ans=i;
        break;
        }
    }
    if(flage)cout<<ans<<endl;
    else cout<<"None"<<endl;
    return 0;
}
