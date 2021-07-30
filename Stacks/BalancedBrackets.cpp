
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long

int main()
{
    string s;
    getline(cin,s);
    stack<char>st;
    for(auto c : s){
        //cout<<c<<endl;
        if(c==')' || c=='}' || c==']')
        {

            while(!st.empty() && st.top()!='(' && st.top()!='{' && st.top()!='['){
                st.pop();
            }
            if(st.empty()){
              cout<<"false";
              return 0;
            }
                char x = st.top();
                if(c==')' && x!='('){
                    cout<<"false";
                    return 0;
                }
                 else if(c=='}' && x!='{'){
                    cout<<"false";
                    return 0;
                }
                 else if(c==']' && x!='['){
                    cout<<"false";
                    return 0;
                }
                st.pop();

        }else if(c=='(' || c=='{' || c=='[') st.push(c);
    }
    if(st.empty())
    cout<<"true";
    else cout<<"false";
}




