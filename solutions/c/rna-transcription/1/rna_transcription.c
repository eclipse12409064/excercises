#include "rna_transcription.h"

char *to_rna(const char *dna){
    int len = strlen(dna);
    char *rna = (char*)malloc(len);

    int i;
    for(i = 0; *(dna+i) != 0; i++){
        switch(*(dna+i)){
            case 'A':
                *(rna+i) = 'U';
                break;
            case 'T':
                *(rna+i) = 'A';
                break;
            case 'C':
                *(rna+i) = 'G';
                break;
            case 'G':
                *(rna+i) = 'C';
                break;
            default:
                *(rna+i) = 0;
        }
    }

    *(rna+i) = 0;

    return rna;
}