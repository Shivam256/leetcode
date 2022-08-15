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

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int resultSum = 0;
    int currentDifference = INT32_MAX;

    for (int i = 0; i < nums.size(); i++)
    {
        int current = nums[i];
        int currentTargetSum = target - current;
        if (current > target)
            break;

        int start = i + 1, end = nums.size() - 1;

        while (start < end)
        {
            int p = nums[start] + nums[end];
            if (p == currentTargetSum)
            {
                currentDifference = 0;
                resultSum = target;
                break;
            }
            else if (p > currentTargetSum)
            {
                int s = p + current;
                if (abs(s - target) <= currentDifference)
                {
                    currentDifference = abs(s - target);
                    resultSum = s;
                }
                end--;
            }
            else if (p < currentTargetSum)
            {
                int s = p + current;
                if (abs(s - target) <= currentDifference)
                {
                    currentDifference = abs(s - target);
                    resultSum = s;
                }
                start++;
            }
        }
    }

    return resultSum;
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


    vector<int> v = {0,0,0};
    int res = threeSumClosest(v,1);
    cout<<res<<"\n";

    return 0;
}