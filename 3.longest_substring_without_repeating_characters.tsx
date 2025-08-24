var lengthOfLongestSubstring = function(s) {
    if(s.length==0) return 0;
    
    let set=new Set();
    let left=0;
    let max_len=0;
    
    for(let right=0;right<s.length;right++){
        while(set.has(s[right])){
            set.delete(s[left]);
            left++
        };
        set.add(s[right]);
        max_len=Math.max(max_len,right-left+1);  
    }
    return max_len;
};

let s="abcabcbb"
lengthOfLongestSubstring(s)
