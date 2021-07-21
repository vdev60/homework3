#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *lib_strcat(char *dest, const char *src);
void compare(char *str1, char *str2);

int main(){

    char str1[20] = "Hello ";
    char * str2 = "World!";

    char str3[20] = "Hello ";
    char * str4 = "World!";

    strcat(str1,str2);
    lib_strcat(str3,str4);

    compare(str1,str3);

    //compare("asd","asd");
}

char *lib_strcat(char *dest, const char *src){
    
    int j = strlen(dest);
    int i = 0;
    while(src[i]){

        dest[j] = src[i];
        i++;
        j++;
    }
    return dest;
}

void compare(char *str1, char *str2){

    if (!strcmp(str1,str2)){
        printf("The result is correct!\n");
    }else{
        printf("The result is wrong!\n");
    }

}