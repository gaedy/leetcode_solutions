
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
devise a plan:


- create a 2 classes named Link and LinkedList.
    class Link:
        - in public:
            - make a 3 variables ( int iData ) - ( double dData) - (pointer to the next link in the list "pNext").
            - make a constructor takes "int id" and "double dd" and initialize them with iData and dData and null to the pointer.
            - make a method to display the data.

    class LinkedList:
        - private:
            - make a pointer for the first Link in the linkedlist and name it "pFirst".
        - public:
            - in constructor initialize that pointer to null. because there is no Link yet.
            - make a method called "isEmpty".
                - return true if "pFirst" is null.
            - make a method called "insertFirst" takes the 2 data and return void.
                - first we create a new Link object using the values of id and dd and
                    store its memory address in pointer called pNewLink.
                - set the pNext pointer of new link to point to the current first link in the list.
                - assign the newLink pointer to the first or update the pFirst to the new link.
            - make a method called getFirst takes nothing and returns a Link
                - just returns first link.
            - make a method called removeFirst takes nothing and return void.
                - save the first link to a "pTemp" pointer of type Link.
                - unlink first to the next by assign pFirst-> pNext to pFirst
                - then delete old first that we save it inside pTemp. ( just delete pTemp).
            - make a method called displayList takes nothing and return void.
                - print " List ( first --> last): "
                - start at the beginning of list.
                - until the end of the list is Null
                    - print the displayLink function from Link class.
                    - assign the next of the current to the current.
                - end line.


*/

struct Link
{

    int iData;
    double dData;
    Link *pNext;

    Link(int id, double dd) : iData(id), dData(dd), pNext(NULL)
    {
    }

    void displayLink()
    {
        cout << "{ " << iData << ", " << dData << " }" << endl;
    }
};

typedef Link *node;

class LinkedList
{
private:
    node pFirst;

public:
    LinkedList() : pFirst(NULL) {}

    void insertFirst(int id, double dd)
    {
        node newLink = new Link(id, dd);
        newLink->pNext = pFirst;
        pFirst = newLink;
    }

    Link *getFirst()
    {
        return pFirst;
    }

    void removeFirst()
    {
        node pTemp = pFirst;
        pFirst = pFirst->pNext;
        delete pTemp;
    }

    void displayList()
    {
        node pCurrent = pFirst;

        while (pCurrent != NULL)
        {
            pCurrent->displayLink();
            pCurrent = pCurrent->pNext;
        }
        cout << endl;
    }
};

int main()
{

    LinkedList theList;

    theList.insertFirst(22, 2.33);
    theList.insertFirst(55, 2.53);
    theList.insertFirst(32, 2.93);

    theList.displayList();
}