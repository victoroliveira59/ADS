#include <stdio.h>
#include <locale.h>
 int i,n,p,fat=1;
int main() {
           setlocale(LC_ALL,"PORTUGUESE");
           scanf("%i", &n);
           scanf("%i", &p);
            for(int i = n; i>=(p+1); i--){ 
                        fat *= i;
                for(i=n-p; i>=1;i--)
                            fat /= i;
        }   
                printf("%i", fat);
}