// Given a singly linked list and a number k.
// Write a function to find the (N/k)th element, where N is the number of elements in the list.
// We need to consider ceil value in case of decimals.


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int fractional_node(struct Node* head,int k);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node* ptr,*start = NULL,*ptr1;
        int n,i;
        cin>>n;
        
        for(i=0;i<n;i++)
        {
            int value;
            cin>>value;
            
            ptr=new Node(value);
            
            if(start==NULL)
            {
                start=ptr;
                ptr1=ptr;
            }
            else
            {
                ptr1->next=ptr;
                ptr1=ptr1->next;
            }
        }
        ptr1->next=NULL;
        int k;
        cin>>k;
        int p = fractional_node(start,k);
        cout<<p<<endl;
    }
}
// } Driver Code Ends


/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
int fractional_node(struct Node *head, int k)
{
    int count = 0;
    struct Node* ptr = head;
    
    while(head)
    {
        count++;
        head = head -> next;
    }
    
    int index = count/k;
    if (count % k != 0)
        index++;
    
    count = 1;
    while(count < index)
    {
        ptr = ptr -> next;
        count++;
    }
    return ptr -> data;
}
