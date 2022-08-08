#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    int n = x;
    int rev = 0;
    while (n > 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    cout<<rev<<endl;

    return x == rev;
}

int main()
{
    int n = 122211;
    if (isPalindrome(n))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }


    return 0;
}