class Solution {
public:
    int getSum(int a, int b) {
        int n = a & b;
        while (n) {
            b =  (a ^ b);
            a = (n << 1);
            n = a & b;
        }
        return a | b;
    }
};
