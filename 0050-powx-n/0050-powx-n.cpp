class Solution {
public:
    double myPow(double x, int n) {
        long binfrom = n;
        if(n < 0){
            x = 1/x;
            binfrom = -binfrom;
        }
        double ans = 1;
        while(binfrom > 0){
            if(binfrom % 2 == 1){
                ans *= x;
            }
            x *= x;
            binfrom /= 2;
        }

        
    return ans;  
    }
    
};