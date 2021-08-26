#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#include<iostream>

#define MAX 10 

class CircularQueue
{
    private:
        int Item[MAX];
        int Front, Rear, Size;
    public:
        CircularQueue() : Front { -1 }, Rear { -1 }, Size { 0 } //default constructor to initialize Front and Rear.
        {
            //do something
        };    
        bool IsEmpty() const;
        bool IsFull() const;
        void Enqueue(int n);
        void Dequeue();
        void Display() const;
};

typedef class CircularQueue cq;

#endif