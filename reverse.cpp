#include<bits/stdc++.h>

using namespace std;

string reverse(string s){
    string temp = "";
    for(int i=s.size()-1;i>=0;i--){
         temp+=s[i];
    }
    return temp;
}
int main(){
    string s = "abc def ghi jkl mno";
    string res = "";
    string temp = "";
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==' '){
            temp = reverse(temp);
            res+=temp;
            res+=" ";
            temp="";
        }
        else if(i==0){
            temp+=s[i];
            temp = reverse(temp);
            res+=temp;
            temp="";
        }
        else{
            temp+=s[i];
        }
    }
    cout<<res;
}