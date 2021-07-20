#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//declaration
char *lib_strcpy(char *dest, char *src);
void compare(char *copy_str,char *str);

int main(){

    char *str = "Test!";
    int len = strlen(str);
    
    char * copy_str_lib_strcpy = (char *) malloc(len);
    char * copy_str_strcpy = (char *) malloc(len);

    //function(dest, src)
    //function copy src to dest and return dest string 
    lib_strcpy(copy_str_lib_strcpy, str);
    strcpy(copy_str_strcpy, str);
    
    //comparison of the results of original funciton "strcpy" and own function "lib_strcpy"
    compare(copy_str_lib_strcpy, copy_str_strcpy);

    char *str1 = "Hello, world!";
    
    //we call compare function where we call our strcpy functions with two parameters - dest, stc 
    compare(lib_strcpy(copy_str_lib_strcpy, str1), strcpy(copy_str_strcpy,str1));

    //when we compare two different string we get relevant information
    compare("Test", "test");


    free(copy_str_lib_strcpy);
    free(copy_str_strcpy);
    return 0;
}

char *lib_strcpy(char *dest, char *src){
    
    int i = 0;
    while(src[i] !='\0'){
        dest[i] = src[i];
        i++;
    }
    return dest;
    
}

void compare(char *str1,char *str2){

    int result = strcmp(str1, str2); // man strcmp

    if(!result){
        printf("String 1 - %s\n", str1);
        printf("String 2 - %s\n", str2);
        printf("Ok. Strings are equal!\n\n");
    }else{
        printf("String 1 - %s\n", str1);
        printf("String 2 - %s\n", str2);
        printf("Error. Strings are not equal!\n\n");
    }

}
