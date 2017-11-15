// Challenge 8
// Link to the problem: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    map<string,int> telephoneBook;
    int n, number;
    string name, s;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> number;
        telephoneBook.insert(pair<string,int>(name,number));
    }
    
    while(cin >> s)
    {
        //cin >> s;
        if(telephoneBook.find(s) == telephoneBook.end())
            cout << "Not found" << endl;
        else
            cout << s << "=" << (telephoneBook.find(s))->second << endl;
    }
    return 0;
}