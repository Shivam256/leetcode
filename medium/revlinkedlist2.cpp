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

#define inarr(s, n, arr)      \
  for (int i = s; i < n; i++) \
    cin >> arr[i];
#define outarr(s, n, arr)     \
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

ListNode *reverseBetween(ListNode *head, int left, int right)
{
  ListNode *start = new ListNode(0);
  ListNode *end = new ListNode(0);
  ListNode *revStart = new ListNode(0);
  ListNode *revEnd = new ListNode(0);

  int i = 1;
  ListNode *temp = head;

  ListNode *revHead = revStart;

  if(head->next == nullptr){
    return head;
  }

  if(left == right){
    return head;
  }

  while (i <= right)
  {
    if (i == left - 1)
    {
      start->next = temp;
    }
    if (i == left)
    {
      revStart->next = new ListNode(temp->val);
      revStart = revStart->next;
    }
    if (i > left && i < right)
    {
      revStart->next = new ListNode(temp->val);
      revStart = revStart->next;
    }
    if (i == right)
    {
      end->next = temp->next;
      revStart->next = new ListNode(temp->val);
      revStart = revStart->next;
      revStart->next = nullptr;
    }
    i++;
    temp = temp->next;
  }

    // displayList(start);
    // displayList(end);

  ListNode *prev = nullptr;
  ListNode *current = revHead->next;
  ListNode *nextPtr;
  ListNode *ee = current;

  // displayList(revHead->next);

  while (current != nullptr)
  {
    nextPtr = current->next;
    current->next = prev;

    prev = current;
    current = nextPtr;
  }

  // place revHead in the original linked list
  // displayList(prev);
  if (left == 1)
  {
    head = prev;
    ee->next = end->next;
  }
  else
  {
    start->next->next = prev;
    ee->next = end->next;
  }



  return head;
}

// ListNode *reverseBetween(ListNode *head, int left, int right)
// {
//   ListNode *revList = new ListNode(0);
//   ListNode *temp = head;

//   ListNode *revHead = revList;

//   int i = 1;

//   while (i <= right)
//   {
//     if (i == left)
//     {
//       revList->next = new ListNode(temp->val);
//       revList = revList->next;
//     }
// if (i > left && i < right)
// {
//   revList->next = new ListNode(temp->val);
//   revList = revList->next;
// }

//     if (i == right)
//     {
// revList->next = new ListNode(temp->val);
// revList = revList->next;
// revList->next = nullptr;
//     }
//     i++;
//     temp = temp->next;
//   }

//   // reverse revhead
// ListNode *prev = nullptr;
// ListNode *current = revHead->next;
// ListNode *nextPtr;

// displayList(revHead->next);

// while (current != nullptr)
// {
//   nextPtr = current->next;
//   current->next = prev;

//   prev = current;
//   current = nextPtr;
// }

// // place revHead in the original linked list
// displayList(prev);

//   ListNode *endd;
//   ListNode *startt = prev;
//   while (prev->next != nullptr)
//   {
//     endd = prev;
//     prev = prev->next;
//   }

//   ListNode *hd = head;

//   return revList;
// }

int main()
{
  ListNode *l1 = new ListNode(1);
  l1->next = new ListNode(2);
  // l1->next->next = new ListNode(3);
  // l1->next->next->next = new ListNode(4);
  // l1->next->next->next->next = new ListNode(5);
  // l1->next->next->next->next->next = new ListNode(6);

  ListNode *res = reverseBetween(l1, 1,1);
  displayList(res);
  TreeNode *t1 = new TreeNode(0);
  t1->right = new TreeNode(1);
  t1->left = new TreeNode(2);
  t1->right->right = new TreeNode(4);
  t1->right->left = new TreeNode(5);

  return 0;
}