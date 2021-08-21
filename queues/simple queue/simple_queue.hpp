#ifndef SIMPLE_QUEUE_H
#define SIMPLE_QUEUE_H

#include<iostream>

#define MAX 10

class Queue
{
    private:
        int Item[MAX];
        int Top, Rear;
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
};

#endif