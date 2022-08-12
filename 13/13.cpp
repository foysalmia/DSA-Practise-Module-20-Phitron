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

void delete_node_by_position(Node * &head,int pos){
    Node *tmp = head;
    if(pos==0){
        head = tmp->next;
        delete tmp;
        return;
    };

    for(int i=0;i<pos-1;i++){
        tmp=tmp->next;
    }
    Node * rest = tmp->next->next;
    Node * deleted = tmp->next;
    tmp->next = rest;
    delete deleted;
}

void print(Node * head){
    if(head==NULL){
        cout<<"NULL"<<endl;
        return;
    }
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
};

Node * assign_Node(){
    Node * head = new Node(10);
    Node * first = new Node (15);
    Node * second = new Node (20);
    Node * third = new Node (25);
    Node * fourth = new Node (30);
    Node * fifth = new Node (35);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    return head;
};

int main(){
    Node * head = NULL;
    head = assign_Node();
    cout<<"Positions are start from 0 to 5"<<endl;
    print(head);
    while(true){
        int a;
        cin>>a;
        delete_node_by_position(head,a);
        print(head);
    }

    return 0;
}
