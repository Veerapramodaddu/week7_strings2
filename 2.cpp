#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char max=s[0];
    int d;
    for(int i=1;i<s.length();i++){
        if(s[i]>max) {
            max=s[i];
            d=i;
        }
    }
    s[d]='0';
    char smax=s[0];
    for(int i=0;i<s.length();i++){
        if(s[i]>smax) smax=s[i];
    }
    cout<<smax;
}