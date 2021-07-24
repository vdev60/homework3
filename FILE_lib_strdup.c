#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "myhead.h"



char *lib_strdup(const char *s);
bool compare_strdup(char *str1, char *str2);

int main(){
    char *str = "Bsddasdasd";
    char *test_str[4] = {"BMW", "Tesla Model X", "Porshe Cayenne", "Suzuki"};
    bool compare_result;

    for( int i = 0; i < 4; i++){
        char *dup_str1;
        char *dup_str2;
        dup_str1 = strdup(test_str[i]);
        dup_str2 = strdup(test_str[i]);
        compare_result = compare_strdup(dup_str1, dup_str2);
        
        test_output(compare_result, i);
        
        free(dup_str2);
        free(dup_str1);
        
    }

    return 0;
}


char *lib_strdup(const char *s){
    int len = strlen(s);
    char *dub = (char *)malloc(sizeof(char)*(len+1));
    
    if (dub == NULL){
        return NULL;
    }

    int i = 0;
    while(s[i]){
        dub[i] = s[i];
        i++;
    }
    dub[i] = '\0';
    
    return dub;
}

bool compare_strdup(char *str1, char *str2){

    if (!strcmp(str1,str2)){
        return true;
    }else{
        return false;
    }

}