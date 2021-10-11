#include "middle.h"

 int itc_second_simple_max_num(long long number){
     if (itc_len_num(number)==1){
      return -1;
     }
     if ( number < 0){
        number *= (-1);
     }
     int maxchar = -1, secmax = -1, len = itc_len_num(number), ch;
     
     while (number > 0){
         ch = number % 10;
         if ( ch >= maxchar){
            secmax = maxchar;
            maxchar = ch;
         
         }
      if ( ch < maxchar && ch > secmax ){
      
       secmax = ch;
      }
     number /= 10;
     
     }
     if ( maxchar == secmax){
      return -1;
     
     }
  return secmax;
  
 }
