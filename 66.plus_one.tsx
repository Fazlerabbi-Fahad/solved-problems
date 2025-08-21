var plusOne = function(digits) {
    let updatedDigits=[];
    
    if(digits.length==0){
        return []
    }
    
    let digitString=digits.toString();
    let singleDigit=digitString.replace(/,/g,"");
    let incrementedDigit=BigInt(singleDigit)+1n;
    let incrementedDigitString=incrementedDigit.toString();
    
    for(let i=0;i<incrementedDigitString.length;i++){
        let seperatedDigit=incrementedDigitString[i];
        updatedDigits.push(Number(seperatedDigit))
    };
    
    return updatedDigits
};

const data=[6,1,4]
plusOne(data);
