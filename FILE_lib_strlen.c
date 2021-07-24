#include <stdio.h>
#include <string.h>
#include "myhead.h"


//declaration
int lib_strlen(char *str);
int compare_strlen(int origin_func, int own_func);

int main(){
  char * str[5] = {"Porshe", "Tesla","Nic\0e","Go0gle","Space10"}; //You can change strings for testing here
  int compare_result;

  for(int i= 0; i < 5; i ++){
    compare_result = compare_strlen(strlen(str[i]), lib_strlen(str[i]));
    test_output(compare_result, i);
  }

  return 0;
}

int lib_strlen(char * str){
int i = 0;

  while(str[i]){
    i++;
  } 

  return i;
}


int compare_strlen(int origin_func, int own_func){
  return (origin_func == own_func) ? 1: 0;
}

