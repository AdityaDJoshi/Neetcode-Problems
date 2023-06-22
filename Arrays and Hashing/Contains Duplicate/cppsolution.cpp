/*
    _       _ _ _                     _           _     _
   / \   __| (_) |_ _   _  __ _      | | ___  ___| |__ (_)
  / _ \ / _` | | __| | | |/ _` |  _  | |/ _ \/ __| '_ \| |
 / ___ \ (_| | | |_| |_| | (_| | | |_| | (_) \__ \ | | | |
/_/   \_\__,_|_|\__|\__, |\__,_|  \___/ \___/|___/_| |_|_|
                    |___/
*/
//
#define ll long long int
#define pb(x) push_back(x)
#define vi vector<int>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, bool> hashmap;
        for (int x : nums)
        {
            if (hashmap.find(x) == hashmap.end())
                hashmap[x] = true;
            else
                return true;
        }
        return false;
    }
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &vec)
{
    for (auto elem : vec)
    {
        os << elem << " ";
    }
    return os;
}

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long int t = 1;
    cin >> t;
    while (t--)
    {

        // enter code here
    }
}