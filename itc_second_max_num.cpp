#include "middle.h"


 int itc_second_max_num(long long number){
     if ( number < 0){
        number *= (-1);
     }
     int maxchar = -1, ch, ind=0, secmax = -1, len = itc_len_num(number);
     long long number1 = number;
     for ( int i = 0; i < len; i++){
        ch = number % 10;
        if (ch > maxchar){
            maxchar = ch;
            ind = i;}
        number /= 10;
     }
     for ( int k = 0; k < len; k++){
        if ( k == ind){}else{
            if (ch > secmax)
            secmax = ch;
        }
        number1 /= 10;
        ch = number1 % 10;
     }

      return secmax;
 }
