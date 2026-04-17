class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best=prices[0], maxp=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>best){
                maxp= max(maxp,prices[i]-best);
            }
            best= min(best,prices[i]);
        }
        return maxp;

    }
};