#include "util.h"

void rand_init(){
    srand(time(NULL));
}

int randa(int upperbound){
    return ( (rand() << 15) + (rand() & 0x7fff) ) % upperbound; 
}

int rand_gen_arr(int *a, int n, int upperbound){
    rand_init();
    for(int i = 0; i < n; i++){
        a[i] = randa(upperbound);
    }
}

