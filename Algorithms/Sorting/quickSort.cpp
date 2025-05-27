#include <iostream>
#include <vector>
using namespace std;

class Array
{
private:
    vector<double> theVec;
    int nElements;

public:
    Array(int max) : nElements(0)
    {
        theVec.resize(max);
    }

    void insert(double value)
    {
        theVec[nElements] = value;
        nElements++;
    }

    int size()
    {
        return nElements;
    }

    void display()
    {
        for (int i = 0; i < nElements; i++)
        {
            cout << theVec[i] << " ";
        }
        cout << endl;
    }

    void quickSorting()
    {
        quickSort(0, nElements - 1);
    }

    void quickSort(int left, int right)
    {
        if (right - left <= 0)
        {
            return;
        }
        else
        {
            double pivot = theVec[right];
            int part = partition(left, right, pivot);
            quickSort(left, part - 1);
            quickSort(part + 1, right);
        }
    }

    int partition(int left, int right, double pivot)
    {
        // Hoare Partition:

        // int i = left -1;
        // int j = right + 1;
        //
        // while (true) {
        //     do {
        //         i++;
        //     }
        //     while (theVec[i] < pivot);
        //     do {
        //         j--;
        //     }while (theVec[j] > pivot);
        //     if (i >= j) {
        //         return j;
        //     }
        //     swap(theVec[i], theVec[j]);
        // }

        // Lomuto Partition:
        int i = left - 1;

        for (int j = left; j < right; j++)
        {
            if (theVec[j] < pivot)
            {
                i++;
                swap(theVec[i], theVec[j]);
            }
        }
        swap(theVec[i + 1], theVec[right]);
        return i + 1;
    }
};

int main()
{
    int max;
    cout << "Enter Max Elements Number: ";
    cin >> max;
    Array a(max);

    int input;

    while (true)
    {
        if (a.size() >= max)
        {
            cout << "Maximum capacity reached. Stopping input.\n";
            break;
        }

        cout << "Enter value ( -1 to stop ): ";
        cin >> input;
        if (input == -1)
        {
            break;
        }
        else
        {
            a.insert(input);
        }
    }
    cout << "Array unsorted: ";
    a.display();
    cout << "Array sorted: ";
    a.quickSorting();
    a.display();
}
