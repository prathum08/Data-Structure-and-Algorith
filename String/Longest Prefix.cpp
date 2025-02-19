#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// Approach 1:-
// using the brute force in this approach the 2d matrix concept is in touch

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";

    for (int i = 0; i < strs[0].length(); i++)
    {
        for (int j = 0; j < strs.size() - 1; j++)
        {
            if (strs[j][i] != strs[j + 1][i])
            {
                return ans;
            }
        }
        ans = ans + strs[0][i];
    }

    return ans;
}

// Approach 2:-

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";

    sort(strs.begin(), strs.end());

    int i = 0;

    while (i < strs[0].length() && strs[0][i] == strs[strs.size() - 1][i])
    {
        ans = ans + strs[0][i];
        i++;
    }

    return ans;
}