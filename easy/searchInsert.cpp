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

int searchInsert(vector<int> &nums, int target)
{
  int start = 0;
  int end = nums.size();

  int pos = -1;

  while (start < end)
  {
    int mid = (end - start) / 2;

    if (target == nums[mid])
    {
      pos = mid;
      break;
    }
    else if (target > nums[mid])
    {
      start = mid;
    }
    else
    {
      end = midP;
    }
  }

  return pos;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 3, 5, 6};

  cout << searchInsert(arr, 7);

  return 0;
}