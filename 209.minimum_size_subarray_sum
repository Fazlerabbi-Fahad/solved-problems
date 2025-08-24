var minSubArrayLen = function(target, nums) {
    if(nums.length==0)return 0;
    
    let left=0;
    let sum=0;
    let min_len=Infinity;
    
    for(let right=0;right<nums.length;right++){
        sum+=nums[right];
        
        while(sum>=target){
            min_len=Math.min(min_len,right-left+1);
            sum-=nums[left];
            left++
        }
        
    }
        console.log('min_len',min_len)
    return min_len!=Infinity?min_len:0;
};

let target=4;
let nums=[1,4,4]
minSubArrayLen(target,nums)
