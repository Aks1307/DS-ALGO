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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()] < a[i]){
            st.pop();
        }
        if(st.empty()) cout<<i+1<<endl;
        else cout<<i-st.top()<<endl;
        st.push(i);
    }
}




