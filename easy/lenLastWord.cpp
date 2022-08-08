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

// int lengthOfLastWord(string s)
// {
//   int len = 0;

//   for (int i = s.size() - 1; i >= 0; i--)
//   {
//     if (s[i] != ' ')
//     {
//       len++;
//     }
//     else if (len != 0 && s[i] == ' ')
//     {
//       return len;
//     }
//   }

//   return len;
// }

int lengthOfLastWord(string s)
{
  int len = 0;

  for (int i = s.size() - 1; i >= 0; i--)
  {
    if (s[i] == ' ' && len == 0)
    {
      continue;
    }
    else if (s[i] == ' ' && len != 0)
    {
      break;
    }
    else
    {
      len++;
    }
  }


  return len;
}

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  string s = "luffy is still joyboy";

  cout << "\n"
       << lengthOfLastWord(s);

  return 0;
}