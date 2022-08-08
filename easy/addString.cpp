// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define inarr(s, n, arr)        \
    for (int i = s; i < n; i++) \
        cin >> arr[i];
#define outarr(s, n, arr)       \
    for (int i = s; i < n; i++) \
        cout << arr[i];
#define lli long long int
#define MOD 1000000007

template <typename T>
void displayVector(vector<T> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << "\n";
}

template <typename T>
vector<T> inputVector(int n)
{
    vector<T> temp(n);
    for (lli i = 0; i < n; i++)
    {
        lli k;
        cin >> k;
        temp[i] = k;
    }

    return temp;
}

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void displayList(ListNode *list)
{
    while (list != nullptr)
    {
        cout << list->val << " ";
        list = list->next;
    }
    cout << "\n";
}
string addStrings(string num1, string num2)
{
    int carry = 0;
    string resultRev = "";

    int l1 = num1.size() - 1;
    int l2 = num2.size() - 1;

    while (l1 >= 0 && l2 >= 0)
    {
        int n1 = num1[l1] - '0';
        int n2 = num2[l2] - '0';

        if (carry == 0)
        {
            if (n1 + n2 >= 10)
            {
                carry = 1;
                int k = (n1 + n2) - 10;
                char p = '0' + k;
                resultRev += p;
            }
            else
            {
                char p = '0' + (n1 + n2);
                resultRev += p;
            }
        }
        else
        {
            if (n1 + n2 + carry >= 10)
            {
                int k = (n1 + n2 + carry) - 10;
                char p = '0' + k;
                resultRev += p;
                carry = 1;
            }
            else
            {
                char p = '0' + (n1 + n2 + carry);
                resultRev += p;
                carry = 0;
            }
        }

        l1--;
        l2--;
    }

    while (l1 >= 0)
    {
        int n1 = num1[l1] - '0';
        if (carry == 0)
        {
            char p = '0' + n1;
            resultRev += p;
        }
        else
        {
            if (carry + n1 >= 10)
            {
                int k = (n1 + carry) - 10;
                char p = '0' + k;
                resultRev += p;
                carry = 1;
            }
            else
            {
                char p = '0' + (carry + n1);
                resultRev += p;
                carry = 0;
            }
        }
        l1--;
    }

    while (l2 >= 0)
    {
        int n2 = num2[l2] - '0';
        if (carry == 0)
        {
            char p = '0' + n2;
            resultRev += p;
        }
        else
        {
            if (carry + n2 >= 10)
            {
                int k = (n2 + carry) - 10;
                char p = '0' + k;
                resultRev += p;
                carry = 1;
            }
            else
            {
                char p = '0' + (carry + n2);
                resultRev += p;
                carry = 0;
            }
        }
        l2--;
    }

    if (carry == 1 && l1 == -1 && l2 == -1)
    {
        resultRev += '1';
    }

    string result = "";

    for (int i = resultRev.size() - 1; i >= 0; i--)
    {
        result += resultRev[i];
    }

    return result;
}

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    TreeNode *t1 = new TreeNode(0);
    t1->right = new TreeNode(1);
    t1->left = new TreeNode(2);
    t1->right->right = new TreeNode(4);
    t1->right->left = new TreeNode(5);

    string res = addStrings("9", "99");

    cout << res << "\n";

    return 0;
}