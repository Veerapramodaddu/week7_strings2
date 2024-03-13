#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string d=s;
    int n=s.length();
    int p=n-1;
    while(p>=0){
        d+=s[p];
        p--;
    }
    cout<<d;
}