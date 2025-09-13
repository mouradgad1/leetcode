#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack <char> h;
        for(int i=0;i<s.size();i++){
            if (s[i]=='['|| s[i]== '{' || s[i]=='('){
                h.push(s[i]);
            }
            else{
                if (!h.empty()){
                    if((h.top()=='[' && s[i]==']')||(h.top()=='(' && s[i]==')')||(h.top() == '{' && s[i]=='}')){
                        h.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            
        }
        if (!h.empty()){
            return false;
        }
        return true;
    }
};

int main(){
    Solution obj;
    string s;
    cin>>s;
    cout<<obj.isValid(s)<<endl;
    return 0;
}