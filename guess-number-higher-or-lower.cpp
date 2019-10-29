#include<iostream>
using namespace std;

int main(){
    Solution s;
    cout<<s.getSum(1,2);
    return 0;
}

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int l =0;
        int h =n;
        while(l<h){
            int mid = l + (h-l)/2;
            if(guess(mid) == 0){
                return mid;
            }else if(guess(mid)<0)
                h = mid-1;
            else
                l = mid+1;
        }
        return l;
    }
};

