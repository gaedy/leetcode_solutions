#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Queue
{

private:
    int nELements;
    int maxSize;
    vector<double> vectorData;
    int front;
    int rear;

public:
    Queue(int max) : maxSize(max), nELements(0), front(0), rear(-1)
    {
        vectorData.resize(max);
    }

    void insert(int value)
    {
        if (rear == maxSize - 1)
        {
            rear = -1;
        }
        vectorData[rear++] = value;
        nELements++;
    }

    int remove()
    {

        int temp = vectorData[front++];
        if (maxSize == front)
        {
            front = 0;
        }
        else
        {

            nELements--;
            return temp;
        }
    }
};

int main()
{
}