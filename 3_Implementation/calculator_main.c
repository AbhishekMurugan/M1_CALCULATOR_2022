#include <stdio.h>

int add(int num1,int num2)
{
    int result=num1+num2;
    return result;
   
}

int sub(int num1,int num2)
{
    int result=num1-num2;
    return result;
   
}

int mul(int num1,int num2)
{
    int result=num1*num2;
    return result;
   
}

int divd(int num1,int num2)
{
    int result=num1/num2;
    return result;
   
}

int mod(int num1,int num2)
{
    int result=num1%num2;
    return result;
}

int main()
{
    int input_1;
    int input_2;
    int task;
    while(1)
    {
   
    printf("enter the two number\n");
   
    printf("number 1\t");
   
    scanf("%d",&input_1);
   
    printf("number 2\t");
   
    scanf("%d",&input_2);
   
    printf("---------------------------------------------------------------------------\n");
   
    printf("enter the operator need to done\n ");
    printf("       1.addition\n");
    printf("       2.subtraction\n");
    printf("       3.Multiplication\n");
    printf("       4.division\n");
    printf("       5.modules\n");
    printf("       6.terminate the operation\n");
   
    printf("---------------------------------------------------------------------------\n");
    scanf("%d",&task);
   
   
   
    while(1)
    {
        switch(task)
        {
            case 1:
              printf("%d\n",add(input_1,input_2));
              break;
             
             
            case 2:
              printf("%d\n",sub(input_1,input_2));
              break;
             
            case 3:
              printf("%d\n",mul(input_1,input_2));
              break;
             
            case 4:
              printf("%d\n",divd(input_1,input_2));
              break;
             
            case 5:
              printf("%d\n",mod(input_1,input_2));
              break;
           
            case 6:
              break;
        }
        break;
    }
   
    if(task==6)
    {
        printf("----------->successfully terminate<------------");
        break;
    }
    }
    return 0;
}
