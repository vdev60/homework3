#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "myhead.h"



char *lib_strcat(char *dest, const char *src);
bool compare_strcat(char *str1, char *str2);

int main(){
    char *test_str[4] = {"BMW", "Tesla", "Porshe", "Suzuki"};
    bool compare_result;
    
    for(int i= 0; i < 4; i ++){
        char str1[40] = "Model - ";
        char str2[40] = "Model - ";
 
        strcat(str1,test_str[i]);
        lib_strcat(str2,test_str[i]);
 
        compare_result = compare_strcat(str1, str2);
        test_output(compare_result, i);
    }

    return 0;
}

char *lib_strcat(char *dest, const char *src){
    
    int j = strlen(dest);
    int i = 0;
    while(src[i]){

        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return dest;
}

bool compare_strcat(char *str1, char *str2){
    if (!strcmp(str1,str2)){
        return true;
    }else{
        return false;
    }
}