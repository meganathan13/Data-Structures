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

// count the number of nodes in list
int count(){
    Node* temp = head;
    int count1=0;
    while(temp->next!=NULL){
        count1++;
        temp=temp->next;
    }
    return count1;
}

//find the mid value
void findmid(){
    Node* temp = head;
    int n=count()/2;
    for(int i=0;i<n;i++){
        temp=temp->next;
    }
    cout << temp->data;
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
    }
    findmid();
}
//14-10-2021