#ifndef SIMPLE_QUEUE_H
#define SIMPLE_QUEUE_H

#include<iostream>

#define MAX 10

class Queue
{
    private:
        int Item[MAX];
        int Top, Rear, size = 0;
    public:
        Queue()
        {
            Top = -1;
            Rear = -1;
        }            
    bool IsEmpty() const;
    bool IsFull() const;    
    void Enqueue(int n);
    void Dequeue();
    void Display() const;
    bool IsHalfEmpty() const;
    void Shift();
};

#endif