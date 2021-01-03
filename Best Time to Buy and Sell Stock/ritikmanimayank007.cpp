class Solution {
public:
    int maxProfit(vector<int>& prices) {
         if (prices.empty()) return 0;
      
       int min1=prices[0];
        int ans=0;
        for(int i=0;i<prices.size();i++){
            min1=min(min1,prices[i]);
            ans=max(ans,prices[i]-min1);
        }
        return ans;
    }
};
