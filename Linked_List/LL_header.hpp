#ifndef LL_HEADER_H
#define LL_HEADER_H

#include<iostream>

using namespace std;

struct node
{
    int data;                   //data type that the node holds goes here.
    struct node* next;          //pointer to the adjacent node.
};     
    
class Linked_List
{                               
    private:      
        node *head, *tail;
    public:
        Linked_List()         //default constructor
        {
            head=NULL;
            tail=NULL;
        }
        ~Linked_List(){};      //destructor
    
    node* GetHead() const;      //Get pointer to the Head node

    node* GetTail() const;      //Get Pointer to the tail node

    void Add(int n);            //Add an element at the end of the linked list

    void AddFromFront(int n);
 
    void Display() const;
    
    void DisplayReverse(node* head) const;
    
    node* LinearSearch(int key) const;
   
    node* FindMiddleElement(node* start, node* last) const;
    
    node* BinarySearch(int key) const;
    
};

#endif