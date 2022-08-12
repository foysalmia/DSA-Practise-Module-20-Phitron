#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_Node(Node * &head,int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    };
    tmp->next = newNode;
    newNode->prev = tmp;
};

int counting_Nodes(Node * head){
    int counter = 0;
    Node * tmp = head;
    while(tmp != NULL){
        counter++;
        tmp = tmp->next;
    }
    return counter;
}

void deleteNodeByPosition(Node * &head,int pos){
    Node *tmp = head;
    if(pos == 0 && tmp != NULL){
        tmp = tmp->next;
        head = tmp;
        return;
    };

    int len = counting_Nodes(head);
    if(pos>len-1){
        cout<<"INVALID POSITION"<<endl;
        return;
    };
    for(int i=0;i<pos-1;i++){
        tmp = tmp->next;
    }
    Node * rest = tmp->next->next;
    if(rest == NULL)tmp->next = NULL;
    else{
        Node *deleteNode = tmp->next;
        tmp->next = rest;
        rest->prev = tmp;
        delete deleteNode;
    }
}

void print(Node * head){
    if(head == NULL)cout<<"NULL"<<endl;
    while(head!=NULL){
        cout<<head->value;
        if(head->next != NULL) cout<<" <=> ";
        head = head->next;
    }
    cout<<endl;
}
void declare(Node * &head){
    insert_Node(head,10);
    insert_Node(head,15);
    insert_Node(head,20);
    insert_Node(head,25);
    insert_Node(head,30);
};

int main(){
    Node *head = NULL;
    declare(head);
    print(head);
    cout<<"Enter Position to delete : "<<endl;
    int a;
    cin>>a;
    while(true){
        deleteNodeByPosition(head,a);
        print(head);
        cout<<"Enter Position to delete : "<<endl;
        cin>>a;
    }

    return 0;
}

