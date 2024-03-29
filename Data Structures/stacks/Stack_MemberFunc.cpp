#include "Stack_header.hpp"

bool Stack_imp::IsEmpty() const
{
    if(st->Top == -1) { return true; }
    else { return false; }
}

bool Stack_imp::IsFull() const
{
    if(st->Top == MAX - 1) { return true; }
    else { return false; }
}

void Stack_imp::Push(int n)
{
    if( IsFull() ) //check if the stack is full
    {
        std::cout<<"\nstack is full";
        return;    //early return
    }
    else
    {
        st->Item[size] = n;
        st->Top += 1;   //updating the Top.
        size += 1;      //updating the size.
    }
}

void Stack_imp::Pop()
{
    if( IsEmpty() ) //check if the stack is empty
    {
        std::cout<<"\nstack is empty";
        return;     
    }
    else
    {
        std::cout<<"\nitem popped"<<st->Item[size-1]; //displaying an element before removing it.
        st->Top -= 1;   //updating the Top.
        size -= 1;      //updating the size.
    }
}

void Stack_imp::Display() const
{
    if( IsEmpty() )
    {
        std::cout<<"\nstack is empty";
        return;
    }
    for(int i =0 ; i < size ; i++)
        std::cout<<st->Item[i]<<" ";
    std::cout<<"\n";
}