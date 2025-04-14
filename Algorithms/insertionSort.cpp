
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
    - make a method called "insertionSort" that returns void.
        - initialize two variables call them out and in.
        - make a loop start from "out" 1 and ended if "out" is less than nElement and "out++"
            - assign element at index "out" in "myVector" to variable called "temp" of type "double".
            - assign out to in.
            - make a while loop if in greater than 0 and the element at index in-1 in myVector is greater or equal than temp.
                - assign the element at index "in-1" in myVector to the element at index "in" in myVector.
                - decrement the element "in" by one.
            - assign "temp" to the element at index "in" in myVector.




*/

class HighArray
{

public:
private:
};

main()
{
}