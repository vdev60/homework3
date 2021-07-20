#include <stdio.h>
#include <string.h>

void print_ascii_str(const char * str);
int lib_strcmp(const char * str1, const char * str2);
void compare(int org_func, int lib_func);

int main(){
    const char *str1 = "Hello!";
    const char *str2 = "Hello";

    compare(strcmp(str1,str2),lib_strcmp(str1,str2));
    compare(strcmp(str1,str2),lib_strcmp(str2,str1));
    
    //intresting thing
    //int res = strcmp(str1,str2);
    //printf("strcmp %d\n", res);
    //printf("strcmp %d\n", strcmp("Hello!", "Hello"));


    return 0;
}

//print characters and their number in ascii
void print_ascii_str(const char * str){
    int i = 0;

    while (str[i])
    {
        printf("%c - %d\n", str[i],str[i]);
        i++;
    }
    printf("\n");

}

int lib_strcmp(const char * str1, const char * str2){
    int result;
    int i = 0;

    while (str1[i] || str2[i])
    {   
        if (str1[i] ==  str2[i]){
            result = 0; 
        }else{
            return str1[i] - str2[i];

        }
        i++;
    }

    return result;
}

//first parametr - original function strcmp , second parameter - own function lib_strcmp
void compare(int org_func, int lib_func){
    if(org_func == lib_func){
        printf("The result is the same!\n\n");
    }else{
        printf("The result is not the same!\n");
        printf("strcmp : %i\n", org_func);
        printf("lib_strcmp : %i\n\n", lib_func);


    }
}


