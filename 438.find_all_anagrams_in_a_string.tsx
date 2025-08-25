var findAnagrams = function(s, p) {
    if(s.length==0|| p.length==0) return [];
    let need = new Map();
    for (let char of p) {
      need.set(char, (need.get(char) || 0) + 1);
    }
    let windowSize= new Map();
    let left =0;
    let result=[]
    
    for(let right=0;right<s.length;right++){
        windowSize.set(s[right],(windowSize.get(s[right]) || 0) + 1);
        
        while(right-left+1>p.length){
            windowSize.set(s[left],(windowSize.get(s[left]) || 0) - 1);
            if(windowSize.get(s[left])==0){
                windowSize.delete(s[left])
            }
            left++;
        }
        
        if(mapsAreEqual(windowSize,need)){
            result.push(left)
        }
        
        console.log(mapsAreEqual(windowSize,need),result)
    }
    return result
};

function mapsAreEqual(map1,map2){
    if(map1.size!=map2.size) return false;
    for(let [key,val] of map1){
        if(map2.get(key)!=val) return false
    }
    return true
}

let s = "abab"
let p = "ab"
findAnagrams(s,p)
