// Challenge 6
// Link to the problem: https://www.hackerrank.com/challenges/30-review-loop/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numStr, count = 1;
    string str;
    string oddStr = "";
    string evenStr = "";
    
    cin >> numStr;
    
    while(count <= numStr)
    {
        getline(cin >> ws, str);
        for(int i = 0; i < str.length(); i++)
        {
            if(i%2 == 0)
                evenStr += str[i];
            else
                oddStr += str[i];
        }
        cout << evenStr << " " << oddStr << endl;
        evenStr = "";
        oddStr = "";
        count++;
    }
    
    return 0;
}
