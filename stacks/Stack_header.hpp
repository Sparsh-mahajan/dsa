#ifndef STACK_HEADER_H
#define STACK_HEADER_H

#include<iostream>

/* the stack works on the principle of LIFO - Last In First Out
    which means that the LAST element that was 'pushed' (added) into the stack
    will be 'popped' (removed) FIRST. */

#define MAX 10 //Max no of elements that can fit into the stack
struct Stack
{
    int Item[MAX];  //array that will hold the elements of the stack
    int Top;        // Top to keep track of the top element
};

class Stack_Implementation
{
    private:
        Stack *st;          
        int size = 0; 

    public:
        Stack_Implementation()
        {   
            st->Top= -1;            //default contructor to create a stack.
        }                           // Top = -1 to indicate Stack is empty.

    int IsFull() const;        
    int IsEmpty() const;
    void Push(int n);  // to add an element in the stack from the top(upmost element)
    void Pop();        // to remove an element in the stack from the top(upmost element)
    void Display() const;  //traverse through the contents of the stack
};

typedef class Stack_Implementation Stack_imp;
#endif