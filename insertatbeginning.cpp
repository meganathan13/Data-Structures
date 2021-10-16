//insert at the beginning of linked list
#include<iostream>
using namespace std;

// creating struct 
struct Node{
    int data;
    Node* next;
};

// declaring global head
Node* head;

//insert at the beginning
void Insert(int x){
    Node* temp = new Node;
    temp->data=x;
    temp->next=head;
    head=temp;
}

// print the variable(temp->data)
void print(){
    Node* temp= head;
    cout << "List : ";
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << "\n";
}

// main function to call  insert and print(display)
int main(){
    head=NULL;
    int x;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        Insert(x);
        print();
    }
}
//08-10-2021