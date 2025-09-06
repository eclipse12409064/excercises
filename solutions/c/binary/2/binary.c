#include "binary.h"


int convert(const char *input){

    int len = strlen(input);
    int res = 0;

    int i;
    for(i = 0; *(input+i) != 0; i++){
        if(*(input+i) < '0' || *(input+i) > '1') return -1;
        // res += (*(input+i) == '1')? pow(2, len-i-1): 0;

        res = res | ((*(input+i)-'0')<< (len-i-1));
        
    }

    return res;
    
}
