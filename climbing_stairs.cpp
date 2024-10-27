#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n ==0){
            return 1;
        }
       return climbStairs(n-1) + climbStairs(n-2); 
    }
};

int main(){
    
    Solution s;
    std::cout << s.climbStairs(3) << std::endl;
    return 0;
}