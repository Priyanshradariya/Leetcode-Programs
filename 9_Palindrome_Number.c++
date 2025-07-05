class Solution {
public:
    bool isPalindrome(int x) {
       long int rem,ans=0; 
       long int y = x;
       if(y<0) return false;
       while(x!=0)
       {
        rem = x%10;
        x = x/10;
        ans = (ans*10) + rem;
       }
       cout << ans << endl;
       cout << y << endl;
       if(ans == y)
       {
        return true;
       }
       else{
        return false;
       }
    }
};