#include <stdio.h>
#include <string.h>
#include <ctype.h>

int lib_isdigit(int c);
void compare(int result_1, int result_2);

int main(){
    compare(isdigit(33),lib_isdigit(55)); // for example call with different arguments
    compare(isdigit(49),lib_isdigit(49));

    return 0;
}

int lib_isdigit(int c){
    if (c>=48 && c<=57){
        return 2048;                    //x original function return 2048 if it is number  else 0
    }else{
        return 0;
    }
}

void compare(int result_1, int result_2){
    if (result_1 == result_2){
        printf("The result is the same!\n");
    }else {
        printf("The result is wrong!\n");
        printf("First result - %d\n", result_1);
        printf("Second result - %d\n", result_2);
        printf("\n");

    }
}


   
    