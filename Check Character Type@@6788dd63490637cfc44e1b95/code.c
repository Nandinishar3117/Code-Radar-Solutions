#include <stdio.h>
int main(){
    char a;
   

    
    scanf("%c",&a);
    
   
   
        if ((a=='a' )||(a=='e') || (a=='i') || (a=='o') || (a=='u') || (a=='A') || (a=='E' )||(a=='I') || (a=='O'') ){
        printf("Vowel");}
        else if ((a=='!' )||(a=='@') || (a=='#') || (a=='$') || (a=='%') || (a=='^')) {
            printf("Special Character");
        }
         else if ((a >= 'A' && a <= 'Z') || (a>= 'a' && a <= 'z')) {
        printf("Consonant");
    }
   
     else  {
            printf("Digit");
        }
     
  
}