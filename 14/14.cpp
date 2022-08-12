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

void insert_node(Node * &head,int value){
    Node * newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node * tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;

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

void print(Node * head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node * head = NULL;
    int len;
    int a;
    cout<<"Insert -1 to show the size of list"<<endl;
    cin>>a;
    while(a!=-1){
        insert_node(head,a);
        cin>>a;
    }
    len = counting_Nodes(head);
    cout<<len<<endl;

    return 0;
}
