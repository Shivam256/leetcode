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

#define inarr(s, n, arr)        \
    for (int i = s; i < n; i++) \
        cin >> arr[i];
#define outarr(s, n, arr)       \
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

int removeDuplicates(vector<int> &nums)
{

    int j = 1;
    int current = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (current != nums[i])
        {
            nums[j] = nums[i];
            j++;
            current = nums[i];
        }
    }

    for (auto i : nums)
    {
        cout << i << " ";
    }

    return j;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(arr);
    cout << "\n" << k << endl;

    return 0;
}