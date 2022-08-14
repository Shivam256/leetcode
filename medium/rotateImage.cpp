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

ListNode *createLinkedList(vector<int> v)
{
    ListNode *head = new ListNode(v[0]);
    ListNode *hd = head;
    for (int i = 1; i < v.size(); i++)
    {
        head->next = new ListNode(v[i]);
        head = head->next;
    }

    return hd;
}

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size() - 1; 
    int i = 0, j = 0;
    int p = 0;
    int ctr = (n + 1) / 2;

    while (ctr--)
    {
        i += p;
        j += p;
        n -= p;
        int k = 0;

        while (k < n-p)
        {
            int a = matrix[i][j + k];
            matrix[i][j + k] = matrix[n - k][j];
            matrix[n - k][j] = matrix[n][n - k];
            matrix[n][n - k] = matrix[i + k][n];
            matrix[i + k][n] = a;
            k++;
        }
        p++;
    }
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

    vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(v);
    for (auto i : v)
    {
        displayVector(i);
    }

    return 0;
}