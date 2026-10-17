class Solution {
public:
    int calculate(int a){
        int temp=a;
        int sum=0;
        while(temp){
            sum+=temp%10;
            temp=temp/10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<pair<int, int>, int>> vec(n);
        
        for (int i = 0; i < n; i++) {
            vec[i] = {{calculate(nums[i]), nums[i]}, i};
        }
        sort(vec.begin(), vec.end());
        int swaps=0;
        vector<bool> visited(n, false);
        for(int i=0;i<nums.size();i++){
            while (vec[i].second != i) {
                swap(vec[i], vec[vec[i].second]);
                swaps++;
            }
        }
        return swaps;
    }
};