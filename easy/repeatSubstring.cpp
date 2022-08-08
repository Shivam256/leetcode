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

bool repeatedSubstringPattern(string s)
{
  int i = 1;
  bool ans = false;
  while (i <= s.size() / 2)
  {
    if (s.size() % i == 0)
    {
      string t = s.substr(0, i);
      bool tp = true;
      for (int j = i ; j < s.size(); j += i)
      {
        if (t != s.substr(j, j + i))
        {
          tp = false;
          break;
        }
      }

      if (tp)
      {
        ans = true;
        break;
      }
      i++;
    }
    else
    {
      i++;
    }
  }

  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s = "ababab";

  if (repeatedSubstringPattern(s))
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }

  return 0;
}