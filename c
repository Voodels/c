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
Pull requests
Issues
Codespaces
Marketplace
Explore
@Voodels
Voodels /
c
Public

Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights

    Settings

c/c
@Voodels
Voodels Update c
Latest commit 80de411 Dec 30, 2022
History
1 contributor
704 lines (500 sloc) 13.2 KB
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
    positive
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
/*#include <stdio.h>positive

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
    scanf("%d",&n);rands to binary 
    
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
int main(){positive
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
    positive
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
        B2F();positive
        
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
    }while(i<=10);//semi condition is required and while is executed at least one time . 
    
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


.........................................................
//Write a program to accept marks of five students in an array and print them to the screen.
//Initialization of an array
/*
#include<stdio.h>
int main(){
    int Mo5[5];
    for (int i =0;i < 5;i++){
        printf("Enter the marks of student %d \n",i+1);
        scanf("%d",&Mo5[i]);
          
    }
    for (int i =0;i < 5;i++){
    printf("the marks of %d student are : %d \n",i+1,Mo5[i]);  
    }
    return 0;
    
}*/
/*#include <stdio.h>
int main(){
    int arr1[5] ={7,9,2,8,1};
    int *pARRY;
    pARRY  = &arr1;
    printf("%u\n",pARRY);
    printf("%u\n",*pARRY);
    printf("%u\n",&arr1);//* = value at address of ; & = Address of ;
    pARRY++;
    printf("%u\n",*pARRY);
    
    
    
    return 0;
    
}*/

/*Multidimensional arrays

An array can be of 2 dimension / 3 dimension / n dimensions.

A 2-dimensional array can be defined as:

int arr [3][2] ={
                 {1,4}
                 {7,9}
                 {11;22}
};

We can access the elements of this array as arr [0] [0], arr [0] [1] & so on...

At arr [0] [0] value would be 1 and at arr [0] [1] value would be 4.
2-D arrays in Memory

 A 2-d array like a 1-d array is stored in contiguous memory blocks like this:

Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

Chapter 7- Practice Set

    Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
    If S[3] is a 1-D array of integers, then *(S+3) refers to the third element:

    True
    False
    Depends

    Write a program to create an array of 10 integers and store a multiplication table of 5 in it.
    Repeat problem 3 for a general input provided by the user using scanf()
    Write a program containing a function that reverses the array passed to it.
    Write a program containing functions that counts the number of positive integers in an array.
    Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.
    Repeat problem 7 for a custom input given by the user.
    Create a three-dimensional array and print the address of its elements in increasing order.


*/
/*#include<stdio.h>
int main(){
    int 2dArr[i][j];
    for(int i=0;i<2,i++){
        for(int j = 0;j<2;j++){
            printf("Enter the value of term %d : ",%2dArr[j]);
            scanf("%d",& 2dArr[j]);
            
        }
        printf("Enter the value of term %d : ",%2dArr[j]);
            scanf("%d",& 2dArr[j]);
        }
        
            
    }
    printf("%d",2dArr);
    return 0;
}*/
#include <stdio.h>
int main(){
    int NoStu = 3;
    int NoSub = 5;
     int marks[3][5];
     for(int i=0;i<NoStu;i++){
         for(int j=0;j<NoSub;j++){
             printf("Enter the marks of student %d in subject %d \n",i+1,j+1);
             scanf("%d",&marks[i][j]);
            }
     }
     for(int i=0;i<NoStu;i++){
         for(int j=0;j<NoSub;j++){
             printf("Enter the marks of student %d in subject %d id %d\n",i+1,j+1,marks[i][j]);
         }
     }
return 0;
}

#include<stdio.h>
int main(){
    
    int arry1[2]={1,3};
    int *ptA = &arry1[0];
    printf("%u\n",*ptA);
    ptA++;
    printf("%u\n",*ptA);
    
    if(ptA==&arry1[1]){
        printf("The program runs");
    }
    
    return 0;
    
}
////////////////////////////////////ARRAYS PRACTICE SET //////////////////////////////////////////////////////
/*
#include <stdio.h>

int main()
{
    int MuAr[10];
    int digit;
    printf("The value whose multiplication table required is :");
    scanf("%d",&digit);
    for(int i = 0;i<10;i++){
        MuAr[i] = digit*(i+1);
    }
    for(int i = 0;i<10;i++){
        printf("the multiplication table of %d is : %dx%d=%d\n",digit,digit,i+1,MuAr[i]);
    }
    return 0;
}
*/

//Qno.6
//Write a program to count the number of positive integers in an array
#include <stdio.h>
int main(){
    int arr[10]={1,3,5,-1,-4,-6,45,-3,-5,4};
    int countposi=0;
    int countnegi=0;
    for(int i =0;i<10;i++)
    {
        
        if(arr[i]>0){Patterns
        countposi++;
            
        }
        else
        { countnegi++ ;
        }
        
    }        
    printf("%d\n",countposi);    
    printf("%d\n",countnegi);
    
    return 0;
}


//Logic for table is :
#include<stdio.h>
int main(){
    int Arr[10];//declaring array ;
    int n;
    
    //declaring n
    printf("The value of n is : ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){//for loop of i going till 10;
        Arr[i]=n*(i+1);//keeping arr[i]=n*(i+1)give s nx1,2,3
    }
    for(int i=0;i<10;i++){
        printf("%dx%d=%d\n",n,i+1,Arr[i]);
    }
    
    return 0;
}

.............

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
imp 
//reversing order of an array
#include <stdio.h>
void reverse(int *arr,int n){////////////////comment out and detail explination here while revision :>
    int temp;
    for(int i=0;i<(5/2);i++){
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
    for(int i=0;i<5;i++){
        printf("The value of %d element i }}%d \n",i+1,arr[i]);
        }
    }
    return 0;
}
Write a program containing functions that counts the number of positive integers in an array.
Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.
Repeat problem 7 for a custom input given by the user.
Create a three-dimensional array and print the address of its elements in increasing order.


)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
MULTIPLICATION TABLE OF 2,7,9;
#include <stdio.h>

int main()
{
    int Marr[3][10];
    //multiplication table of 2
    int n1=2;
    for(int i=0;i<10;i++){
    Marr[0][i]=n1*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%dx%d=%d\n",n1,i+1,Marr[0][i]);
    }printf("\n");
    //multiplication table of 7
        int n2=7;
        
    for(int i=0;i<10;i++){
    Marr[1][i]=n2*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%dx%d=%d\n",n2,i+1,Marr[1][i]);
    }printf("\n");
    //Multiplication table of 9
        int n3=9;
    for(int i=0;i<10;i++){
    Marr[2][i]=n3*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%dx%d=%d\n",n3,i+1,Marr[2][i]);
    }printf("\n");
    return 0;
}
...........//////////////////////////////////
//multiplication table of multiple digits through arrays and functions 

#include <stdio.h>
void printable(int *Marr,int num,int n){
    printf("The multiplication table of %d is:\n",num);
    for(int i=0;i<n;i++){
        Marr[i]=num*(i+1);
    }

    for(int i=0;i<10;i++){
        printf("%dx%d=%d\n",num,i+1,Marr[i]);
    }
    printf("======================================================");
}
int main()
{
    int Marr[3][10];
    //multiplication table of 2
    printable(Marr[0],2,10);
    printable(Marr[1],7,10);
    printable(Marr[2],9,10);
    return 0;
}



//3d arrays and addresses 

#include <stdio.h>

int main()
{
   int arr[2][3][4];
   for(int i =0;i<2;i++){
       for(int j =0;j<2;j++){
           for(int k =0;k<2;k++){
               printf("The the address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
   }
   }
   }
    return 0;
}
0000000000000000000000000000000000000000
/*#include <stdio.h>
#include<string.h>
int main()
{
    char *str = "Vighnesh";
    int a = strlen(str);//----------------------This excudes the value of '\0'
    printf("%d",a);

    return 0;
}*//*
//STRCPY:
#include <stdio.h>
#include<string.h>
int main()
{
    char *str = "Vighnesh";
    char str2[45];
    strcpy(str2,str);//this function id used to copy the content of second string into first function 
    
    printf("Now the str2 is %s ",str2);

    return 0;
}*//*
//StrCat()
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[43] = "Hello";
    char *str2 = "Vighnesh";
    strcat(st1,st2);//----------------------This cancaenates and cuts and paste the value of a str 
    printf("now the st1 is %s ",st1);
    return 0;
}*/
//strcomp 


#include <stdio.h>
#include<string.h>
int main()
{
    char str1[43] = "Hello";
    char *str2 = "Hello";
    int i = strcmp(str1,str2);//----------------------This compares the two strings return 0 if string is simillar
    //''''''''''''''''''''''''''''''''''''''''''''''negative or positive 
    printf("now the val is %d ",i);
    return 0;
}


======================================================================
Strings 
=====================================================================
//write a program to print length of a str
/*#include<stdio.h>
#include<string.h>

int main(){
  char name[300];
  printf("Enter the name : ");
  gets(name);
  printf("The name : ");
  puts(name);
    int i = 0;
  int count = 0;
  //using loop;

  while(name[i]!='\0'){
    //if(name[i]){
     count=count +1;
     i++;
  }
//   int length=strlen(name);
//   printf("%d",length);
    printf("%d",count);
    return 0;
}
*/
//Concatination 
/*
#include<stdio.h>
#include<string.h>

int main(){
  char name[300];
  char name2[300];
  printf("Enter the name : ");
  gets(name);
  printf("The name : ");
  puts(name);
  
  printf("Enter the name2 : ");
  gets(name2);
  printf("The name2 : ");
  puts(name2);
  
  //Cancatination
//  //direct pre defined;
//   strcat(name,name2);
  
//   puts(name);
  int len1,len2;
  len1 = strlen(name);
  len2 = strlen(name2);
  
    int i = 0;
    for(i=0;i<=len2;i++){
        name[len1+i]=name2[i];
    }
    printf("%s\n",name);

    return 0;
} */
//Compare; 
 /*#include<stdio.h>
#include<string.h>

int main(){
  char name[300];
  char name2[300];
  printf("Enter the name : ");
  gets(name);
  printf("The name : ");
  puts(name);
  
  printf("Enter the name2 : ");
  gets(name2);
  printf("The name2 : ");
  puts(name2);
  
  int i = 0,flag = 0;
  for(i = 0;(name[i]!='/0')||(name2[i]!='/0');i++){
      if(name[i]!=name2[i]){
          flag++;
          break;
      }
  
  if(flag == 1){
      printf("not same");
      break;
  }
      else{
          printf("same");
                break;
      }
  }
    return 0;
} */
//predefined functions use : > ;
#include<stdio.h>
#include<string.h>
int main(){
    char s1[30]={"String1"};
    char s2[30]={"string1"};
    int comp = strcmp(s1,s2);
    printf("%d",comp);
    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
    int i;
    int flag;
    char s1[30];
    //char s2[30];
    printf("Enter s1: ");
    gets(s1);
    int l = strlen(s1);
    int temp;
    for(int i = 0;i<l/2;i++){
        temp = s1[i];
        s1[i]=s1[l-i-1];
        s1[l-i-1]=temp;
    }
    puts(s1);
return 0;
}
=========================================================================
File handeling 
=========================================================================
volatile memory non voatile memory
FILE *fp;
fopen("File name","mode")'
fclose(fp)
r r+
w w+
a a+
fopen 
