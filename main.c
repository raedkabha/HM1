#include<stdio.h>
#include "NumClass.h"
#include<math.h>

//p
int main(){





 int a, b;
 printf("Enter Two Numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
 
 int min , max;
 if(a <b){
     min = a;
     max = b;
 }else{
     min = b;
     max = a;
 }

  printf("All prime numbers between [%d , %d] : " , min , max);
  for(int i =min; i <=max; i++){

      if(isPrime(i)){
          printf("%d , " , i);
      }      
  }

printf("\n");

 printf("All ArmStrong numbers between [%d , %d] : " , min , max);
  for(int i =min; i <=max; i++){

      if(isArmstrong(i) == 1){
          printf("%d , " , i);
      }
  }

printf("\n");
   printf("All Strong numbers between [%d , %d] : " , min , max);
  for(int i =min; i <=max; i++){

      if(isStrong(i) == 1){
          printf("%d , " , i);
      }
  }
printf("\n");

printf("All Palindrome numbers between [%d , %d] : " , min , max);
  for(int i =min; i <=max; i++){

      if(isPalindrome(i) == 1){
          printf("%d , " , i);
      }
  }

printf("\n");
  
 return 0;
}