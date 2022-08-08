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

vector<int> inorderTraversal(TreeNode *root)
{
  vector<int> ans;
  stack<TreeNode *> s;

  TreeNode *current = root;

  while (!s.empty() && current != nullptr)
  {
    // push the left till null

    while (current != nullptr)
    {
      s.push(current);
      current = current->left;
    }

    current = s.top();
    s.pop();

    ans.push_back(current->val);
    cout << current->val << " ";

    current = current->right;
  }

  return ans;
}

// vector<int> inorderTraversal(TreeNode *root)
// {
//   vector<int> ans;
//   if (root == nullptr)
//   {
//     return NULL;
//   }
//   else
//   {
//     inorderTraversal(root->left);
//     ans.push_back(root->val);
//     inorderTraversal(root->right);
//   }

//   return ans;
// }

void inorder(TreeNode *root)
{
  if (root == nullptr)
    return;
  inorder(root->left);
  cout << root->val << " ";
  inorder(root->right);
}

int main()
{

  TreeNode *t1 = new TreeNode(0);
  t1->right = new TreeNode(1);
  t1->left = new TreeNode(2);
  t1->right->right = new TreeNode(4);
  t1->right->left = new TreeNode(5);

  // inorder(t1);
  inorderTraversal(t1);

  // vector<int> ans = inorderTraversal(t1);

  // cout << "Here is the answere:";
  // for (auto i : ans)
  // {
  //   cout << i << " ";
  // }

  return 0;
}