//simple calculator
#include<iostream>
#include<conio.h>
using namespace std;

void calculation(){
	float num1,num2;
	char operation;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	cout<<"Enter your choice ( + , - , * , / )";
	cin>>operation;
	
	switch(operation){
		case '+':
			cout<<num1+num2;
			break;
			
		case '-':
			cout<<num1-num2;
			break;
			
		case '*':
			cout<<num1*num2;
			break;
			
		case '/':
			cout<<num1/num2;
			break;
			
		
			
		default:
		    cout<<"Invalid operation, please try again.";	
			
	}
}

void calculation2(){
	float num1,num2,num3;
	char op1,op2;
	cout<<"Enter 1st number then operation then 2nd number then 2nd operation then 3rd number: ";
	cin>>num1>>op1>>num2>>op2>>num3;
	
	if (op1=='+' && op2=='+'){
	cout<<(num1+num2)+num3;
	}
	
	else if (op1=='-' && op2=='-'){
	cout<<(num1-num2)-num3;
    }

    else if (op1=='*' && op2=='*'){
	cout<<(num1*num2)*num3;
    } 
    
    
    else if (op1=='/' && op2=='/'){
	cout<<(num1/num2)/num3;
    } 
    
    else if (op1=='+' && op2=='-'){
	cout<<(num1+num2)-num3;
    } 
	
	else if (op1=='+' && op2=='*'){
	cout<<(num1+num2)*num3;
    } 
    
    else if (op1=='+' && op2=='/'){
	cout<<(num1+num2)/num3;
    } 
    
    else if (op1=='-' && op2=='+'){
	cout<<(num1-num2)+num3;
    } 
    
    else if (op1=='-' && op2=='*'){
	cout<<(num1-num2)*num3;
    } 
    
    else if (op1=='-' && op2=='/'){
	cout<<(num1-num2)/num3;
    } 
    
    else if (op1=='*' && op2=='+'){
	cout<<(num1*num2)+num3;
    } 
    
    else if (op1=='*' && op2=='-'){
	cout<<(num1*num2)-num3;
    } 
    
    else if (op1=='*' && op2=='/'){
	cout<<(num1*num2)/num3;
    } 
    
    else if (op1=='/' && op2=='+'){
	cout<<(num1/num2)+num3;
    } 
    
    else if (op1=='/' && op2=='-'){
	cout<<(num1/num2)-num3;
    } 
    
    else if (op1=='/' && op2=='*'){
	cout<<(num1/num2)*num3;
    } 
    
   
}
int main(){
	cout<<"\t\t\t ************************************** "<<endl;
	cout<<"\t\t\t      SIMPLE ARITHMETIC CALCULATOR      "<<endl;
	cout<<"\t\t\t ************************************** "<<endl;
	
	cout<<"\n\n\n";
	int n;
	cout<<"How many operations do you want to perform: "<<endl;
	cout<<"for 1 operation press 1 "<<endl;
	cout<<"for 2 operations press 2 "<<endl;
	cin>>n;
	
	if (n==1)
	calculation();

	else if (n==2)
	calculation2();

}
