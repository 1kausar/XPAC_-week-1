#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,cnt; cin>>n;
    string s; cin>>s;
    string ans="ABC";
    string st;
    int i=0,j=0;
    while(j<n)
    {
        char ch=s[j];
        st+=ch;
        if(j>=2)
        {

            if(st==ans)
            {
                cnt++;
                // reverse(st.begin(), st.end());
                // st.pop_back();
                // reverse(st.begin(),st.end());
                // i++;
            }
            reverse(st.begin(), st.end());
            st.pop_back();
            reverse(st.begin(),st.end());
            i++;

        }
        j++;
    }
    cout<<cnt<<endl;
}
