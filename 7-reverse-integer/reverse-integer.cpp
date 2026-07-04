class Solution {
public:
    int reverse(int x) {
            long long num = x ;
    long long  rev = 0 ;
    int isNeg = 0 ;
    if(num < 0) {
        num =  - num ;
        isNeg = 1;
    }
    int last_digit = 0; 
    while(num>0){
        last_digit = num % 10 ; 
        num = num / 10 ;
        rev = rev * 10 + last_digit;
    }
    if (rev > INT_MAX || rev < INT_MIN)
    return 0;

    else if(isNeg == 1){
    rev = -rev ;
    return rev ;
    }
    else {
    return rev ;
    }
    }
};