
var characterReplacement = function(s, k) {
    if(s.length==0) return 0
    
    let left=0;
    let maxCount=0;
    let maxLen=0;
    let freq=new Map();
    
    for(let right=0;right<s.length;right++){
        freq.set(s[right], (freq.get(s[right]) || 0) + 1);
        maxCount=Math.max(maxCount,freq.get(s[right]));
        while(((right-left+1)-maxCount)>k){
            freq.set(s[left], freq.get(s[left]) - 1);
            left++;
        }
        
        maxLen=Math.max(maxLen,right-left+1);
    }
    return maxLen;
};

let s="IMNJJTRMJEGMSOLSCCQICIHLQIOGBJAEHQOCRAJQMBIBATGLJDTBNCPIFRDLRIJHRABBJGQAOLIKRLHDRIGERENNMJSDSSMESSTR";
let k=2

characterReplacement(s,k)
