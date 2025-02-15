#include <stdio.h>
int main(){
    int a; 
    int b;

    scanf("%d",&a);
       
    scanf("%d",&b);
        if (a%3==1  || a%5==1 || a%2==1 || a%7==1 ){
        printf("Prime");}
     
     else  {
            printf("Not Prime");
        
     }
}