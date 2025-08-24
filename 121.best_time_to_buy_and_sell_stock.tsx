var maxProfit = function(prices) {
    if(prices.length==0) return maxProfit;
    
    let minProfit=prices[0];
    let maxProfit=0;
    
    for(let i=0;i<prices.length;i++){
        if(prices[i]<minProfit) minProfit=prices[i];
        
        let profit=prices[i]-minProfit;
        
        if(profit>maxProfit) maxProfit=profit;
    }
    // console.log(maxProfit)
    return maxProfit;
};


let data=[7,2,4,3,5,6];
maxProfit(data)
