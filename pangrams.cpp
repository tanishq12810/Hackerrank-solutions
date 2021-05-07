#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int a[26]={0};
    int n= s.length();
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            a[s[i]-'a']++;
        }
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(a[i]==0){
            c=1;
        }
    }
    if(c==0){
        cout<<"pangram"<<endl;
    }
    else{
        cout<<"not pangram"<<endl;
    }
    
    
}
