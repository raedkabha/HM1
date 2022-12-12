#include <math.h>


int power(int a , int b){
  if (b == 0)
        return 1;
    if (b % 2 == 0)
        return power(a, b / 2) * power(a, b / 2);
    return a * power(a, b / 2) * power(a, b / 2);

}

int isArmstrongHel(int num , int p){

     if(num==0) return 0;

    return (power(num%10,p) +isArmstrongHel(num/10 ,p));

}



int isArmstrong(int num){
   
  int p  =0;
  int temp = num;
  
    while(temp!=0){
        p++;
        temp/=10;
       
    }
   
   if(isArmstrongHel(num , p) == num) return 1;

   return 0;

}



int reverse(int num){

  
    int temp;
    static int sum=0;
    if(num!=0){
            temp=num%10;
            sum=sum*10+temp;
            reverse(num/10);
    }
        else
            return sum;
    return sum;
}

int isPalindrome(int num){

 
    if(num == reverse(num))
    {
        return 1;
    }
    
    return 0;



}