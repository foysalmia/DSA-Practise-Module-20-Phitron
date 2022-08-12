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

void insertNodeAtPosition(Node * &head,int pos,int value){
    Node * newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    };
    if(pos == 0){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    };

    Node *tmp = head;
    int len = counting_Nodes(head);
    if(pos == len){
        insert_Node(tmp,value);
        return;
    }
    if(pos>len){
        cout<<"INVALID POSITION"<<endl;
        return;
    };
    for(int i=0;i<pos-1;i++){
        tmp = tmp->next;
    }
    Node * rest = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next = rest;
    rest->prev = newNode;
}

void print(Node * head){
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
    cout<<"Enter Position and value : "<<endl;
    int a,b;
    cin>>a>>b;
    while(true){
        insertNodeAtPosition(head,a,b);
        print(head);
        cout<<"Enter value and Positon :"<<endl;
        cin>>a>>b;
    }

    return 0;
}
