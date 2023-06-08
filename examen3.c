#include <stdio.h>
#include <time.h>
unsigned long long rdtsc(){
    unsigned int lo, hi;
    _asm_ _volatile_ ("rdtsc" : "=a" (lo), "=d" (hi));
    
}