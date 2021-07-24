#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include "myhead.h"

int lib_isdigit(int c);
bool compare_isdigit(int result_1, int result_2);

int main(){
    int arr[9] = {1,4,66,3,1,77,0,9,12};
    bool compare_result;
    for(int i = 0; i < 9; i++){
        compare_result = compare_isdigit(lib_isdigit(arr[i]), isdigit(arr[i]));
        test_output(compare_result, i);
    }
    return 0;
}

int lib_isdigit(int c){
    if (c>'0' && c<'9'){
        return 2048;                    // original function return 2048 if it is number else 0
    }else{
        return 0;
    }
}

bool compare_isdigit(int result_1, int result_2){
    if (result_1 == result_2){
        return true;
    }else {
        return false;
    }
}


   
    