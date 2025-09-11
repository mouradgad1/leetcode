#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string f = to_string(x);
        reverse(f.begin(),f.end());
        return (f == to_string(x));
    }
};

int main() {
    Solution sol;
    int x = 121;
    cout << (sol.isPalindrome(x) ? "true" : "false") << endl; 
    return 0;
}   