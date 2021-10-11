#include "middle.h"

 int itc_min_num(long long number){
     if ( number < 0){
        number *= (-1);
     }
     int minchar = number % 10;
     int len = itc_len_num(number);
     for ( int i = 0; i < len; i++){
        int ch = number % 10;
        if (ch < minchar){
            minchar = ch;
        }
        number /= 10;
     }
     return minchar;
 }
