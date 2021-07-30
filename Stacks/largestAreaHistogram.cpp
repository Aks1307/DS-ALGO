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
    int nsr[n],nsl[n];
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }
        if(!st.empty()){
            nsl[i] = st.top();
        }else nsl[i] = -1;

        st.push(i);
    }

    while(!st.empty()) st.pop();

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }
        if(!st.empty()){
            nsr[i] = st.top();
        }else nsr[i] = n;

        st.push(i);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int lv = a[nsl[i]+1];
        int rv = a[nsr[i]-1];
        ans = max(ans ,a[i] * (nsr[i]-nsl[i] - 1) );
    }
    cout<<ans<<endl;
}




