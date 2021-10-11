#include "middle.h"

void ft_num_print(int x){
    //cout << x << endl;
}

int ft_len_num(int x){
    int res = 1;
    while(x != 0){
        x = x / 10;
        res++;
    }
    return res;

}

int ft_sum_num(int x){
    int res = 0;
    for(int i = 0; i < ft_len_num(x); i++){
        res += x % 10;
        x = x / 10;
    }
    return res;
}

int ft_multi_num(int x){
    int res = 0;
    for(int i = 0; i < ft_len_num(x); i++){
        res *= x % 10;
        x = x / 10;
    }
    return res;
}
