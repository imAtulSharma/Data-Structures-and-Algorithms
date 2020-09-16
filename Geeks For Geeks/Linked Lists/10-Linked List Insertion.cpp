// Create a link list of size N according to the given input literals.
// Each integer input is accompanied by an indicator which can either be 0 or 1. If it is 0, insert the integer in the beginning of the link list.
// If it is 1, insert the integer at the end of the link list. 

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 

Node *insertAtBegining(Node *head, int newData);
Node *insertAtEnd(Node *head, int newData);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            if(indicator)
                head = insertAtEnd(head, data); 
            else
                head = insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends


/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
   struct Node* ptr = new struct Node(newData);
   ptr -> next = head;
   return ptr;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
   struct Node* temp = head;
   struct Node* ptr = new struct Node(newData);
   ptr -> next = NULL;
   
   if (head == NULL)
   {
       return ptr;
   }
   
   while (temp -> next)
        temp = temp -> next;
   
   temp -> next = ptr;
   
   return head;
}
