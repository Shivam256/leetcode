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

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isSameTree(TreeNode *p, TreeNode *q)
{
  if (p == nullptr && q == nullptr)
    return true;

  if (p != nullptr && q != nullptr)
  {
    return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
  }

  return false;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  TreeNode *t1 = new TreeNode(0);
  t1->right = new TreeNode(1);
  t1->left = new TreeNode(2);
  t1->right->right = new TreeNode(4);
  t1->right->left = new TreeNode(5);

  TreeNode *t2 = new TreeNode(0);
  t2->right = new TreeNode(1);
  t2->left = new TreeNode(3);
  t2->right->right = new TreeNode(4);
  t2->right->left = new TreeNode(5);

  if (isSameTree(t1, t2))
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }

  return 0;
}