/*
    Program for designing a calculator.
    Name - Chandan Kumar Nayak
    Roll No. - 06
    SIC No. - 21bcsb17
 */
 #include<stdio.h>
 int main()
 {
     float a,b,res;
     char c;


      printf("\nEnter the first numbers : ");
     scanf("%f",&a);
     printf("\nEnter the operation as following.\n'+' - Addition\t'-' - Substraction\t'*' - Multiplication\t'/' - Division\n");
     scanf(" %c",&c);
     switch(c)
     {
         case '+' : printf("\nEnter the secound number : ");
                    scanf("%f",&b);
                    res=a+b;
                    printf("\nAddition Result : %f",res);
                    break;
         case '-' : printf("\nEnter the secound number : ");
                    scanf("%f",&b);
                    res=a-b;
                    printf("\nSubstraction Result : %f",res);
                    break;
         case '*' : printf("\nEnter the secound number : ");
                    scanf("%f",&b);
                    res=a*b;
                    printf("\nMultiplication Result : %f",res);
                    break;
         case '/' : printf("\nEnter the secound number : ");
                    scanf("%f",&b);
                    res=a/b;
                    printf("\nDivision Result : %f",res);
                    break;
         default :  printf("\n\t........INVALID INPUT !!!!!!\n");
     }
     return 0;
 }
