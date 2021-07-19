#include <stdio.h>
#include <string.h>

//declaration
int lib_strlen(char *str);
void compare(int origin_func, int own_func);

int main(){
  char * str1 = "asdasda";
  char * str2 = "asda";


  compare(lib_strlen(str1), strlen(str1));
  compare(lib_strlen(str2), strlen(str2));


  return 0;
}

int lib_strlen(char * str){
int i = 0;
/*
  for (;;)
  {
    if (str[i] == 0)
    {
      return i;
    }
    i++;

*/ 

/*
  while(i){
    if (str[i] == 0)
    {
      return i;
    }
    i++;
  }
*/

/*
  for (int a=0;str[a];a++)
  {
    i++;
  }
*/

  while(str[i]){
    i++;
  } 

  return i;
}


void  compare(int origin_func, int own_func){
  if (origin_func == own_func){
    printf("Good job!\n");
    printf("Result strlen function - %d\n", origin_func);
    printf("Result lib_strlen function - %d\n\n", own_func);

  }else{
    printf("Opps. You have a problem!\n");
    printf("Result strlen function - %d\n", origin_func);
    printf("Result lib_strlen function - %d\n\n", own_func);

  }
}
