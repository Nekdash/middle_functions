#include "middle.h"
 int itc_max_num(long long number){
     if ( number < 0){
        number *= (-10);
     }

     int maxchar = -1;
     int ch;
     int len = itc_len_num(number);
     for ( int i = 0; i < len; i++){
        ch = number % 10;
        if (ch > maxchar){
            maxchar = ch;
        }
        number /= 10;
     }
     return maxchar;
 }
