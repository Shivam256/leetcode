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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{

  int i1 = l1->val;
  int i2 = l2->val;
  long long int p = 10;

  l1 = l1->next;
  l2 = l2->next;

  while (l1 != nullptr)
  {
    i1 = l1->val * p + i1;

    p = p * 10;

    l1 = l1->next;
  }

  p = 10;

  while (l2 != nullptr)
  {
    i2 = l2->val * p + i2;

    p = p * 10;

    l2 = l2->next;
  }

  cout << i1 << " " << i2 << " "
       << "result";

  int res = i1 + i2;

  string s = to_string(res);

  ListNode *l3 = new ListNode(s[s.size() - 1] - '0');
  ListNode *hd = l3;

  for (int i = s.size() - 2; i >= 0; i--)
  {
    l3->next = new ListNode(s[i] - '0');
    l3 = l3->next;
  }

  return hd;
}

void displayLinkedList(ListNode *l)
{
  while (l != nullptr)
  {
    cout << l->val << "- >";
    l = l->next;
  }
}

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  ListNode *l1 = new ListNode(2);
  l1->next = new ListNode(4);
  l1->next->next = new ListNode(3);

  ListNode *l2 = new ListNode(5);
  l2->next = new ListNode(6);
  l2->next->next = new ListNode(4);

  ListNode *l3 = addTwoNumbers(l1, l2);

  displayLinkedList(l3);

  return 0;
}