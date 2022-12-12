#include<math.h>

int isPrime(int num){

if(num<=1) return 0;

for(int i =2; i <=num; i++){

if(num%i ==0 && num !=i) {
     return 0;
}
 
}


return 1;
}

  int factorial(int n) {
      long fact = 1;
      for(int i=1; i<=n; i++) {
          fact *= i;
      }
      return fact;
   }

int isStrong(int num){

   int sum =0 , p =0;
   int temp = num;

   while(num!=0){
       p = num%10;
       sum+=factorial(p);
       num/=10;
   }

if(sum==temp) return 1;

return 0;

}