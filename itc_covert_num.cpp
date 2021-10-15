#include "middle.h"

 int itc_covert_num(long long number, int ss){
    
    long long res = 0;
    int i = 0;
  if ( number < 0){
   return itc_covert_num(number *(-1), ss)*(-1);
   }
      while (number != 0){
        res += (number % ss)*ipow(10, i);
        i++;
        number = number / ss;
    }
    return res;
 }
