
#include <iostream>
#include <vector>

using namespace std;

/*
devise a plan
- make a class called "myArray"
- in private: make a vector variable of type "double" called "myVector"
- in public: make a constructor that takes "int" variable called "max".
    - inside the constructor resize "myVector" so it holds only the exact "max" elements.
    - make a method called "setElement" that return void and takes 2 variables "int index" and "double value".
    - inside method "setElement" : assign value to the element at postion [index] in the myVector.
    - make a method called "getElement" that return "double" and takes int "index".
    - inside the "getElement" return the element at postion "index" in "myVector".
- in main(): create an object "arr" of a class "myArray", initialized with the max size of 100.
    - create an "int" variable "nElements" and assign it to zero.



*/

class myArray
{

public:
    myArray(int max)
    {
        myVector.resize(max);
    }

    void setElement(int index, double value)
    {
        myVector[index] = value;
    }

    double getElement(int index)
    {
        return myVector[index];
    }

private:
    vector<double> myVector;
};



main()
{

    // myArray arr(100);
    // int nElement = 4;

    // arr.setElement(0, 5);
    // arr.setElement(1, 20);
    // arr.setElement(2, 50);
    // arr.setElement(3, 10);

    // for (int i{0}; i < nElement; i++)
    // {
    //     cout << arr.getElement(i) << " ";
    // }
}