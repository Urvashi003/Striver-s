#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor para
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &head, int d){
    //new node create
    Node* temp= new Node(d);
    temp->next= head;
    head= temp;
}

void InsertAtTail(Node* &tail, int d){
    //new Node create
    Node* temp = new Node(d);
    tail->next= temp;
    tail= temp;
}
void print(Node* &head){
    Node* temp= head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;

}

int main(){
   Node* node1 = new Node(10);
//    cout<<node1->data<<endl;
//    cout<<node1->next<<endl;

   //head point to node 1
   Node* head = node1;
   Node* tail = node1;
   
   print(head);
   InsertAtHead(head,12);
   print(head);

}