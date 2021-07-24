#include <stdio.h>
#include <ctype.h>
#include "myhead.h"

int lib_isalpha(int c);
bool compare_isalpha(int one_func, int second_func);

int main(){
    char arr_chars[10] = {'a', 'Z' , 'C' , 'n' , '7' , '.' , '!' , 'z' , 'A','\n'};
    bool compare_result;

    for (int i = 0; i < 10; i++){
        compare_result = compare_isalpha(isalpha(arr_chars[i]), lib_isalpha(arr_chars[i]));
        test_output(compare_result, i);
    }
    
    return 0;
}

int lib_isalpha(int c){
    if ( (c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        return 1024;
    }else{
        return 0;
    }
}

bool compare_isalpha(int one_func, int second_func){
    return (one_func == second_func) ? true: false;
}