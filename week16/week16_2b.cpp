class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1; 
        if(n<0) { //遇到父的會失敗, 所以要把n變成正的
            n = -n; //n變成正的
            x = 1/x; //-1次方, 就是1/x
        }
        for(int i=0; i<n; i++) { //不幸的是, 會失敗 遇到「婦的n」會失敗
            ans *= x;
        }
        return ans; 
    }
};