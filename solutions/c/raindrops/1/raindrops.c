#include "raindrops.h"


void convert(char result[], int drops){
    int divisibility = (drops%3 == 0) *1 + (drops %5 == 0) *2 + (drops % 7 == 0)*4;

    switch(divisibility){
        case 1:
            strcat(result, "Pling");
            break;
        case 2:
            strcat(result, "Plang");
            break;
        case 3:
            strcat(result, "Pling");
            strcat(result, "Plang");
            break;
        case 4:
            strcat(result, "Plong");
            break;
        case 5: 
            strcat(result, "Pling");
            strcat(result, "Plong");
            break;
        case 6:
            strcat(result, "Plang");
            strcat(result, "Plong");
            break;
        case 7:
            strcat(result, "Pling");
            strcat(result, "Plang");
            strcat(result, "Plong");
            break;
        default:
            sprintf(result, "%d", drops);
            break;
            
    }


        
        
    // if(drops%3 == 0) strcat(result, "Pling");
    // if (drops%5 == 0) strcat(result, "Plang");
    // if(drops % 7 == 0) strcat(result, "Plong");
    
    // else
    // {
    //     sprintf(result, "%d", drops);
    // }
}