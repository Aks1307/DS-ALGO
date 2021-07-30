#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    string s;
    getline(cin,s);
    stack<char>st;
    for(auto c : s){
        //cout<<c<<endl;
        if(c==')')
        {
            if(st.top()=='('){
                cout<<"true";
                return 0;
               }
            while(st.top()!='(') st.pop();
            st.pop();
        }else st.push(c);
    }
    cout<<"false";
}




