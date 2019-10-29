#include<iostream>
#include<unordered_map>
using namespace std;




class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int,int> >freq;
        for(int i =0; i<s.size();i++){
            freq[s[i]].first++;
            freq[s[i]].second = i;
        }
         for(int i =0; i<s.size();i++){
             if(freq[s[i]].first == 1)
                 return freq[s[i]].second;
         }
        return -1;
    }
};

int main(){
    Solution s;
    cout<<s.firstUniqChar("leetcode");
    return 0;
}