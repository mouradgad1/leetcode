#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())return 0;
        else{
            set<int> k (nums.begin(),nums.end());
            nums.assign(k.begin(),k.end());
            return nums.size();
        }
        
        
        
    }
};
int main(){
    Solution s;
    vector<int> v={0,0,1,1,1,2,2,3,3,4};
    cout<<s.removeDuplicates(v)<<endl;
    for(auto i:v)cout<<i<<" ";
    return 0;
}