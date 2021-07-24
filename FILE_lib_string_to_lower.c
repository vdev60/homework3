#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char * string_to_lower(char *str);

int main(){
    char *str = "Tesla MODEL 3";
    char *str1 = "SPACE X!";

    char *str_lower = string_to_lower(str);
    char *str1_lower = string_to_lower(str1);

    printf("%s\n", str1_lower);
    printf("%s\n", str_lower);
    
    free(str1_lower);
    free(str_lower);
    return 0;
}

char * string_to_lower(char *str){
    char * new_str = malloc(strlen(str) +1);
    int i = 0;
    while (str[i]){
        if (str[i] > 64 && str[i] < 91){ 
            new_str[i] = str[i] + 32;
        }else{
            new_str[i] = str[i];
        }
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}