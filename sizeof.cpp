#include<bits/stdc++.h>

using namespace std;

template<typename T>
int my_sizeof(T x){
    return (char*)(&x+1) - (char*)(&x);
}
int main(){
     int x = 5;
     cout<<my_sizeof(x)<<endl;
     double y = 5.0;
     cout<<my_sizeof(y);
}