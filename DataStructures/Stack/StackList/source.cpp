//#include <iostream>
#include "StackList.h"
using namespace std;


int main() {
    const StackList list;


    list.push(51);
    list.push(91);
    list.push(21);

    list.displayStackList();

    list.pop();

    list.displayStackList();
}
