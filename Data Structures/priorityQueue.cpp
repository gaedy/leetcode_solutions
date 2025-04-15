
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
devise a plan:


- create a class named PriorityQueue.
- in private:
    - make a 3 variables ( a vector of type double "myPriorityVector") - ( int maxSize) - (int nElements).
- in public:
    - make a default constructor takes (int s) and initialize default values for maxSize to "s" and nElements to 0.
            - resize the vector with maxSize.
    - make a method called "insert" takes double item and return void.
        - if number of elements is 0 insert at the first index in the vector by assign item at the index nElements.
            in myPriorityVector increased by one.
        - otherwise start at the end index in the vector by looping.
            - if the new item is is greater than the current vector at index j.
                - shift upward by assign the vector at index j to vector at index j+1.
                - else break.
            - finally insert the new item by assign it to the shifted vector at index j+1
                and increase the elements number by one.
    - make a method called "remove" takes nothing and returns double.
        - get the minimum item by return the vector at index nElements decreased by one.
    - make a method called "peek" takes nothing and returns double.
        - get the minimum item by return the the vector at index nElements - 1.
    - make a method called "isEmpty" takes nothing and returns bool.
        - return true if if the nElements is equal to 0.
    - make a method called "isFull" takes nothing and returns bool.
        - return true if the maxSize elements is equal to nElements.




*/

class PriorityQueue
{
private:
    vector<double> myPQVector;
    int maxSize;
    int nElements;

public:
    PriorityQueue(int max) : maxSize(max), nElements(0)
    {
        myPQVector.resize(maxSize);
    }

    void insert(double value)
    {
        if (nElements == 0)
        {
            myPQVector[nElements++] = value;
        }
        else
        {
            for (int i = nElements - 1; i > 0; i--)
            {
                if (value > myPQVector[i])
                {
                    myPQVector[i + 1] = myPQVector[i];
                }
                else
                {
                    break;
                }

                myPQVector[i + 1] = value;
                nElements++;
            }
        }
    }
};

int main()
{
}