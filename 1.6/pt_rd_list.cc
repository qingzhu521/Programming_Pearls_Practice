#include "util.h"

using namespace std;

int main(int args, char *argv[]){
   if (argv[1] == NULL || argv[2] == NULL){
       printf("error no argument");
       return 1;
   }
   int num = atoi(argv[1]);
   int upperbound = atoi(argv[2]);  
   rand_init();
   for(int i = 0; i < num; i++){
        printf("%d\n", randa(upperbound)); 
   }
   return 0;
}
