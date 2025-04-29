
#include <iostream>
#include <vector>

using namespace std;

/*
devise a plan:

** in O(n2) time


- make a class called "ArrayBubble"
- in private:
    - make 2 variables a vector of type "double" called "myVector" and an integer called "nElements".
    - make a method called "swap" that returns a void and takes 2 parameters ( int one , int two).
        - assign myVector at index "one" to "temp" variable of type double.abort
        - assign myVector at index "two" to myVector at index one.
        - assign temp to myVector at index "two".
- public:
    - make a default constructor that takes a paramater ( int max ) and assign a zero to nElement variable.
        - resize myVector to hold exact max value.
    - make a method called "insert" that takes a parameter "value" of type double.
        - assign value to myVector at index nElement.
        - increment nElement by one.
    - make a method called "Display" that return void.
        - make a loop start from zero and ended if j is bigger than nElement and j++.
            - print myVector at index j.
            - print end line.
    - make a method called "bubbleSort" that returns void.
        - initialize two variables call them out and in.
        - make an outer loop that start from "out" and initialize it to nElement - 1 and ended if "out" is less than 1 and out--.
            - make an inner loop that start form "in" and initialize it to zero and ended if "in" is bigger than "out" and in++.
                - if the element at index "in" in myVector is greater than the element at the next index "in+1".
                - swap "in" with "n+1".





*/

class BubbleSort
{

public:
    BubbleSort() : nElements(0) {}
    BubbleSort(int max) : nElements(0)
    {
        myVector.resize(max);
    }

    void insert(double value)
    {
        myVector[nElements] = value;
        nElements++;
    }

    void display()
    {

        for (int i{0}; i < nElements; i++)
        {
            cout << myVector[i] << " ";
            // cout << endl;
        }
    }

    void bubbleSorting()
    {

        int out, in;

        for (out = nElements - 1; out > 1; out--)
        {
            for (in = 0; in < out; in++)
            {
                if (myVector[in] > myVector[in + 1])
                    swap(myVector[in], myVector[in + 1]);
            }
        }
    }

private:
    vector<double> myVector;
    int nElements;
};

main()
{

    BubbleSort b1(100);

    b1.insert(2);
    b1.insert(5);
    b1.insert(1);
    b1.insert(8);
    b1.insert(6);
    b1.insert(7);
    b1.insert(3);
    b1.insert(9);
    b1.insert(4);

    b1.display();
    b1.bubbleSorting();

    cout << endl;

    b1.display();
}