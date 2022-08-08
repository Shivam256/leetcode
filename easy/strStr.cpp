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

int strStr(string haystack, string needle)
{
  int i = 0, j = 0;

  if(needle.size() == 0) return 0;

  while (i < haystack.size() && j < needle.size())
  {
    if (haystack[i] == needle[j])
    {
      i++;
      j++;

      if (j == needle.size())
        return i-j;
    }
    else
    {
      i = i - j + 1;
      j = 0;
    }
  }

  return -1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int ans = strStr("abhsjiol","jio");
  cout<<ans;

  return 0;
}