#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "myhead.h"



int  lib_strcmp(const char * str1, const char * str2);
bool compare_strcmp(int org_func, int lib_func);

int main(){
    char *test_str1[4] = {"BMW", "Tesla Model Y", "Porshe Taycan", "Suzuki"}; //You can change strings for testing here
    char *test_str2[4] = {"BMW", "Tesla Model X", "Porshe Cayenne", "Suzuki"};
    bool compare_result;
    for( int i = 0; i < 4; i++){
        compare_result = compare_strcmp(lib_strcmp(test_str1[i], test_str2[i]), strcmp(test_str1[i], test_str2[i]));
        test_output(compare_result, i);

    }
    
    return 0;
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


bool compare_strcmp(int org_func, int lib_func){
    return (org_func == lib_func) ? true : false;
}


