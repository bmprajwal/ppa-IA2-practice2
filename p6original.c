#include <stdio.h>

int main(){
  int count=0;
  char a[80], b[80];
  printf("Enter string: ");
  scanf("%s", a);  
  
  while(a[count]!='\0')
   count++;
  
  printf("Reverse: ");
  for(int i= count-1;i>=0; i--)
    printf("%c", a[i]);
  printf("\n");
  
  return 0;
}