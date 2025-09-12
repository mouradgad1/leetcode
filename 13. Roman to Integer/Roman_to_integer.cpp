#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int value (char s){
        if(s=='I') return 1;
        if (s=='V') return 5;
        if (s=='X') return 10;
        if (s=='L') return 50;
        if (s=='C') return 100;
        if (s=='D') return 500;
        if (s =='M') return 1000;
        return -1;
}
    int romanToInt(string s) {
        long long sum =0;
        for(int i =0;i<s.size();i++){
            int one = value(s[i]);
            if (i+1 < s.size()){
                
                if (one >= value(s[i+1])){
                    sum += one;
                }
                else {
                    sum += value(s[i+1]) - one;
                    i++;
                }
            }
            else {
                sum += one;
            }
        }
        return sum;
    }
};


int main(){
    Solution obj;
    string s;
    cin>>s;
    cout<<obj.romanToInt(s)<<endl;
    return 0;
}