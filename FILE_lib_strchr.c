#include <stdio.h>
#include <string.h>

char *lib_strchr(const char *s, int c);
void compare(char * str1, char * str2);

int main(){
    char *str1 = "Hello, World!";
    char *p1;
    char *p2;

    
    p1 = strchr(str1, 'T');
    p2 = lib_strchr(str1, 'T');
    compare(p1,p2);
    
    p1 = strchr(str1, '\0');
    p2 = lib_strchr(str1, '\0');
    compare(p1,p2);

    p1 = strchr(str1, 'e');
    p2 = lib_strchr(str1, 'd');
    compare(p1,p2);
    
    return 0;
}

char *lib_strchr( const char *s, int c){
    int i=0; 
    char * str = (char*)s; 

    while (str[i])
    {
        if (str[i] == c){
            return &str[i];   // (char *)&str[i] - ?
        }
        i++;
    }

    return (c == '\0') ? &str[strlen(s)] : NULL; //ternary operator
    
}

void compare(char * str1, char * str2){

    if (str1 == NULL && str2 == NULL){
        printf("The result is the same!\n");

    }else if((str1 == NULL || str2 == NULL) || (strcmp(str1,str2))){
        printf("The result is wrong!\n");
    }
    else if(!strcmp(str1,str2)){
        printf("The result is the same!\n");
    }

    printf("First  result - %s --> %p  \n",str1, str1);
    printf("Second result - %s --> %p  \n",str2, str2);
    printf("\n");
   
    
}
