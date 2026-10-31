class Solution {
public:
    vector<int> nextPermutation(int n){
        vector<int> digits;
        while(n>0){
            digits.push_back(n%10);
            n=n/10;
        }
        reverse(digits.begin(), digits.end());
        int k=digits.size();
        int ind=-1;
        for(int i=k-2;i>=0;i--){
            if(digits[i]<digits[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            return {};
        }
        for(int i=k-1;i>ind;i--){
            if(digits[i]>digits[ind]){
                swap(digits[i],digits[ind]);
                break;
            }
        }
        reverse(digits.begin()+ind+1,digits.end());
        return digits;

    }
    int nextGreaterElement(int n) {
        vector<int> digits=nextPermutation(n);
        long long res=0;
        if (digits.empty()) return -1;
        for(int digit : digits){
        res = res * 10 + digit;
    }

         return (res > INT_MAX) ? -1 : (int)res;
    }
};