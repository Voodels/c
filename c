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
   
  

