// Implements a spell-checker
#include <iostream>
#include "checking.h"
#include <ctype.h>
#include <stdio.h>
#include <sys/resource.h>
#include <sys/time.h>
#include "dictionary.h"
#undef calculate
#undef getrusage
using namespace std;

double calculate(const struct rusage *b, const struct rusage *a);
double time_load = 0.0, time_check = 0.0, time_unload = 0.0;

int main(int argc, char *argv[]){
    struct rusage before, after;
    argument_check(argc);
    FILE *text_file=checkfile(false,argv[1]);
    FILE *dictionnary_file=checkfile(true,argv[0]);

    getrusage(RUSAGE_SELF, &before);
    load(dictionnary_file);
    getrusage(RUSAGE_SELF, &after);
    
    // Calculate time to load dictionary
    time_load = calculate(&before, &after);

    // Check word's spelling
    getrusage(RUSAGE_SELF, &before);
    spell_check(text_file);
    getrusage(RUSAGE_SELF, &after);
    // Update benchmark
    time_check += calculate(&before, &after);
    // Close text
    fclose(text_file);

    // Unload dictionary
    getrusage(RUSAGE_SELF, &before);
    unload();
    getrusage(RUSAGE_SELF, &after);
    time_unload = calculate(&before, &after);
    fclose(dictionnary_file);

    printf("TIME IN load:         %.2f\n", time_load);
    printf("TIME IN check:        %.2f\n", time_check); 
    printf("TIME IN unload:       %.2f\n", time_unload);
    printf("TIME IN TOTAL:        %.2f\n\n",time_load + time_check + time_unload);
    
    return 0;
}
 
 
// Returns number of seconds between b and a
double calculate(const struct rusage *b, const struct rusage *a){

    if (b == NULL || a == NULL) return 0.0; 
    else return ((((a->ru_utime.tv_sec * 1000000 + a->ru_utime.tv_usec) -
                  (b->ru_utime.tv_sec * 1000000 + b->ru_utime.tv_usec)) +
                 ((a->ru_stime.tv_sec * 1000000 + a->ru_stime.tv_usec) -
                  (b->ru_stime.tv_sec * 1000000 + b->ru_stime.tv_usec))) / 1000000.0);
    
}
