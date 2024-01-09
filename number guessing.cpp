#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<Ctime>
using namespace std;

int main(){
	string name;
	char opt;
    srand(time(0));	

	cout<<"\t\t\t*******************************"<<endl;
	cout<<"\t\t\t     NUMBER GUESSING GAME      "<<endl;
	cout<<"\t\t\t*******************************"<<endl;
	cout<<"\n\n";
	cout<<"Before start the game plz write your name: "<<endl;
	cin>>name;
	cout<<"So " << name <<" get ready to play the game."<<endl;
    system("cls");
    
do{
int num=rand() % 100+1;
int x;
int attempt=1;

	do{
		cout<<name<<" This is your attempt " << attempt <<" Guess the number between (1 to 100) "<<endl;
     	cin>>x;
     	
	
	
	if(x>num){
		cout<<"Try again!!Your number is greater than the correct number"<<endl;
		++attempt;
	}
	
	else if(x<num){
		cout<<"Try again!!Your number is less than the correct number"<<endl;
		++attempt;	
	}
}
	
	while(x!=num);{
		cout<<"CONGRATULATIONS " <<name <<"!! You have won the game by guessing the correct number in attempt " << attempt <<endl;
		cout<<name <<"Do you want to play again (y/n)"<<endl;
		cin>>opt;
		system("cls");
	}
}
	while(opt=='y');
 
    cout<< name <<" THANKS FOR PLAYING!! I hope you have enjoyed it.";
return 0;}

