#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;

//FUNCTION DECLARATION

void toss(string , string);
void first_team(string);
void second_team(string);
void rules();


//MAIN FUNCTION*************MAIN FUNCTION***************MAIN FUNCTION**********************MAIN FUNCTION*************************

int main()
{
	string team_a,team_b;
	cout<<"1st Player enter his team name : ";
	getline(cin,team_a);
	cout<<"2nd Player enter his team name : ";
    getline(cin,team_b);
	toss(team_a,team_b);
}


//TOSS STARTS*****************TOSS STARTS************TOSS STARTS*****************TOSS STARTS*****************TOSS STARTS**************TOSS STARTS


void toss(string team_a,string team_b)
{
	system("color e1");
	srand(time(NULL));
    int	a_b=rand()%2;
	if(a_b==0)
	{
		int a;
		cout<<team_a<<" call for toss"<<endl;
		int head_tail=rand()%2;
		cout<<team_a<<" choose 1 or 0 : ";
		cin>>a;
		if(head_tail==a)
		{
			cout<<"***************";
			cout<<team_a<<" won the toss and Elected to bat first"<<"*****************"<<endl;
			rules();
			cout<<endl<<"============================================================================="<<endl;
			first_team(team_a);
			cout<<endl<<"============================================================================="<<endl;
			second_team(team_b);
			cout<<endl<<"============================================================================="<<endl;
		}
		else
		{
			cout<<"***************";
			cout<<team_a<<" lose the toss and "<<team_b<<" Elected to bat first"<<"*****************"<<endl;
			rules();
			cout<<endl<<"============================================================================="<<endl;
			second_team(team_b);
			cout<<endl<<"============================================================================="<<endl;
			first_team(team_a);
			cout<<endl<<"============================================================================="<<endl;
		}
	}
    else if(a_b==1)
	{
		int a;
		cout<<team_b<<" call for toss"<<endl;
		int head_tail=rand()%2;
		cout<<team_b<<" choose 1 or 0 : ";
		cin>>a;
		if(head_tail==a)
		{
			cout<<"***************";
			cout<<team_b<<" won the toss and Elected to bat first"<<"*****************"<<endl;
			rules();
			cout<<endl<<"============================================================================="<<endl;
			second_team(team_b);
			cout<<endl<<"============================================================================="<<endl;
			first_team(team_a);
			cout<<endl<<"============================================================================="<<endl;
		}
		else
		{
			cout<<"***************";
			cout<<team_b<<" lose the toss and " <<team_a<< " Elected to bat first"<<"*****************";
			rules();
			cout<<endl<<"============================================================================="<<endl;
			first_team(team_a);
			cout<<endl<<"============================================================================="<<endl;
			second_team(team_b);
			cout<<endl<<"============================================================================="<<endl;
		}
	}
}


//RULES STARTS****************RULES STARTS**************RULES STARTS****************RULES STARTS*****************RULES STARTS******RULES STARTS


void rules()
{
	cout<<endl<<"############################################################################"<<endl;
	cout<<"RULES :";
	cout<<setw(8)<<"If you press 1 then batsman miss/dot the ball"<<endl;
	cout<<setw(8)<<"If you press 2 then batsman takes run"<<endl;
	cout<<setw(8)<<"If you press 3 then batsman hit the ball"<<endl;
	cout<<endl<<"############################################################################"<<endl;
}


//FIRST TEAM BATTING STARTS*********************FIRST TEAM BATTING STARTS**********FIRST TEAM BATTING STARTS********FIRST TEAM BATTING STARTS


void first_team(string team_a)
{
	int x,m,total_score=0;
	int d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0;
	string players[11];
	for(int i=0;i<11;i++)
	{
        cout<<"========================================="<<endl; 
		cout<<team_a<<" enter his "<<i+1<<" Player Name : ";
		cin>>players[i];
		cout<<endl<<endl;
		cout<<players[i]<<" batting starts"<<endl;
		for(int z=1;z>=1;z++)
		{
		    cout<<endl<<"1.\n2.\n3.\n\nPress button 1/2/3 : ";
		    cin>>x;
		    switch(x)
		    {
			    case 1:
				    m=rand()%2;
				    if(m==1)
				    {
					    cout<<players[i]<<" Stopped the ball beautifully"<<endl;
				    }
				    else if(m==0)
				    {
					    cout<<players[i]<<" out"<<endl;
				    }
					break;
			    case  2:	
			        m=rand()%4;
				    if(m==0)
				    {
					    cout<<players[i]<<" out"<<endl;
				    }
				    if(m==1)
				    {
					    cout<<players[i]<<" takes Single"<<endl;
					    d++;
				    }
				    else if(m==2)
				    {
					    cout<<players[i]<<" takes Double"<<endl;
					    e+=2;
				    }
				    else if(m==3)
				    {
					    cout<<players[i]<<" takes Triple"<<endl;
					    f+=3;
				    }
				    break;
			    case 3:
				    m=rand()%7;
				    if(m==0)
				    {
					    cout<<players[i]<<" out"<<endl;
				    }
				    else if(m==1)
				    {
					    cout<<players[i]<<" miss hit and takes Single"<<endl;
					    g+=1;
				    }
				    else if(m==2)
				    {
					    cout<<players[i]<<" miss hit and takes Double"<<endl;
					    h+=2;
				    }
				    else if(m==3)
				    {
					    cout<<players[i]<<" miss hit and takes Triple"<<endl;
					    i+=3;
				    }
				    else if(m==4)
				    {
					    cout<<players[i]<<" nice hit four runs"<<endl;
					    j+=4;
				    }
				    else if(m==5)
				    {
					    cout<<players[i]<<" takes 5 runs because of the over throw , poor fielding by the fielder"<<endl;
					    k+=5;
				    }
				    else if(m==6)
				    {
					    cout<<players[i]<<" Marvellous hit great timing by the "<<players[i]<<" and its a six"<<endl;
					    l+=6;
				    }
					break;
				    
		    }
		    if(m==0)
			{
		    	break;
			}
	    }
		
	}
	total_score=d+e+f+g+h+i+j+k+l;
	cout<<"Total Runs from "<<team_a<<" is : "<<total_score;
}



// SECOND TEAM BATTING STARTS **************SECOND TEAM BATTING STARTS*******************SECOND TEAM BATTING STARTS********SECOND TEAM BATTING STARTS


void second_team(string team_b)
{
	int x,m,total_score=0;
	int d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0;
	string players[11];
	for(int i=0;i<11;i++)
	{
        cout<<"========================================="<<endl; 
		cout<<team_b<<" enter his "<<i+1<<" Player Name : ";
		cin>>players[i];
		cout<<endl<<endl;
		cout<<players[i]<<" batting starts"<<endl;
		for(int z=1;z>=1;z++)
		{
		    cout<<endl<<"1.\n2.\n3.\n\nPress button 1/2/3 : ";
		    cin>>x;
		    switch(x)
		    {
			    case 1:
				    m=rand()%2;
				    if(m==1)
				    {
					    cout<<players[i]<<" Stopped the ball beautifully"<<endl;
				    }
				    else if(m==0)
				    {
					    cout<<players[i]<<" out"<<endl;
				    }
					break;
			    case  2:	
			        m=rand()%4;
				    if(m==0)
				    {
					    cout<<players[i]<<" out"<<endl;
				    }
				    if(m==1)
				    {
					    cout<<players[i]<<" takes Single"<<endl;
					    d++;
				    }
				    else if(m==2)
				    {
					    cout<<players[i]<<" takes Double"<<endl;
					    e+=2;
				    }
				    else if(m==3)
				    {
					    cout<<players[i]<<" takes Triple"<<endl;
					    f+=3;
				    }
				    break;
			    case 3:
				    m=rand()%7;
				    if(m==0)
				    {
					    cout<<players[i]<<" out"<<endl;
				    }
				    else if(m==1)
				    {
					    cout<<players[i]<<" miss hit and takes Single"<<endl;
					    g++;
				    }
				    else if(m==2)
				    {
					    cout<<players[i]<<" miss hit and takes Double"<<endl;
					    h+=2;
				    }
				    else if(m==3)
				    {
					    cout<<players[i]<<" miss hit and takes Triple"<<endl;
					    i+=3;
				    }
				    else if(m==4)
				    {
					    cout<<players[i]<<" nice hit four runs"<<endl;
					    j+=4;
				    }
				    else if(m==5)
				    {
					    cout<<players[i]<<" takes 5 runs because of the over throw , poor fielding by the fielder"<<endl;
					    k+=5;
				    }
				    else if(m==6)
				    {
					    cout<<players[i]<<" Marvellous hit great timing by the "<<players[i]<<" and its a six"<<endl;
					    l+=6;
				    }
					break;
				    
		    }
		    if(m==0)
			{
		    	break;
			}
	    }
		
	}
	total_score=d+e+f+g+h+i+j+k+l;
	cout<<"Total Runs from "<<team_b<<" is : "<<total_score;
}
