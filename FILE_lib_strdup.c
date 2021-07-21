#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *lib_strdup(const char *s);
void compare(char *str1, char *str2);

int main(){
    char *str = "Bsddasdasd";
    char *dup_str1;
    char *dup_str2;

    dup_str1 = strdup(str);
    dup_str2 = lib_strdup(str);

    compare(dup_str1,dup_str2);
    free(dup_str2);
    free(dup_str1);
    return 0;
}


char *lib_strdup(const char *s){
    int len = strlen(s);
    char *dub = (char *)malloc(sizeof(char)* (len+1));
    if (dub == NULL){
        return NULL;
    }else{
        int i = 0;
        while(s[i]){
            dub[i] = s[i];
            i++;
        }
    }
    return dub;
}

void compare(char *str1, char *str2){

    if (!strcmp(str1,str2)){
        printf("The result is correct!\n");
    }else{
        printf("The result is wrong!\n");
    }

}