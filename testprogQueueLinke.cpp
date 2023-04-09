#include <iostream>
#include "QueueAsLinked.h"
using namespace std;

int main()
{
    LinkedQueue<int> queue;
    int x, y;

    queue.initializeQueue();

    x = 4;
    y = 5;

    queue.addQueue(x);//4

    queue.addQueue(y);//5

    queue.deQueue(x);//delet4

    queue.addQueue(x + 5);//9

    queue.addQueue(16);//16

    queue.addQueue(x);//4

    queue.addQueue(y - 3);//2

    cout << "Queue Elements: ";

    while (!queue.isEmptyQueue())
    {
        queue.deQueue(y);
        cout << " " << y;

    }

    cout << endl; 

    return 0;

    
}