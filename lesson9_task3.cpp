#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int length;
    bool isPalindrome = true;
    getline(cin, str);
    length = str.length();

    for (int i = 0; i < (length / 2); i++)
    {
        if (str[i] != str[(length - 1) - i])
            isPalindrome = false;
    }

    if (isPalindrome == true)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}