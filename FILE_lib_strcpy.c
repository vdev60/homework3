#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "myhead.h"


//declaration
char *lib_strcpy(char *dest, char *src);

int main(){

    char *test_str[4] = {"BMW", "Tesla", "Porshe", "Suzuki"}; //You can change strings for testing here

    for(int i = 0; i < 4; i++){
        int num_of_memory = strlen(test_str[i]) +1;
        char * copy_str_lib_strcpy = (char *) malloc(num_of_memory);
        char * copy_str_strcpy = (char *) malloc(num_of_memory);

        strcpy(copy_str_strcpy, test_str[i]);
        lib_strcpy(copy_str_lib_strcpy, test_str[i]);

        test_output(!strcmp(copy_str_lib_strcpy, copy_str_strcpy) , i);

        free(copy_str_lib_strcpy);
        free(copy_str_strcpy);
    }


    return 0;
}

char *lib_strcpy(char *dest, char *src){
    
    int i = 0;
    while(src[i] !='\0'){
        dest[i] = src[i];
        i++;
    }
    
    dest[i] = '\0';
    return dest;
    
}

