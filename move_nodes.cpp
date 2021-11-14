#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

struct Node* head;
void insert(int x){
    Node* temp = new Node();
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL){
        temp->next=head;
    }
    head=temp;
}
void move(int n,int k){
    Node* temp1 =new Node();
    Node* temp2=new Node();
    Node* temp3 =new Node();
    Node* temp4 =new Node();
    Node* temp5 =new Node();
    Node* temp =new Node();
    temp5=head;
    temp1=head;
    temp2=head;
    temp3=head;
    temp4=head;
    for(int i=1;i<n;i++){
        temp1=temp1->next;
    }
    for(int i=1;i<n-1;i++){
        temp2=temp2->next;
    }
    for(int i=1;i<k+n-1;i++){
        temp3=temp3->next;
    }
    for(int i=1;i<k+n;i++){
        temp4=temp4->next;
    }
    head=temp1;
    temp3->next=temp5;
    temp2->next=temp4;
    temp=head;
    while(temp!=NULL){
        cout << temp->data;
        temp=temp->next;
        if(temp!=NULL){
            cout << "->";
        }
    }
}
int main(){
    int x;
    int n;
    int start=3;
    int end=4;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        insert(x);
    }
    move(start,end);
}