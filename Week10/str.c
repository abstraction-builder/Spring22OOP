#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printStr(char *str, size_t len){
  for(size_t i=0; i<len; i++){
    printf("%c\n", str[i]);
  }
}

int main(void){
  size_t size = strlen("abc") + 1; // size = 3
  char s[size]; // char s[3]
  
  strcpy(s, "abc"); // char s[] = {'a', 'b', 'c'};
  s[size] = '\0';   // char s[] = {'a', 'b', 'c'};

  printStr(s, size);

  return 0;
}