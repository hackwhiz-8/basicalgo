#include <stdio.h>
  
 typedef int Arr[4];
  
// Driver code
int main()
{
  Arr temp = {10, 20, 30, 40};
  printf("typedef using an array\n");
    
  for (int i = 0; i < 4; i++) 
  {
    printf("%d ", temp[i]);
  }
  return 0;
}

/*
#define is capable of defining aliases for values as well, for instance, you can define 1 as ONE, 3.14 as PI, etc. Typedef is limited to giving symbolic names to types only.
Preprocessors interpret #define statements, while the compiler interprets typedef statements.
There should be no semicolon at the end of #define, but a semicolon at the end of typedef.
In contrast with #define, typedef will actually define a new type by copying and pasting the definition values.*/