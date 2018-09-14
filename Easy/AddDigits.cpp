/* Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. */

class Solution {
public:
    int addDigits(int num) {
        //return ((num-1)%9 + 1);
        if(num == 0)
            return 0;
        return num%9==0 ? 9: num%9;
    }
};
