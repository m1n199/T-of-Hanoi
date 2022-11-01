#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
// 4 4 4 4 
// 4 3 3 3  
// 4 3 2 2
// 4 3 2 1
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int f=1,F=1;
    do{
      for(int i = n; i > 0; i--) {
            if(!F && i == 1)
              break;
          int num = n;
        do{
          for(int j = 0; j < n; j++) {
            if(!f && j == n-1)
              break;
            if(f==1) {
                if(num > i) {
                    printf("%d ",num--);
                    continue;
                }
                printf("%d ",num);
            }
            else {
              if(j-i > -2)
                  printf("%d ",++num);
              else
                  printf("%d ",num);
            }
            
          }
        }while(f-- > 0);
        f=1;
        printf("\n");
      }
    }while(F-- > 0);
      
    return 0;
}
