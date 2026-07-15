class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0){
            
            return false ;
        }
        int last_dig = 0 ;
        long long rev = 0 ;
        long long  num = x;
        while( num > 0){
            last_dig = num % 10 ;
            num = num / 10;
            rev = rev * 10 + last_dig;
        }
        if( rev == x ) return true ;
        else return false ;
    }
};
