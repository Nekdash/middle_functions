#include "middle.h"

long long itc_oct_num(long long number){
    long long res = 0;
    int i = 0;
    while(number != 0){
        res += (number % 8)*ipow(10, i);
        i++;
        number = number / 8;
    }
    return res;
}
