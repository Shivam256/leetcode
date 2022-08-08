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

ListNode *partition(ListNode *head, int x)
{

    ListNode *hd = head;

    ListNode *temp = head;
    ListNode *sptr = head;

    while (temp->next != nullptr)
    {

        if (temp->next->val < x && temp->val >= x)
        {
            ListNode *ptr = temp->next;
            temp->next = temp->next->next;

            ListNode *ptr2 = sptr->next;
            sptr->next = ptr;
            ptr->next = ptr2;

            sptr = sptr->next;
        }
        else if (temp->next->val < x && temp->val < x)
        {
            sptr = sptr->next;

            temp = temp->next;
            if (temp == nullptr)
            {
                break;
            }
        }
        else
        {

            temp = temp->next;
            if (temp == nullptr)
            {
                break;
            }
        }
        
        if (temp == nullptr)
        {
            break;
        }
    }

    // handle if head is  greater than x
    if (hd->val >= x)
    {
        ListNode *nv = new ListNode(hd->val);
        ListNode *temp = sptr->next;
        sptr->next = nv;
        nv->next = temp;
        sptr = sptr->next;

        hd = hd->next;
    }

    
    


    
    // handle if tail is less than x
    // if (temp->val < x)
    // {
    //     // bring temp to end of sptr
    //     ListNode *nv = new ListNode(temp->val);
    //     ListNode *temp = sptr->next;
    //     sptr->next = nv;
    //     nv->next = temp;

    //     sptr = sptr->next;

    //     temp = nullptr;
    // }

    return hd;
}

int main()
{
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(1);
    // l1->next->next = new ListNode(3);
    // l1->next->next->next = new ListNode(2);
    // l1->next->next->next->next = new ListNode(5);
    // l1->next->next->next->next->next = new ListNode(1);
    // 1 - 2- -3 - 2 - 5 - 4
    displayList(l1);
    vector<int> v = {1, 4, 3, 0, 2, 5, 2};
    ListNode *l3 = createLinkedList(v);
    displayList(l3);

    ListNode *l2 = partition(l1, 2);
    displayList(l2);

    TreeNode *t1 = new TreeNode(0);
    t1->right = new TreeNode(1);
    t1->left = new TreeNode(2);
    t1->right->right = new TreeNode(4);
    t1->right->left = new TreeNode(5);

    return 0;
}