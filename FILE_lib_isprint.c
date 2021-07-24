#include <stdio.h>
#include <ctype.h>
#include "myhead.h"

int lib_isprint(int c);
bool compare_isprint(int one_func, int second_func);

int main(){
    char *str = "abczTas!.Z";
    bool compare_result;

    int i =0;
    while(str[i]){
        compare_result = compare_isprint(isprint(str[i]), lib_isprint(str[i]));
        test_output(compare_result, i);
        i++;
    }
    
    return 0;
}

int lib_isprint(int c){
    if (c >= 32 && c <= 127){
        return 16384;
    }else{
        return 0;
    }
}

bool compare_isprint(int one_func, int second_func){
    return (one_func == second_func) ? true: false;
}