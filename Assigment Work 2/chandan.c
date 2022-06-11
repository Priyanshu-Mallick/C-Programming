/*
    Program for designing a cacculator.
    Name - Chandan Kumar Nayak
    Roll No. - 06
    SIC No. - 21bcsb17
 */
 #include<stdio.h>
 int main()
 {
     float a,b,res;
     int c;
     printf("\nEnter the first numbers : ");
     scanf("%f",&a);
     printf("\nEnter the operation as following.\n1 - Addition\t2 - Substraction\t3 - Multiplication\t4 - Division\n");
     scanf("%d",&c);
     switch(c)
     {
         case 1 : printf("\nEnter the secound number : ");
                    scanf("%f",&b);
                    res=a+b;
                    printf("\nAddition Result : %f",res);
                    break;
         case 2 : printf("\nEnter the secound number : ");
                    scanf("%f",&b);
                    res=a-b;
                    printf("\nSubstraction Result : %f",res);
                    break;
         case 3 : printf("\nEnter the secound number : ");
                    scanf("%f",&b);
                    res=a*b;
                    printf("\nMultiplication Result : %f",res);
                    break;
         case 4 : printf("\nEnter the secound number : ");
                    scanf("%f",&b);
                    res=a/b;
                    printf("\nDivision Result : %f",res);
                    break;
         default :  printf("\n\t........INVALID INPUT !!!!!!\n");
     }
     return 0;
 }
