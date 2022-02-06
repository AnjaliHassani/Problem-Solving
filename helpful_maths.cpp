#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector <char> v;
    int i;
    for(i=0;i<s.length();i++){
       if(s[i]!='+'){
           v.push_back((s[i]));
       } 
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        if(i<v.size()-1){
            cout<<v[i];
            cout<<"+";
        }
        else{
            cout<<v[i];
        }
    }
}
