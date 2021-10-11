#include "middle.h"

long long itc_bin_num(long long number){
    if (number < 0){
        return (itc_bin_num(number * -1))* -1;}
    long long res = 0;
    int i = 0;
    while (number > 0){
        res += (number % 2)* ipow(10, i);
        i++;
        number = number / 2;
    }
    return res;
}

/*

*/
