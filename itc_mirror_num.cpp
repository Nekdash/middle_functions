#include "middle.h"

bool itc_mirror_num(long long number){
    if (number < 0){
        number = number * (-1);
    }
    long long res =0 ;
    long long number1 = number;
    int len = itc_len_num(number);
    int ch = number1 % 10;
     while (ch == 0){ // delete nulls
        number1 /= 10;
        ch = number1 % 10;
     }
    for( int i = 0; i < len; i++){
      res += number %  10 * ipow(10, len - i-1);
      number /= 10;
    }

    if ( res == number1){
        return true;
    }
    return false;

}
