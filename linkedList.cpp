#include<bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node *n1 = new Node(1);
    n1->next = new Node(2);
    n1->next->next = new Node(3);
    while(n1!=NULL){
        cout<<n1->val<<" ";
        n1 = n1->next;
    }
}