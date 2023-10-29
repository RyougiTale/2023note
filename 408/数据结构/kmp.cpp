#include <bits/stdc++.h>

#define TSIZE 10000
#define PSIZE 1000
int next[PSIZE];

void pre(std::string &t)
{
    int j = 0;
    next[0] = 0;
    for (int i = 1; i < t.size(); i++)
    {
        while (j > 0 && t[i] != t[j])
        {
            j = next[j - 1];
        }
        if (t[i] == t[j])
        {
            j++;
        }
        next[i] = j;
    }
}

int main()
{
    std::string t = "abababca";
    std::string p = "abababca";
    pre(p);
    return 0;
}