#include <iostream>
#include <bits/stdc++>  

const maxPairwiseProduct = (arr) => {  

 let highestNum = 0; 

 let secondHighestNum = 0; 

 for(let i=0; i<arr.length; i++){

   if(arr[i] > highestNum){  

     secondHighestNum = highestNum;  

     highestNum = arr[i];  

   } 

   else if(arr[i] > secondHighestNum){ 

     secondHighestNum = arr[i];  

   } 

   else{ 

     continue  

   } 

 } 

 return highestNum * secondHighestNum  

}


