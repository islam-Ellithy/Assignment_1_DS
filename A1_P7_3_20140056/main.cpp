#include <iostream>
#include <bits/stdc++.h>

// problem 7
using namespace std;

class ExceptionClass {};

int num , i = 0 , sum = 0 ;

int power(int b , int c)
{
    if(c==0)
        return 1 ;
    else
        return b*power(b,--c);
}

int sz;

int convertToInt(string numberStr) throw (ExceptionClass)
{
    i++;

    sz = int(numberStr.size());
    if(i==sz+1)
    {
        return 0 ;
    }
    else
    {
        if((numberStr[i-1]-'0')>= '0' && (numberStr[i-1]-'0')<='9')
            throw ExceptionClass();
        return (numberStr[i-1]-'0')*power(10,sz-i)+convertToInt(numberStr);
    }
}


int main()
{
    string s = "123a5";
    cin >> s ;
    try
    {
        cout << convertToInt(s);
    }
    catch(ExceptionClass e)
    {
        cout << "Error the string has non numeric values\n";
    };
    return 0;
}
