#include "circular_queue.hpp"

bool cq::IsEmpty() const
{
    if(Front == -1 && Rear == -1) { return true; }
    return false; 
}

bool cq::IsFull() const
{
    if((Front == 0 && Rear == MAX-1)||(Front == Rear +1 )) { return true; }
    return false;
}

void cq::Enqueue(int n)
{
    if( IsFull() ) 
    {
        std::cout<<"\nthe queue is already full";
        return;
    }
    else
    {
        if( IsEmpty() ) { Front += 1; }
        Rear = (Rear + 1) % MAX ;
        Item[Rear] = n;
        Size += 1;
    }
}

void cq::Dequeue()
{
    if( IsEmpty() ) 
    {
        std::cout<<"\nthe queue is already empty";
        return;
    }
    else
    {
        std::cout<<"\nthe element that was deleted is"<<Item[Front];
        Front += 1;
        Size -= 1;
    }
}

void cq::Display() const
{
    for(int i = Front ; i <= Size ; i = (i + 1)%MAX ) // very clever use of modulus fucntion (not my idea xD) ;)))
        std::cout<<Item[i]<<" ";
    std::cout<<"\n";    
}
