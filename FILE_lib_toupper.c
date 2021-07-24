#include <stdio.h>
#include <ctype.h>
#include "myhead.h"

int lib_upper(int c);
bool compare_isascii(int a, int b);

int main(){
    
    char *str = "abczTas!.Z";
    bool compare_result;
    int  i = 0;
    while(str[i]){
        compare_result = compare_isascii( lib_upper(str[i]), toupper(str[i]) );
        test_output(compare_result, i); 
        i++;
    } 
    


    return 0;
}

int lib_upper(int c){
    if (c >=97 && c <= 122){
        return c - 32;
    }else{
        return c;
    }
}

bool compare_isascii(int a, int b){
    return a == b ? true : false ;
}

