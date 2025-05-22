#include <iostream>
#include <vector>
using namespace std;

/*
devise a plan:

- class Array:
    - to insert and display and theMergeSort function.
    - make 2 functions ( mergeSort - merge ).

*/

class Array
{
private:
    vector<double> theVec;
    int nElem;
    void mergeSort(vector<double>, int, int);
    void merge(vector<double>, int, int, int);

public:
    Array(int max) : nElem(0)
    {
        theVec.resize(max);
    }

    void insert(int value)
    {
        theVec[nElem] = value;
        nElem++;
    }
    void display()
    {
        cout << "Array: ";
        for (int i = 0; i < nElem; i++)
        {
            cout << theVec[i] << " ";
        }
        cout << endl;
    }

    void mergeSorting() {
        vector <double> workSpace;
        workSpace.resize(nElem);
        mergeSort(workSpace, 0, nElem - 1);
    }
};

void Array::mergeSort(vector<double> arr, int low, int high) {
    if (low == high) {
        return;
    }
    else {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid+1, high);
    }
}

void Array::merge(vector <double> arr, int lowPtr, int highPtr, int upperBound) {
    int i = 0;
    int mid = highPtr - 1;
    
    int lowerBound = lowPtr;
    int n = upperBound - lowerBound + 1 ;

    while (lowPtr <= mid && highPtr <= upperBound) {
        if (theVec[lowPtr ] < theVec[highPtr]) {
            arr[i++] = theVec[lowPtr++];
        }
        else {
            arr[i++] = theVec[highPtr++];
        }
    }

    while (lowPtr <= mid ) {
        arr[i++] = theVec[lowPtr++];
    }
    while (highPtr <= upperBound ) {
        arr[i++] = theVec[highPtr++];
    }

    for (i = 0; i < n; i++) {
        
        theVec[lowerBound + i] = arr[i];
        
    }
}


int main()
{

    Array a(10);
    a.insert(45);
    a.insert(41);
    a.insert(49);
    a.insert(44);
    a.insert(48);
    a.insert(47);

    a.display();
    a.mergeSorting();
    a.display();
}