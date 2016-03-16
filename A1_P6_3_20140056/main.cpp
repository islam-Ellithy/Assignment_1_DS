#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

set<string> Set ;
void RecPermute(string soFar, string rest)
{
    if (rest == "") // No more characters
		Set.insert(soFar); // remove duplicated strings
    else // Still more chars
// For each remaining char
        for (int i = 0; i < rest.length(); i++)
        {
            string next = soFar + rest[i]; // Glue next char
            string remaining = rest.substr(0, i)+ rest.substr(i+1);
            RecPermute(next, remaining);
        }
}
// "wrapper" function
void ListPermutations(string s)
{
    RecPermute("", s);
}
int main()
{
    ListPermutations("Makka");

        for(auto i : Set)
        {
                cout << i << '\n' ;
        }
    return 0 ;
}
