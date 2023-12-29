#include<stdio.h>

   int main()
   {
     //to accept the alphabet from the user
     int alph;
     printf("please enter a lower case alphabet: "); 
     scanf("%c",&alph);                

       char uppercase = alph+32;
       printf("the upper case alphabet is %c", alph);


    return 0;
   }