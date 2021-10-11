#include "middle.h"

int itc_mirror_count(long long number){
    if ( number < 0){
        number *= (-1);
     }
    int counter = 0;
    for (int i = 1; i < number+1;i++){
        if (itc_mirror_num(i))
            counter += 1;
    }
    return counter;
}
