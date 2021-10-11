#include "middle.h"

bool itc_mirror_num(long long number){
    if (number < 0){
        number = number * (-1);
    }
    if ( number == 0){
        return 1;
    }
    long long number1 = number;
    
    long long res = 0;
     while (number > 0){
        res = res*10 + number%10;
        number /= 10;
        
     }

    if ( res == number1)
        return true;
    
    return false;

}
