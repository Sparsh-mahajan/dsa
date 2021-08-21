#include "simple_queue.hpp"

bool Queue::IsEmpty() const
{
    if(Top == -1 && Rear == -1) { return true; }
    else { return false; }
}

bool Queue::IsFull() const
{
    if( Top==0 && Rear == MAX -1) { return true; }
    else { return false; }
}

void Queue::Enqueue(int n)
{
    if( IsFull() )
    {
        std::cout<<"\nthe queue is already full";
        return;
    }
    else
    {
        Top += 1;
        Rear += 1;
        Item[Rear] = n;
    }
}

void Queue::Dequeue()
{
    if( IsEmpty() )
    {
        std::cout<<"\nthe queue is already empty";
        return;
    }
    else
    {
        if(Top >= Rear)
        {
            Top = -1;
            Rear= -1;
        }
        else
        {
            std::cout<<"\nthe element that was deleted is "<<Item[Top];
            Top += 1;
        }    
    }
}

void Queue::Display() const
{
    if( IsEmpty() )
    {
        std::cout<<"\nthe queue is already empty";
        return;
    }
    for( int i = Top ; i <= Rear ; i++ )
        std::cout<<Item[i]<<" ";
    std::cout<<"\n";
    
}