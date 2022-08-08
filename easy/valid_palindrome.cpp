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

bool isPalindrome(string s)
{
    string t = "";

    if (s == "")
    {
        return true;
    }

    for (auto i : s)
    {
        int k = i;
        if ((k >= 65 && k <= 90) || (k >= 48 && k <= 57) || (k >= 97 && k <= 122))
        {
            t += tolower(i);
        }
    }

    if (t == "")
    {
        return true;
    }


    bool res = true;

    int len = t.size();

    for (int i = 0; i < len / 2; i++)
    {
        if (t[i] != t[len - 1 - i])
        {
            res = false;
            break;
        }
    }

    return res;
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

    string s = "  ";
    if (isPalindrome(s))
    {
        cout << "yes"
             << "\n";
    }
    else
    {
        cout << "no"
             << "\n";
    }

    return 0;
}