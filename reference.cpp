#include<bits/stdc++.h>

using namespace std;

int main(){
    int x = 5;
    int *y = &x;
    *y = 6;
    cout<<y<<endl;
    cout<<x<<endl;

    cout<<"----------------"<<endl;
    
    int p = 2;
    int &q = p;
    q = 3;
    cout<<q<<endl;
    cout<<p<<endl;
}