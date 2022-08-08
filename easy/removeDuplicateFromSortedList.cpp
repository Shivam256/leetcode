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

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *deleteDuplicates(ListNode *head)
{
  ListNode *temp = head;

  while (head != nullptr && head->next != nullptr)
  {
    if (head->val == head->next->val)
    {
      ListNode *todelete = head->next;
      head->next = head->next->next;
      delete todelete;
    }
    else
    {
      head = head->next;
    }
  }

  return temp;
}

void displayList(ListNode *list)
{
  while (list != nullptr)
  {
    cout << list->val << " ";
    list = list->next;
  }
  cout << "\n";
}

int main()
{

  ListNode *l1 = new ListNode(1);
  l1->next = new ListNode(1);
  l1->next->next = new ListNode(2);
  l1->next->next->next = new ListNode(3);
  l1->next->next->next->next = new ListNode(3);
  l1->next->next->next->next->next = new ListNode(3);
  l1->next->next->next->next->next->next = new ListNode(4);
  l1->next->next->next->next->next->next->next = new ListNode(4);

  displayList(l1);
  ListNode *l2 = deleteDuplicates(l1);

  displayList(l2);

  return 0;
}