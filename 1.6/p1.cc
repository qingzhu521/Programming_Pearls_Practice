#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namspace std;

int a[10000000];
int n;
int main(){
    n = 0;
    while(scanf("%d", &a[n]) != EOF)n++;
    qsort(a, n, sizeof(int), 
}

