//Tic-Tac-Toe Game
#include<iostream>
#include<windows.h>
using namespace std;


char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int row,col;
bool draw=false;

	void board(){
		system("cls");
	cout<<"\t\t\t******************************"<<endl;
	cout<<"\t\t\t      TIC-TAC-TOE GAME        "<<endl;
	cout<<"\t\t\t******************************"<<endl;
	cout<<endl;
	
	cout<<"player 1, you have to draw X "<<endl;
	cout<<"player 2, you have to draw Y "<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"\t\t      |     |     "<<endl;
	cout<<"\t\t   "  <<arr[0][0]<< "  |  "<< arr[0][1] <<"  |  "<< arr[0][2] <<endl;
	cout<<"\t\t _____|_____|_____"<<endl;
	cout<<"\t\t      |     |     "<<endl;
	cout<<"\t\t   "  <<arr[1][0]<< "  |  "<< arr[1][1] <<"  |  "<< arr[1][2] <<endl;
	cout<<"\t\t _____|_____|_____"<<endl;
	cout<<"\t\t      |     |     "<<endl;
    cout<<"\t\t   "  <<arr[2][0]<< "  |  "<< arr[2][1] <<"  |  "<< arr[2][2] <<endl;
	cout<<"\t\t      |     |     "<<endl;
}

void player_turn(){
	int choice;
	
	if(turn=='X')
	cout<<"\n\n\tPlayer 1 turn (X): "<<endl;
	if(turn=='O')
	cout<<"\n\n\tPlayer 2 turn (O): "<<endl;
	
	cin>>choice;
	
	
	switch(choice){
		case 1:
			row=0; col=0;
			break;
		case 2:
		    row=0; col=1;
			break;
		case 3:
		    row=0; col=2;
			break;	
		case 4:
			row=1; col=0;
			break;
		case 5:
			row=1; col=1;
			break;	
		case 6:
		    row=1; col=2;
			break;
		case 7:
			row=2; col=0;
			break;
		case 8:
		    row=2; col=1;
			break;
		case 9:
		    row=2; col=2;
			break;	
		
		default:
		    cout<<"Invalid choice"<<endl;		
			break;		
    }
	if(turn == 'X' && arr[row][col]!='X' && arr[row][col]!='O')
	{
		arr[row][col]='X';
		turn ='O';
	}
	else if(turn =='O' && arr[row][col]!='X' && arr[row][col]!='O')
	{
		arr[row][col]='O';
		turn='X';
	}
   else
    {
	cout<<"BOX already filled!\n Please try again!! \n\n";
	player_turn();
	}	
}
	
bool gameover(){

		if(arr[0][0]==arr[0][1] && arr[0][0]==arr[0][2] || arr[1][0]==arr[1][1] && arr[1][0]==arr[1][2] || 
		   arr[2][0]==arr[2][1] && arr[2][0]==arr[2][2] || arr[0][0]==arr[1][0] && arr[0][0]==arr[2][0] ||
		   arr[0][1]==arr[1][1] && arr[0][1]==arr[2][1] || arr[0][2]==arr[1][2] && arr[0][2]==arr[2][2] ||
		   arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2] || arr[0][2]==arr[1][1] && arr[0][2]==arr[2][0])
		{
		return false;
		}

	    
	    for(int i=0;i<3;i++)
	    for(int j=0;j<3;j++)
	    if(arr[i][j] != 'X' && arr[i][j] != 'O')
	    return true;
	    
	 draw=true;
	 return false;   
	
	
}	


int main(){
	
	while(gameover()){
	board();
	player_turn();
	board();
	gameover();
}

if(turn == 'O' && draw==false)
cout<<"Congratulations!! Player1 [X] wins "<<endl;

else if(turn == 'X' && draw==false)
cout<<"Congratulations!! Player2 [O] wins "<<endl;

else
cout<<"GAME DRAW !!"<<endl;
}
