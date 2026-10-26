#include<stdio.h>
int main(){
int pin=1426;
int enterPin;
int choice;
float balance = 260000;
float amount;

printf("------Welcome To ATM------");
printf("enter your pin:");
scanf("%d", &enterPin);
if(enterPin !=pin)
{
printf("Invalid PIN!\n");
return 0;
}
printf("\nlogin sucessful!\n");
do
{
printf("\n======ATM MENU======\n");
printf("1.check the balance\n");
printf("2.deposit balance\n");
printf("3.withdraw money\n");
printf("4.exit\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("your balance: rs %.2f\n",balance);
break;
case 2:
printf("enter your deposit amount :");
scanf("%f",&amount);
if(amount>0)
{
balance = balance +amount;
printf("money deposited sucessfully!\n");
printf("new balance:rs%2f\n",balance);
}
else
{
printf("invaalid amount!\n");
}
case 3:
printf("Enter withdral amount:");
scanf("%f",&amount);
if(amount<=0)
{
printf("invalid amount:\n");
}
else if (amount <=balance)
{
balance = balance - amount ;
printf("please collect your cash.\n");
printf("remaing balance: rs.%2f\n",balance);
}
else
{
printf("insufficient balance!\n");
}
break;
case 4:
  printf("thank you using ATM!\n");
  break;
 default:
   printf("invalid choice!n");
}
}while(choice !=4);
return 0;
}