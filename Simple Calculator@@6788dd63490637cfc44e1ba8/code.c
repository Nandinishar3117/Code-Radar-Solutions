#include <stdio.h>
int main(){
    int a; 
    int b;

    scanf("%d",&a);
       
    scanf("%d",&b);
        if (a=='+' ){
        printf("%d",a+b);}
        else if (a==2){
        printf("Tuesday");
       
    }
 
        else if (a==3 ){
        printf("Wednesday");}
        else if (a==4) {
        printf("Thursday\n");
        return 0;
    }
    else if(a==5){
        printf("Friday");
    }
     else if(a==7){
        printf("Sunday");
    }

    else{
        printf("Invalid");
    }
 
}
 
