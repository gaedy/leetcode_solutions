#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ListNode
{
    int val;

    ListNode *next;

    ListNode() : next(nullptr) {};
};

typedef ListNode *node;

ListNode *removeNthFromEnd(ListNode *head, int n)
{

    if (head == nullptr)
    {
        return;
    }

    node pointer1 = head;
    node pointer2 = head;
}

int main()
{
}