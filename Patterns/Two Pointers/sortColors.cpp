
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
devise a plan

1- make 3 pointer : int start, int current, int end = size of vector.
2- loop while current is less and equal to end pointer.
3- if color[current] = 0 swap its value with colors[start] and increase start and current by one.
4- overwise if colors[current] is 1, just increase current by one.
5- else colors[current] = 2 and swap colors[current] with colors[end] and decrease end by one.
6- keep iterate until current exceeds the end pointer.

*/

string vectorToString(vector<int> theInput)
{
    string output = "[";
    for (int iter : theInput)
    {
        output += std::to_string(iter) + ", ";
    }
    return output.substr(0, output.size() - 2) + "]";
}

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

    vector<int> a = {0, 0, 2, 1, 0, 1, 2};

    cout << vectorToString(sortColors(a));
}