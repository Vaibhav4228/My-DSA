//bit masking approch
//Time complexity  - O(n^2)
// 

#include <iostream>
#include <string>

#include <bits/stdc++.h>
using namespace std;
void subsequence(string &s)
{

    int numsubs = pow(2, s.size());
    for (int i = 0; i < numsubs; ++i)
    {
        string out;
       int num = i;
        // convet num to binary
         int j = 0;
        while (num)
        {
            int b = (num & 1);
            if(b)
                 out.push_back(s[j]);
            ++j;
           
            num >>= 1;
        }
         cout << out << endl;
    }
   
}

int main()
{
    string s = "abc";
    subsequence(s);
    return 0;
}
