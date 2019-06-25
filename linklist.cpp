/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/
int length(Node *head)
{
int c = 0;
while(head != NULL)
{
head = head->next;
c++;
}
return c;
}   
    
    
void printIthNode(Node *head, int i) {
    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
int len = length(head);    
if(i<len){
int c = 0;
while(head != NULL)
{
if(i == c)
{

cout << head->data;    

return;

}    
head = head->next;
c++;
}}
     
return; 
}


