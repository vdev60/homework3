#include <stdio.h>
#include <ctype.h>
#include "myhead.h"

int lib_isascii(int c);
bool compare_isascii(int a, int b);

int main(){
    char *str = "as24!f30 .!\n ";
    bool compare_result;
    int  i = 0;
    while(str[i]){
        compare_result = compare_isascii( isascii(str[i]), lib_isascii(str[i]) );
        test_output(compare_result, i); 
        i++;
    } 

    return 0;
}

int lib_isascii(int c){
    if (c > 0 && c < 128){
        return 1;
    }else{
        return 0;
    }
}

bool compare_isascii(int a, int b){
    return a == b ? true : false ;
}

