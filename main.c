#include <stdio.h>
#include "baseconverter.c"


int average;
int functionaverage (){

    int notes[]={20,11,13,11,16,9,17} ;
    int sum = 0 ;
    int notesnumber = sizeof (notes) / sizeof(notes[0]) ;

    for (int i = 0; i < 8; ++i){
        sum += notes[i] ;
    }

    average = (int)sum / notesnumber ;
    printf("Votre moyenne est de %d en base 10.\n",average);
    return 0;
}


int main() {
    functionaverage();
    convertirBase(average,2);
    convertirBase(average,16);
    return 0;
}