#include "middle.h"

 int itc_rev_num(long long number){ // WHAT THE HELL HAPPENED IN ASSIGNMENT
     if(number < 0){
        number *= (-1);
     }
     int ch = number % 10;
     while (ch == 0){
        number /= 10;
        ch = number % 10;
     }
     return itc_len_num(number);
 }
