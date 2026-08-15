class Solution {
public:
    int reverse(int x) {
    int n=0;
    for (int i=0;x!=0;i++){
        if (n>INT_MAX/10 || n<INT_MIN/10) return 0;
        int m=x%10;
        n=(n*10)+m;
        x=x/10;
    }
return n; 
    }  
};
