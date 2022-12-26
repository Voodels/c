//Funtions 

/*#include<stdio.h>

void printHello();//Declaration 
void prGB();

int main(){
    printHello();//Function call 
    printHello();
    printHello();
    prGB();
    prGB();
    prGB();
    prGB();
    
    return 0;
}

void printHello(){//Function definition
    printf("HELLO!!!");
    printf("Good Morning");
}

void prGB(){
    printf("Good Bye");
    
}*/

// print namaste for indian user and bonjour for french user 

#include<stdio.h>
void N2I();
void B2F();
int main(){
    
    printf("Enter your nationality , I for Indian and F for french:");
    char ch;
    scanf("%c",&ch);
    if (ch == 'i'){
        N2I();
    
    } else {
        B2F();
        
    }
    
    return 0;
}

void N2I(){
    printf("Namaste\n");
}

void B2F(){
    printf("Bonjour\n");
}

AaryashDevnae
// return Sum Functions

#include<stdio.h>
int sum(int a,int b);
int main(){
    
    int num1,num2;
    
    printf("the first number is \n");
    scanf("%d",&num1);
    printf("the second number is \n");
    scanf("%d",&num2);
    
    int s = sum(num1,num2);
    
    return  0 ;
    
}
sum(int a,int b){
    return printf("the sum is %d",a+b);
}


//Return Table of N 

#include <stdio.h>

void printTable(int num );

int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    AaryashDevnae
    printTable(n);//actual parameter /Argument
    
    
    return 0;
}
void printTable(int num ){//formal parameter
    for(int i=1;i<=10;i++)
    {
    printf("%d\n",i*num);
    }
}


######
//adding two numbers by using functions 
#include <stdio.h>
int sum(int a ,int b);
int main()
{
    int Num1,Num2;
    printf("the number 1 is ");
    scanf("%d",&Num1);
    
    printf("the number 2 is ");
    scanf("%d",&Num2);
    
    
    char add;
    add = Num1+Num2;
    
    sum(Num1,Num2);
    

    return 0;
}
int sum(int a,int b)
{
    int result ;
    result = a+b;
    return printf("%d\n",result);
}



  /*----------------------------Practice Set _ Functions and Recursons ---------------------------------------*/
  
  // Q.1 . Write a program using functions to find average of three numbers 
#include<stdio.h>
  
float avg(int a, int b ,int c);
  
int main(){
    int x,y,z;
    printf("Enter the value of x\n");
    scanf("%d\n",&x);
    
    printf("Enter the value of y\n");
    scanf("%d\n",&y);
    
    printf("Enter the value of z\n");
    scanf("%d\n",&z);
    
    printf("the value of average if x y z is %f ", avg(x,y,z));
    
    
    //printf("The value of average is %f",avg( float a ));
    
    return 0;
}
float avg(int a, int b , int c){

    float result;
    result =(float) (a+b+c)/3;
    return result;
}
   
   
   
   //---------------------------------Qno 2   convert degree to celcius by using functions ----------------------//
   {


#include 



//Revision of chapter 4------------------------ 




//Multiplication table of a given number
/*#include <stdio.h>

int main()
{
    int x;
    int num;
    
    
   printf("Enter digit : ");
   scanf("%d",&num);
    
    for(x=0;x<=10;++x){
        printf("%dx%d=%d\n",x,num,x*num);
    }
    
    return 0;
}*/

//Q2 Multiplication table of a number in reverse order 

/*#include<stdio.h>
int main(){
    int i,Num;
    printf("Value of Num ");
    scanf("%d",&Num);
    
    for(i = 10 ;i;--i){
        printf("%dx%d=%d\n",i,Num,i*Num);
    }
}*/

//Q5 program to find first n natural numbers 

/*#include<stdio.h>
int main(){
    int X ,sum =0 , n;
    
    printf("The value of n is ");
    scanf("%d",&n);
    
    for(X=0;X<=n;++X){
        sum += X;
        
    }
    printf("The Sum is: %d\n",sum);

    return 0;
    
}*/
//do it with while and do while loop 



//Qfactorial 
/*#include<stdio.h>
int main(){
    
    int i=0,n,Factorial=1;
    
    printf("Enter the value of n");
    scanf("%d\n",&n);
    
    for(i = 1 ;i <= n;i++){
        Factorial*=i;
    }printf("%d",Factorial);
    return 0;
}*/


// Loops revision
//Q.1 write a program to print natural numbers from 10 to 20 using While loops


/*#include <stdio.h>
int main(){
    float num2P;
    num2P  = 10;
    while(num2P<=20){
        printf("%f\n",num2P);
        ++num2P;
    }
    return 0;*/
    

// do while loops 

/*#include <stdio.h>

int main()
{
    int  i = 0;
    
    do{
        printf("The value of i is %d\n",i);
        i++;
    }while(i<=10);//semi condition is required and while is executed at least one time 
    
    return 0 ;
}*/
//Q.2 program to print first natural numbers using do while loops 
/*#include <stdio.h>

int main()
{
    int  i = 0 ,Num;
    printf("The value of Num is :");
    
    scanf("%d",&Num);
    
    
    do{
        printf(" %d\n",i);
        i++;
    }while(i<=Num);//semi condition is required and while is executed at least one time 
    
    return 0 ;
}*/


// FOR loop

//program to print first natural numbers using do while loops 

/*#include <stdio.h>
int main(){
    int i,Till;
    printf("The value of Till is : ");
    scanf("%d",&Till);
    for( i = 0; i <= Till;i++){
        printf("%d\n",i);
    }
    return 0;
}*/


//-------- PRACTICE SET 4 --------
//Q.1
//write a multiplication table fo a given number 

#include<stdio.h>
int main(){
    int x,num;
    printf("the value of whose multiplication table is required is : ");
    scanf("%d\n",num);
    
   // for (x=1;x<=10;++x){
    //    printf("%d",num*x);
    }
    return 0 ;
}


//finding area of rectangle with functions 
#include <stdio.h>

int area(int a,int b);
int main()
{
    int length,breadth;
    printf("The length of rectangle is : ");
    scanf("%d",&length);

    printf("The breadth  of rectangle is : ");
    scanf("%d",&breadth);
    
    printf("The value of area is %d\n ",area(length,breadth));


    return 0;
}
int area(int a,int b){
    int area;
    area = a*b;
    return area;
}

//Celcius to degeree using functions 
#include <stdio.h>

float Temp(float x);

int main()
{
    float Cel;
    
    printf("The value of Temperature in Celcius is : ");
    scanf("%f",&Cel);
    
    printf("The value of Tempreature in farenheit is : %f",Temp(Cel));

    return 0;
}

float Temp(float x){
    
    float conv;
    
    conv = x * 1.8 + 32;
    return conv;
}

  //---------------------------------Qno 2   convert degree to celcius by using functions ----------------------//
   {
#include <stdio.h>

float Temp(float x);

int main()
{
    float Cel;
    
    printf("The value of Temperature in Celcius is : ");
    scanf("%f",&Cel);
    
    printf("The value of Tempreature in farenheit is : %f",Temp(Cel));

    return 0;
}

float Temp(float x){
    
    float conv;
    
    conv = x * 1.8 + 32;
    return conv;
}




\\\\\Array\\\\\
#include<stdio.h>

int main ()
{
    int marks[3];
    printf("Enter the marks of Maths" );
    scanf("%d",&marks[0]);
    
    printf("Enter the marks of Phy" );
    scanf("%d",&marks[1]);
    
    printf("Enter the marks of Chem" );
    scanf("%d",&marks[2]);
    
    
    printf("Maths = %d,Phy = %d,Chem = %d",marks[0],marks[1],marks[2]);
    return 0;
}


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;#PRACTICE SET POINTERS#;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//
1. write a program to print the address of a vaiable.Use this address to get the value of this variable

#include<stdio.h>
int main(){
    int Var1 = 37;
    int*Poi = &Var1;
    
    printf("The address of Var1 is %u\n ",&Var1);
    printf("The address of Var1 is %u\n ",Poi);
    printf("The value at address of our pointer is : %u\n",*Poi);
    printf("The address of our pointer is %u \n ",&Poi);
    printf("%u\n",*(*(&Poi)));
    return 0;
}

2.////////
//SWAPING VALUES BY PASSING THE VALUES 
#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int a = 37;
    int b = 73;
    //VALUES BEFORE FUNCTION CALL
    printf("The value of a before Function call is : %d\n",a);
    printf("The value of b before Function call is : %d\n",b);
    //FUNCTION CALL TO SWITCH VALUES 
    swap(&a,&b);
    //VALUES AFTER FUNCTION CALL
    printf("The value of a before Function call is : %d\n",a);
    printf("The value of b before Function call is : %d\n",b);
    
    return 0;

}
void swap(int *x,int *y){
    int temp ;
    
    temp = *x;
    *x = *y;
    *y = temp;AaryashDevnae
}






*imp === 
//Write a program using the functions which calculate  the sum 
//and average of two numbers .Use pointers and print the values in MaIN();

#include<stdio.h>

void SumandAVG(int a,int b,int *sum,float *avg){
    
   *sum = a+b;
   *avg =(float) *sum/2;
    
}
int main(){
    int x= 3;
    int y= 7;
    float avg;
    int sum;
    SumandAVG(x,y,&sum,&avg);
    //
    printf("The value of sum is : %d\n",sum);
    printf("The value of avg is : %f\n",avg);
    return 0;
}
;''''''''''''''''''''''''''''''''''''''''''''
////Printing the value of a variable by pointer to pointer 

#include <stdio.h>
int main(){
    int i = 13;
    int *po1;
    po1 = &i;
    int **po2;
    po2 = &po1;
    
    printf("The value of i is :%u\n: ",*(*(*(&po2))));
    printf("The value of i is :%u\n: ",(**po2));
    
    return 0;
}
............................................


//USING FOR LOOPS IN ARRAYS 


#include <stdio.h>

int main()
{
    int marks[5],i;
    
    for(i = 0;i<5;i++){//i < 5
        printf("Enter the value of marks for student %d :",i+1);// i+1
        scanf("%d",&marks[i]);
    }
    for(i = 0;i<5;i++)
    {
        printf("The marks of student %d is %d \n",i+1,marks[i]);
    }

    return 0;
}



//Pointer Arithematics 
#include<stdio.h>
int main(){
    
    int i = 12;
    int *ptr = &i;
    
    printf("The value of ptr is : %u\n ", ptr);
    //ptr++;AaryashDevnae
    //ptr++;
    //ptr-=10;
    ptr = ptr+1;//Even thogh +1 is written increment is of 8 becuse of the size of ptr
    //For Char is will  increment with 1 coz of its size;
    printf("The value of ptr is : %u\n ", ptr);
    
    return 0;
}


//arrays with pointers 

#include <stdio.h>

int
main ()
{
  int marks[4];
  int *ptr;
  ptr = &marks[0];
  for (int i = 0, i = 4, i++)
    {
      printf (" Enter the value of marks for student %d: \n ", i + 1);
      scanf("%d",ptr);
      ptr++;
    }
   for (int i = 0, i = 4, i++){
        printf("The value of marks for student %d is %d \n",i+1,marks[i]);
    } 
    
  return 0;
}

