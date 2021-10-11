#include "middle.h"

long long negative(long long number){
    if (number < 0){
        //return -1;
        //return number * (-1);
        //return number;
    }
}

long long ipow(long long number, int pow){
    long long res = 1;
    for ( int i=0; i < pow; i++){
        res *= number;
    }
    return res;

}

