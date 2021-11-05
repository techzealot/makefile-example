#include <stdio.h>
#include "sum.h"
#include "multi.h"

int main(){
    int a=11;
    int b=12;
    printf("sum(%d,%d)=%d \n",a,b,sum(a,b));
    printf("multi(%d,%d)=%d \n",a,b,multi(a,b));
    return 0;
}