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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    stack<int>st;
    int t[n];
    t[n-1]  = -1;
    st.push(a[n-1]);
    for(int i = n-2;i>=0;i--){
        while(!st.empty() && st.top() < a[i]){
            st.pop();
        }
        if(!st.empty()){
            t[i] = st.top();
        }else t[i] = -1;
        st.push(a[i]);
    }
    for(int i=0;i<n;i++) cout<<t[i]<<endl;
}




