
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
devise a plan

1- 
2- 
3- 
4- 
5- 
6- 

*/


vector<int> sortColors(vector<int> &colors)
{

    int start = 0;
    int current = 0;
    int end = colors.size() - 1;

    while (current <= end)
    {

        if (colors[current] == 0)
        {

            if (colors[start] != 0)
            {
                swap(colors[start], colors[current]);
            }

            current++;
            start++;
        }
        else if (colors[current] == 1)
        {
            current++;
        }
        else
        {
            if (colors[end] != 2)
            {
                swap(colors[current], colors[end]);
            }

            end--;
        }
    }
    return colors;
}

int main()
{

}