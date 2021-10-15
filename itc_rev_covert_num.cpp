#include "middle.h"

 int itc_rev_covert_num(long long number, int ss){
    long long res = 0;
  if ( number < 0){
   return itc_rev_covert_num(number *(-1), ss)*(-1);
   }
    int len = itc_len_num(number);
    for (int i =0; i < len; i++){
        res += (number%10)*ipow(ss, i);
        number /= 10;
    }
    return res;
 }
