#include "deque.hpp"

bool dq::IsEmpty() const
{
    if( Front == -1 ) { return true; }
    return false;
}

bool dq::IsFull() const
{
    if( (Front ==0 && Rear == MAX -1) || (Front == Rear + 1) ) { return true; }
    return false;
}

void dq::InsertFront(int n)
{
    if( IsFull() )
    {
        std::cout<<"\nthe Deque is already full";
        return;
    }
    else
    {
        if(Front == -1)
        {
            Front = 0;
            Rear = 0;
        }
        else if(Front < 1) { Front = MAX - 1; }
        else { Front -= 1; }
        Item[Front] = n;
        Size += 1;
    }
}

void dq::InsertRear(int n)
{
    if( IsFull() )
    {
        std::cout<<"\nthe Deque is already full";
        return;
    }
    else
    {
        if(Front == -1 ) 
        {
            Front = 0;
            Rear = 0;
        }
        else if(Rear == MAX -1) { Rear = 0; }
        else { Rear++; }
        Item[Rear] = n;
        Size += 1;
    }
}

void dq::DeleteFront()
{
    if( IsEmpty() )
    {
        std::cout<<"\nthe Deque is already empty";
        return;
    }
    else
    {
        if(Front == 0 && Rear == 0)
        {
            Front = -1;
            Rear = -1;
        }
        else if( Front = MAX -1) { Front = 0; }
        else { Front += 1; }
        Size -= 1;
    }
}

void dq::DeleteRear()
{
   if( IsEmpty() )
    {
        std::cout<<"\nthe Deque is already empty";
        return;
    }
    else
    {
        if(Front == 0 && Rear == 0)
        {
            Front = -1;
            Rear = -1;
        }
        else if(Rear == 0) { Rear = MAX -1; }
        else { Rear -= 1; }
        Size -= 1;
    } 
}

void dq::Display() const
{
    for(int i = Front ; i <= Size ; i = (i+1) % MAX )
        std::cout<<Item[i]<<" ";
    std::cout<<"\n";    
}

int dq::GetFront() const { return Item[Front]; }
int dq::GetRear() const { return Item[Rear]; }