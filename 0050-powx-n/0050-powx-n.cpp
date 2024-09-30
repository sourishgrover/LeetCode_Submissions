class Solution {
public:
    double myPow(double x, int n) {

        long BinaryForm = n;
        if(n<0){
            x = 1/x;
            BinaryForm = -BinaryForm;
        }
        double ans = 1;

        while(BinaryForm>0){
            if(BinaryForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            BinaryForm/= 2;
        }
         return ans;
    }
};