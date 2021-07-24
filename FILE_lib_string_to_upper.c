#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char * string_to_upper(char *str);

int main(){
    char *str = "tesla model 3";
    char *str1 = "bmw";

    char *str_upper = string_to_upper(str);
    char *str1_upper = string_to_upper(str1);

    printf("%s\n", str_upper);
    printf("%s\n", str1_upper);
    
    free(str_upper);
    free(str1_upper);
    return 0;
}

char * string_to_upper(char *str){
    char * new_str = malloc(strlen(str) +1);
    int i = 0;
    while (str[i]){
        if (str[i] > 96 && str[i] < 123){
            new_str[i] = str[i] - 32;
        }else{
            new_str[i] = str[i];
        }
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}