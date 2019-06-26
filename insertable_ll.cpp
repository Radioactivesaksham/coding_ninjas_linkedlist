#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node  *next;
Node(int data)
{
this -> data = data;
this -> next = NULL;
}};
void update(Node * head, int data, int index)
{

Node *newNode = new Node(data);
Node * temp = head;
int counter = 0;
while(counter<index -1)
{
    temp = temp->next;
    counter++;
}
    newNode->next = temp->next;
    temp->next = newNode;
}
Node* input()
{
int data;
cin >> data;
Node *head = NULL;
while(data != -1)
{
Node *newNode = new Node(data);
if(head == NULL)
{
head = newNode;
}
else
{
Node *temp = head;
while( temp->next != NULL )
{
temp = temp->next;
}
temp->next = newNode;
}
cin>>data;
}
return head;
}
void print(Node *head)
{
while(head != NULL)
{
cout << head->data <<"\t";
head = head->next;
}
cout<<endl;
}
void length(Node *head)
{
int c = 0;
while(head != NULL)
{
head = head->next;
c++;
}
cout <<"the length is "<< c;
}
int main()
{/*
Node n1(10);
Node n2(20);
Node n3(30);
n1.next = &n2;
n2.next = &n3;
Node *temp = &n1;
*/
Node *head = input();
print(head);
//length(head);
while(true){
cout<<"Wanna enter more elements in ll? :";
char opt;
cin>>opt;
if(opt=='y' || opt=='Y')
{
int i, data;
cout << "enter new data to be inserted in ll : ";
cin >>data;
cout<<"enter index for new data :";
cin>>i;
update(head,data,i);
print(head);

}
else
return 0;
}
}

