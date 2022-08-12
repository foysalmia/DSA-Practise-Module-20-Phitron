#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int value;
    Node * next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void insert_node_by_position(Node * &head,int pos,int value){
    Node * newNode = new Node(value);
    Node * tmp = head;

    if(head == NULL){
        head = newNode;
        return;
    }

    if(pos == 0){
        newNode->next = tmp;
        head = newNode;
        return;
    }

    for(int i=0;i<pos-1;i++){
        tmp = tmp->next;
    }
    Node * save = tmp->next;
    tmp->next = newNode;
    newNode->next = save;

}

void print(Node * head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node * head = NULL;
    while(true){
        int a,b;
        cin>>a>>b;
        insert_node_by_position(head,b,a);
        print(head);
    }
    return 0;
}

