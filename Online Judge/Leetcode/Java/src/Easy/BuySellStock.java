package Easy;

//Leetcode - Problem No. 121 - Best Time to Buy and Sell Stock
public class BuySellStock {

    int inf = 9999999;

    public int maxProfit(int[] prices) {
        int length = prices.length;

        //initilize with index 0
        int buy = prices[0];
        int profit = 0;

        for(int i=1; i<length; i++){
            if(prices[i] - buy > profit){
                profit = prices[i] - buy;
            }
            if(prices[i] < buy){
                buy = prices[i];
            }
        }

        return profit;
    }
}
