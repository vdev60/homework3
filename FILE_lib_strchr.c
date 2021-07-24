#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "myhead.h"


char *lib_strchr(const char *s, int c);
bool compare_strchr(char * str1, char * str2);

int main(){
    char *str1 = "Hello, World!";
    char test_chars[5] = {'l','\0','T','W'};  //You can change characters for testing here
    bool compare_result;
    for (int i = 0; i < 5; i++){
        compare_result = compare_strchr( strchr(str1 , test_chars[i]), lib_strchr(str1, test_chars[i]) );
        test_output(compare_result, i);

    }
    

    return 0;
}


char *lib_strchr( const char *s, int c){
    char * str = (char*)s; 

    while (*str != '\0')
    {
        if (*str == (char )c){
            return str;   // (char *)&str[i] - ?
        }
        str++;
    }

    return (c == '\0') ? str : NULL; //ternary operator
}

bool compare_strchr(char * str1, char * str2){
    if ((str1 == NULL && str2 == NULL) || (!strcmp(str1,str2)) ){
       return true;
    }else{
        return false;
    }
}

