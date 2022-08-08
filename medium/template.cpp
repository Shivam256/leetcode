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


void solve()
{
}

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}