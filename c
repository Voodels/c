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



  

