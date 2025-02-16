#include <stdio.h>
int main(){
    int a; 
    int b;
    char m;

    scanf("%c",&m);
    scanf("%d",&a);   
    scanf("%d",&b);
        if (m=='-' ){
        printf("%d",a-b);}
        else if (m=='+'){
        printf("%d",a+b);
       
    }
 
        else if (m=='*' ){
        printf("%d",a*b);}
        else if (m=='/') {
        printf("%d\n",a/b);
        return 0;
    }
   
 
}
 
