#include <stdio.h>
#include <stdbool.h>

void test_output(bool c, int i){
        if (c){
            printf("Test %i OK \n", i+1);
        }else{
            printf("Test %i FAILED\n",i+1);
        }
}