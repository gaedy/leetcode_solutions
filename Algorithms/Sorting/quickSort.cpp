#include <iostream>
#include <vector>
using namespace std;

class Array
{
private:
    vector<double> theVec;
    int nElems;
    void partition(int, int, double);
    void quickSort(int, int);

public:
    Array(int max) : nElems(0)
    {
        theVec.resize(max);
    }
    void insert(int value)
    {
        theVec[nElems] = value;
        nElems++;
    }
    void display()
    {
        cout << "Array: ";
        for (int i = 0; i < nElems; i++)
        {
            cout << theVec[i] << " ";
        }
        cout << endl;
    }

    void quickSorting()
    {
        quickSort(0, nElems - 1);
    }
};

void Array::partition(int start, int end, double pivot)
{
 
}

int main()
{

    Array a(10);
    a.insert(15);
    a.insert(10);
    a.display();
}
