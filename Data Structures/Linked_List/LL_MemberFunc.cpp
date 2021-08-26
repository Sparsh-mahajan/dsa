#include "LL_header.hpp"

node* Linked_List::GetHead() const { return head; }

node* Linked_List::GetTail() const { return tail; }

void Linked_List::Add(int n)
{
    node* temp= new node;
    temp->data=n;         //initializing the new node
    temp->next=NULL;      //last node will always point to null
    
    if(head==NULL)
    {
        head=temp;       //if the node is 1st then both head and tail 
        tail=temp;       //will point to it.
    }
    else
    {
        tail->next=temp;  
        tail=tail->next;
    }
}  

void Linked_List::AddFromFront(int n)
{
    node* temp = new node;          
    temp->data = n;
    temp->next = head;
    head = temp;
}

void Linked_List::Display() const
{
    node* disp=head;
    while(disp!=NULL)
    {
        cout<<disp->data<<" ";
        disp=disp->next;
    }
}

void Linked_List::DisplayReverse(node *head) const //recursive function to display the contents of the linked list in reverse
{
    node* disp = head;
    if(!disp) { return; }  // base condition that while disp != nullptr to end the calls to the function
    DisplayReverse( disp->next ); 
    cout<<disp->data<<" ";   
}

node* Linked_List::LinearSearch(int key) const
{
    node* searchptr = head;
    while(searchptr != NULL)
    {
        if(searchptr->data == key) { return searchptr; }
        searchptr = searchptr->next;
    }
        return NULL;
}

node* Linked_List::FindMiddleElement(node* start, node* last) const //use GetHead() and GetTail() 
{                                                                   //functions to pass parameters to the function
    
    node* fastptr = start->next;       //fastptr can also be intialized with start but
    node* slowptr = start;             //when no. of nodes in linked list is even start->next intialization     
    while(fastptr != last)             //will take less no. of times in loop than start intialization.
    {                                  // in the case of odd no. of nodes the no. of times the loopp runs is the same.
        fastptr = fastptr->next;
        if(fastptr != last)
        {
            fastptr = fastptr->next;    
            slowptr = slowptr->next;
        }
    }
    return slowptr;
}

node* Linked_List::BinarySearch(int key) const
{
    node* start = head;
    node* last = NULL;
    node* mid = FindMiddleElement(start, last); 
    do
    {
        if(mid == NULL) {  return NULL; }

        if(mid->data == key) { return mid; }

        else if(mid->data > key) { last = mid; }

        else { start = mid->next; }
        mid = FindMiddleElement(start, last);
    }
    while(last != start);
    return NULL;
}

void Linked_List::BubbleSort(node * ptr) 
{
    node * CurrentNode = ptr;
    if(!CurrentNode) { return; }
    else
    {
        BubbleSort(CurrentNode->next);
        node* Index = head;
        while(Index != CurrentNode)
        {
            if(Index->data > Index->next->data)
            {
                std::swap(Index->data, Index->next->data);
            }
            Index = Index->next;
        }
    }
}

void Linked_List::DeleteFromEnd()
{
    node* temp = head;
    while(temp->next != tail) { temp = temp->next; }
    temp->next = NULL;
    tail = temp;
}

void Linked_List::DeleteFromFront()
{
    head = head->next;
}