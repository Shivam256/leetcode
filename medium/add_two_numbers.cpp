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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int carry = 0;
    ListNode *result = new ListNode(-1);

    ListNode *hd = result;

    while (l1 != nullptr && l2 != nullptr)
    {
        int val = l1->val + l2->val + carry;
        carry = 0;
        int rval;
        if (val >= 10)
        {
            rval = val - 10;
            carry = 1;
        }
        else
        {
            rval = val;
        }

        result->next = new ListNode(rval);
        result = result->next;

        l1 = l1->next;
        l2 = l2->next;
    }

    while (l1 != nullptr)
    {
        int val = l1->val + carry;
        carry = 0;
        int rval;
        if (val >= 10)
        {
            rval = val - 10;
            carry = 1;
        }
        else
        {
            rval = val;
        }

        result->next = new ListNode(rval);
        result = result->next;
        l1 = l1->next;
    }
    while (l2 != nullptr)
    {
        int val = l2->val + carry;
        carry = 0;
        int rval;
        if (val >= 10)
        {
            rval = val - 10;
            carry = 1;
        }
        else
        {
            rval = val;
        }

        result->next = new ListNode(rval);
        result = result->next;
        l2 = l2->next;
    }

    if (carry != 0)
    {
        result->next = new ListNode(carry);
    }

    return hd->next;
}

int main()
{
    ListNode *l1 = new ListNode(9);
    l1->next = new ListNode(9);
    l1->next->next = new ListNode(9);
    l1->next->next->next = new ListNode(9);
    l1->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next->next = new ListNode(9);

    ListNode *l2 = new ListNode(9);
    l2->next = new ListNode(9);
    l2->next->next = new ListNode(9);
    l2->next->next->next = new ListNode(9);

    displayList(l1);
    displayList(l2);
    

    ListNode *res = addTwoNumbers(l1, l2);
    displayList(res);

    // TreeNode *t1 = new TreeNode(0);
    // t1->right = new TreeNode(1);
    // t1->left = new TreeNode(2);
    // t1->right->right = new TreeNode(4);
    // t1->right->left = new TreeNode(5);

    return 0;
}