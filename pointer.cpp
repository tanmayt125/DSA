#include<bits/stdc++.h>

using namespace std;

int main(){
    int *x = new int(5);
    cout<<*x;
    delete x;
    // x is now a dangling pointer and now it is pointing to any random value
    cout<<*x;
}