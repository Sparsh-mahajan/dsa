#ifndef DEQUE_H
#define DEQUE_H

#include<iostream>
#include<algorithm>

#define MAX 10

class Deque
{
    private:
        int Item[MAX];
        int Front, Rear, Size;
    public:
        Deque() : Front {-1}, Rear {-1}, Size {0}  //Default Constructor
        {
            //do something
        }    
        bool IsEmpty() const;
        bool IsFull() const;
        void InsertFront(int n);
        void InsertRear(int n);
        void DeleteFront();
        void DeleteRear();
        int GetFront() const;
        int GetRear() const;
        void Display() const;
};

typedef class Deque dq;
#endif