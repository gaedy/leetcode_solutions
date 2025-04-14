#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome(const string &s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            cout << "Mismatch found: " << s[left] << " != " << s[right] << endl;
            return false;
        }
        left++;
        right--;
    }

    cout << "String is a palindrome!" << endl;
    return true;
}

int main()
{
    vector<string> inputStrings = {"RACECAR", "ABBA", "TART"};

    string testStr = inputStrings[0];
    bool result = isPalindrome(testStr);

    cout << "Is \"" << testStr << "\" a palindrome? " << (result ? "Yes" : "No") << endl;
    return 0;
}
