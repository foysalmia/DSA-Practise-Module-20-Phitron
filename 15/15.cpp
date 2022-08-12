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

void replaceFirstWithLast(Node * &head){
    if(head->next == NULL) return;
    Node *tmp = head;

    int first = tmp->value;

    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }

    int last = tmp->next->value;
    tmp->next = NULL;

    Node *newNode = new Node(last);
    newNode->next = head;
    head = newNode;
    return;
}

void print(Node * head){
    while(head!=NULL){
        cout<<head->value;
        if(head->next != NULL) cout<<" -> ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node * head = NULL;
    int a;
    cout<<"Insert -1 to show the replaced list"<<endl;
    cin>>a;
    while(a!=-1){
        insert_node(head,a);
        cin>>a;
    };
    replaceFirstWithLast(head);
    print(head);

    return 0;
}
