#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

    node(int data1,node* next1)
    {
        data=data1;
        next=next1;
    }

    node( int data1)
    {
        data=data1;
        next=nullptr;
    }
};

node* convert_arr_to_ll(vector<int>arr)
{
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

void print(node* head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

node* remove_tail(node* head)
{
    if(head==NULL || head->next==NULL)
    return NULL;
    node* temp=head;
    while(temp->next->next!=NULL)
    {
         temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

    return head;
}

int main ()
{
    vector<int>arr={8,9,6,5,9};
  node* head = convert_arr_to_ll(arr);
cout<<"before deleting first element - ";
print(head);

  head=remove_tail(head);
  cout<<"after deleting first element - ";
    print(head);

    return 0;
}