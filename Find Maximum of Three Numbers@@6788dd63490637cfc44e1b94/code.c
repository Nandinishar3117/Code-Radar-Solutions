int main(){
    int a;
    int b;
    int c;

    
    scanf("%d",&a);
    
    scanf("%d",&b);
    
    scanf("%d",&c);
   
        if ((a>c )&& (a>b)){
        printf("%d",a);}
        else if(b>c && b>a) {
            printf("%d",b);
        }
   
     else if (c>a && c>b) {
            printf("%d",c);
        }
  
}