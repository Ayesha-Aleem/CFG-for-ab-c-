#include <stdio.h>
#include<string.h>
//cfg for ab?c* means b can come one time only
int main() {
    int i=0,f1=0;
    char c[32];
    char *ptr;
    printf("Enter a string to validate(ab?c*): \n");
    gets(c);
    ptr=c;
    printf("\n");
     while(i< strlen(c)) {
        if(ptr[i]=='a') {
           f1++;
           i++;
           if(ptr[i]=='a') {
               f1=0;
               printf("Not a valid string\n");
               break;
           }
           else if(ptr[i]=='b') {
               f1++;
               i++;
               if(ptr[i]=='b') {
                   f1=0;
                   printf("Not a valid string\n");
                   break;
               }
               else if(ptr[i]=='c'){
                   f1++;
                   i++;
                   while (ptr[i]=='c') {
                       f1++;
                       i++;
                       if(ptr[i]!='c') {
                           break;
                       }
                   }
               }
           }
           else if(ptr[i]=='c'){
               f1++;
               i++;
               while (ptr[i]=='c') {
                   i++;
                       f1++;
               }
           }

        }
        else
        {
            f1=0;
            printf("Not accepted\n");
            break;
        }
    }
     if(f1>0) {
         printf("Valid string");
     }
     else{
         printf("Not a valid string");
     }
    return 0;
}
