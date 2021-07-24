#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char * string_to_camle_case(char *str);

int main(){
    char *str = "Tesla MODEL 3.";
    char *str1 = "APPLE google Amazon 911 001!";
    char *str_result = string_to_camle_case(str);
    char *str_result1 = string_to_camle_case(str1);

    printf("%s\n", str);
    printf("%s\n", str_result);
    printf("\n");
    printf("%s\n", str1);
    printf("%s\n", str_result1);
    
    free(str_result);
    free(str_result1);
    return 0;
}

char * string_to_camle_case(char *str){
    char * new_str = malloc(strlen(str) +1);
    int i = 0;
    while (str[i]){
        if (str[i] > 64 && str[i] < 91){ 
            new_str[i] = str[i] + 32;
        }else if(str[i] > 96 && str[i] < 123){
            new_str[i] = str[i] - 32;

        }else{
            new_str[i] = str[i];

        }
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}