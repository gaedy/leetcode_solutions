
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
devise a plan



*/


int main()
{

    int arr[] = {1,2,5,8,6,1,3};

    const int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i{0}; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    arr[2] = 9787;

    


    for (int i{0}; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

}