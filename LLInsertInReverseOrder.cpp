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
void print(){
    Node* temp = head;
    cout << "List is: " ;
    while(temp!=NULL){
        cout << temp->data ;
        temp=temp->next;
    }
    cout << "\n" ;
}
int main(){
    int x;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        insert(x);
        print();
    }
}