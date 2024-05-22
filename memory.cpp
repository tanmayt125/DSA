#include<bits/stdc++.h>

using namespace std;

int main(){
    // malloc 
    int *x =  (int*) malloc(5*sizeof(int));
    x[2] = 5;
    cout<<x[2]<<endl;
    cout<<*(x+2)<<endl;
    *(x+2) = 6;
    cout<<x[2]<<endl;
    for(int i=0;i<5;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;

    // calloc
    int *y = (int*) calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        cout<<y[i]<<" ";
    }
    cout<<endl;

    // free
    free(y);
    cout<<y[1];
    cout<<endl;

    // new
    int *k = new int(5);
    k[0]=1;
    cout<<k[0];
    *(k) = 2;
    cout<<k[0];

    
}