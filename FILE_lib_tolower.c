#include <stdio.h>
#include <ctype.h>
#include "myhead.h"

int lib_tolower(int c);
bool compare_isascii(int a, int b);

int main(){
    
    char *str = "AV7GTas!.Z";
    bool compare_result;
    int  i = 0;
    while(str[i]){
        compare_result = compare_isascii( lib_tolower(str[i]), tolower(str[i]) );
        test_output(compare_result, i); 
        i++;
    } 
    


    return 0;
}

int lib_tolower(int c){
    if (c >=65 && c <= 90){
        return c + 32;
    }else{
        return c;
    }
}

bool compare_isascii(int a, int b){
    return a == b ? true : false ;
}

