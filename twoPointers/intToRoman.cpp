#include <iostream>
#include <vector>
#include <string>

/*
devise a plan:

1: make a function ( intToRoman ) takes an int and returns a string.
2: make two arrays first one for numbers values and the second one for romans symbols
3: make a variable ( vsize ) to get the size of the number values array.
4: make a base case if n is zero return an empty string.
5: for the subproblem loop throw the numbers values to finds if the current n is bigger than
    the first values from the array
6: if n is greater or equal to numbers values then returns symbols[i] + function(n - values[i]).abort
7: repeat recursively until the n == 0.abort
8: in the main() call the function the pass an int argument to n.abort
9: print what's function returns in the screen.

*/

using namespace std;

string intToRoman(int n)
{

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    const int vSize = sizeof(values) / sizeof(values[0]);

    if (n == 0)
    {
        return "";
    }

    for (int i{0}; i < vSize; i++)
    {
        if (n >= values[i])
        {
            return romans[i] + intToRoman(n - values[i]);
        }
    }

    return "";
}

int main()
{

    string s = intToRoman(3749);
    cout << s;
}