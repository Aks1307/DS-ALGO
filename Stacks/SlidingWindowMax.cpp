
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
   int k;
   cin>>k;
   int ngr[n];
   ngr[n-1] = n ;
   stack<int>st;
   st.push(a[n-1]);
   for(int i=n-2;i>=0;i--){
    while(!st.empty() && a[i]>=a[st.top()]){
        st.pop();
    }
    if(!st.empty()){
        ngr[i] = st.top();
    }else ngr[i] = n;
    st.push(i);
   }

   for(int i=0;i<=n-k;i++){
        int wm = i;
        while(ngr[wm] < i+k){
            wm = ngr[wm];
        }
        cout<<a[wm]<<endl;
   }
}
////


