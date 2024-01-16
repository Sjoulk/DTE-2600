#include "types_kodeeksempel.h"
#include <iostream>

int calculator(int first_num, int second_num){

    int sum = first_num + second_num;

    int multi = first_num * sum;

    if(multi > 15){
        multi = sum;
    }

    return multi;
}
