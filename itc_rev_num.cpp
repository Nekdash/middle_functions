#include "middle.h"

 int itc_rev_num(long long number){ // WHAT THE HELL HAPPENED IN ASSIGNMENT
     if(number < 0){
        number *= (-1);
     }
     int ch = 0;
     long long res = 0;
     while (number > 0){
        res = res*10 + number%10;
        number /= 10;
        
     }
     return itc_len_num(res);
 }
