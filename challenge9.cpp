// Challenge 9
// Link to the problem: https://www.hackerrank.com/challenges/30-recursion/problem

#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    // General
    if(n < 2)
        return 1;
    else 
        return(n * factorial(n-1));
}

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}
