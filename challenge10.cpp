// Challenge 10
// Link to the problem: https://www.hackerrank.com/challenges/30-binary-numbers/problem

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int num, size, count, maxCount = 1;
    string binary = "";
    
    cin >> num;
    
	// convert decimal to binary
    while(num != 0)
    {
        binary = binary + to_string(num%2);
        num /= 2;
    }
    size = binary.length();
    
	// reverse array
    for(int i = 0; i < size/2; i++)
        swap(binary[i], binary[size-i-1]);
    
	// base
    if(size == 0 || !(binary.find("1")))
        maxCount = 0;
    
    else
    {
        for(int i = 0; i < size; i++)
        {
            if(binary.at(i) == '1')
            {
                count++;
				// keep previous count for consecutive 1s
                if(maxCount < count)
                    maxCount = count;
            }
            else
                count = 0;
        }
    }
    cout << maxCount << endl;
    
    return 0;
}