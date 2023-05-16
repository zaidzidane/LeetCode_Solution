/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    
            let len=arr.length  
            const newArr=new Array(len);
            for(let i=0;i<len;i++){
                    newArr[i]=fn(arr[i],i);
            }
            return newArr;
    
};