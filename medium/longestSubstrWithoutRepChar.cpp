#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    int len = 0;
    int curr_len = 0;
    map<char, int> alphamap;

    int i = 0;
    int i2 = 0;

    while (i < s.size())
    {

        if (alphamap.count(s[i]) > 0)
        {
            len = max(len, curr_len);
            curr_len = 0;
            alphamap.clear();
            i2++;
            i = i2;
            continue;
        }
        else
        {
            alphamap.insert(pair<char, int>(s[i], 0));
            curr_len++;
            len = max(len, curr_len);
        }
        i++;
    }



    return len;
}

int main()
{
    string s = "pwwkew";
    cout << lengthOfLongestSubstring(s) << endl;
}