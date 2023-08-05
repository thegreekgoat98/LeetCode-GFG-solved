class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount)
    {
        int extra=purchaseAmount%10;
        
        
        if(extra<5)
            return 100-(purchaseAmount-extra);
        else
            return 100-(purchaseAmount+(10-extra));
    }
};