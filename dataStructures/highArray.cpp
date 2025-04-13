
#include <iostream>
#include <vector>

using namespace std;

/*
devise a plan:

- make a class called "HighArray".
- in private: make 2 variables first one is a vector called "myVector" of type "double" and an "int" called nElements.
- in public: make a default constructor of "HighArray" and initialize nElements to zero.
    - make a another constructor that takes int max and initialize nElements to zero
    and inside this constructor resize myVector so it holds the exact max elements.
   *- make a method "find" that returns a bool and takes a variable named "searchKey" of type double.
    - inside this method make a variable called "j" of type int.
    - and make a loop using start from "j{0}" and ended at "if j < nElements", "j++".
    - inside this loop check if the element at index "j" in "myVector" is equal to "searchKey" and if checked break.
    - if the loop gone to end without get the searchKey return false.
    - otherwise retrun true.
   *- make another method called "insert" the return "void" and takes a variable called "value" of type "double".
    - inside it assign "value" to the element at index "nElement" in "myVector".
    - and increment nElement by one.
   *- make another method called "remove" that return bool and takes a variable called "value" of type double.
    - inside this method make a variable called "j" of type int.
    - and make a loop using start from "j{0}" and ended at "if j < nElements", "j++".
    - check if the value is equal to the element at index of j in myVector and break.
    - check too if j is equal to nElements if yes return false.
    - otherwise make a loop start from k = j and ended at if k < nElements, k++.
     - inside this loop assign the value of the element at index k+1 in myVector to the the element at index k.
     - decrement size of the elements in nElements by one.
     - and return true.
   *- make another method called "display" that return void and takes nothing.
     - make a loop start form zero and ended if j < nElements, j++.
     - print the myVector array at index j plus " " space between every index value.

*/

class HighArray
{

public:
  HighArray() : nElements(0) {};
  HighArray(int max) : nElements(0)
  {
    myVector.resize(max);
  }

  bool find(double searchKey)
  {

    int j;
    for (j = 0; j < nElements; j++)
    {
      if (myVector[j] == searchKey)
        break;
      if (j == nElements)
      {
        return false;
      }
      else
      {
        return true;
      }
    }
  }

  void insert(double value)
  {
    myVector[nElements] = value;
    nElements++;
  }

  bool remove(double value)
  {
    int j;
    for (j = 0; j < nElements; j++)
    {
      if (value == myVector[j])
      {
        break;
      }
      if (j == nElements)
      {
        return false;
      }
      else
      {
        for (int k = j; k < nElements; k++)
        {
          myVector[k] = myVector[k + 1];
          nElements--;
          return true;
        }
      }
    }
  }

  void display()
  {
    for (int j = 0; j < nElements; j++)
    {
      cout << myVector[j] << " ";
      cout << endl;
    }
  }

private:
  vector<double> myVector;
  int nElements;
};

main()
{

  int maxSize = 100;

  HighArray hArr(maxSize);

  hArr.insert(50);
  hArr.insert(60);
  hArr.insert(70);
  hArr.insert(20);
  hArr.insert(10);
  hArr.display();
}