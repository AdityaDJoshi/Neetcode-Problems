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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    a %= b;
    return gcd(b, a);
}
template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &vec)
{
    for (auto elem : vec)
    {
        os << elem << " ";
    }
    return os;
}
bool PALIN(string s)
{
    ll i = 0;
    ll j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        j--;
        i++;
    }
    return true;
}
bool isAnagram(string s, string t)
{
    if(s.size()!= t.size())
        return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < s.size();i++)
        if(s[i]!=t[i])
            return false;
    return true;
}
int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout << isAnagram("anagram", "nagaram");
}