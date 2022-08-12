class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector <int> discount;
        
        for(int i=0; i<prices.size(); i++)
        {
            int disp = prices[i];
            
            for(int j=i+1; j<prices.size(); j++)
            {
                  if(prices[j]<=prices[i])
                {
                    disp = prices[i] - prices[j];
                    break;
                }
                
            }
            
            discount.push_back(disp);
        }
        
        return discount;
    }
};