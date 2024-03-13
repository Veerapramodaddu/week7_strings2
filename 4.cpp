#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string d;
    cin>>d;
    string a;
    bool flag=false;
    if(s.length()!=d.length()) {
         cout<<"False";
         return 0;
         }
    for(int i=0;i<s.length();i++){
        for(int j=0;j<d.length();j++){
            if(s[i]==d[j]){
                flag=true;
                continue;
            }
        }
        if(flag==false) break;
    }
    if(flag==true)  cout<<"True";
    else cout<<"False";

}