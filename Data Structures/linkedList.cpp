
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

   



*/

int main()
{
}