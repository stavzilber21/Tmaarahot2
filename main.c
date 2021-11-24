#include <stdio.h>
#include "my_mat.h"
#include <stdlib.h>
int main(){
    char c=0;
    
    while(1){  
    scanf("%c",&c);
     if(c == 'A'){  
         A();
     }
      if(c == 'B'){
         B();
     }
     if(c == 'C'){
         C();
     }
     if(c == 'D'){
         break;
     }
    }
return 0;
}