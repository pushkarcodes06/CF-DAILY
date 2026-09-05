class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(1<n) {
            if(n%x==0)
                n/=x;
            else
                return false;
        }
        return n==1?true:false;
    }
};
