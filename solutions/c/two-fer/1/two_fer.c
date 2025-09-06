#include "two_fer.h"


void two_fer(char *buffer, const char *name){
    if(name == NULL || !(*name)) 
        // Here’s why:

        // If name == NULL, the left side !(*name) is evaluated first, and dereferencing a NULL pointer will crash your program before it even checks the right side.

        // 👉 You need to check name == NULL before dereferencing it.
    {
        
        // strcpy(buffer, "One for you, one for me.");
        sprintf(buffer, "One for you, one for me.");
    }
    else{
        // strcpy(buffer, "One for ");
        // strcat(buffer, name);
        // strcat(buffer, ", one for me.");

        sprintf(buffer, "One for %s, one for me.", name);
    }
}
