#include "eliuds_eggs.h"


int egg_count(int coded){
    int cp = coded, count =0;
    while(cp){
        cp = cp & (cp-1);
        count++;
    }
    return count;
}

