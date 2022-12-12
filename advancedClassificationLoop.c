int isPalindrome(int num){

int tempN= num;
int rev =0;
while(num!=0){
  int p = num%10;
  num/=10;
  rev = rev*10 + p;

}

if((rev==tempN)&&tempN>=0){
    return 1;
}

return 0;
    
}

int power(int a , int b){
  if (b == 0)
        return 1;
    if (b % 2 == 0)
        return power(a, b / 2) * power(a, b / 2);
    return a * power(a, b / 2) * power(a, b / 2);

}


int isArmstrong(int num){
int count =0;
int ans =0;
int temp = num;
int check = num;
while(temp!=0){
count++;
temp/=10;

}
while(num!=0){
  int n = num%10;
  ans += power(n ,count);
  num /=10;

}
if(check == ans){
    return 1;
}

return 0;

}