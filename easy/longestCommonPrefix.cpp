#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string result = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        string n = "";
        for (int j = 0; j < min(strs[i].size(), result.size()); j++)
        {
            if (result[j] == strs[i][j])
            {
                n += result[j];
            }
            else
            {
                break;
            }
        }
        result = n;
    }

    return result;
}

int main()
{
    vector<string> v = {"flower","flow","flight"};

    cout << longestCommonPrefix(v);
}