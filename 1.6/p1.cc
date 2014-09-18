#include "util.h"
using namespace std;

int a[1000000];
int cmp(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int main(){
    int n = 0;
    while(~scanf("%d", &a[n])) n++;
    qsort(a, n, sizeof(int), cmp);
    
    for (int i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}

