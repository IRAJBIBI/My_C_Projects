#include <iostream>
#include <string.h>
#include <fstream>
#include <cctype>
using namespace std;
void GAMESANDSPORTS(int &SCORE)
{
	
			char ANSWER;
			//question 1
			cout<<"----ENJOY YOUR GAMES AND SPORTS QUIZ----\n\n";
			cout<<"Q1: IN WHICH YEAR WAS THE FIRST-EVER ICC CRICKET WORLD CUP PLAYED?\n";
			cout<<"A.  1975\nB.  1983\nC.  1992\nYOUR ANSWER\n";
			cin>>ANSWER;
			if(toupper(ANSWER)=='A')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'A'!\n\n";
			}
			//question 2
			
			cout<<"Q2: WHICH COUNTRY HAS WON THE MOST FIFA WORLD CUP TITLES?\n";
			cout<<"A.  ITALY\nB.  INDONESIA\nC.  BRAZIL\nYOUR ANSWER\n";
			cin>>ANSWER;
			if(toupper(ANSWER)=='C')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'C'!\n\n";
				
			}
			
			//question 3
				
			cout<<"Q3: OLYMPIC GAMES ARE HELD AFTER AN INTERVAL OF HOW MANY YEARS?\n";
			cout<<"A.  4 YEARS\nB.  6 YEARS\nC.  3 YEARS\nYOUR ANSWER\n";
			cin>>ANSWER;
			if(toupper(ANSWER)=='A')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'A'!\n\n";
				
			}
			//question 4
				
			cout<<"Q4: WHAT IS THE NATIONAL SPORT OF PAKISTAN?\n";
			cout<<"A.  CRICKET\nB.  HOCKEY\nC.  FOOTBALL\nYOUR ANSWER\n";
			cin>>ANSWER;
			if(toupper(ANSWER)=='B')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'B'!\n\n";
				
			}
			//question 5
				
			cout<<"Q5: IN WHICH YEAR DID PAKISTAN WIN ITS FIRST-EVER ICC CRICKET WORLD CUP?\n";
			cout<<"A.  1885\nB.  1994\nC.  1992\nYOUR ANSWER\n";
			cin>>ANSWER;
			if(toupper(ANSWER)=='C')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'C'!\n\n";
				
			}
			//question 6
				
			cout<<"Q6: WHAT DOES THE ICC STANDS FOR IN CRICKET?\n\n";
			cout<<"A.  INTERNATIONAL CRICKET CLUB\nB.  INTERNATIONAL CRICKET COUNCIL\nC.  INTERCONTINENTAL CRICKET CUP\nYOUR ANSWER\n";
			cin>>ANSWER;
			if(toupper(ANSWER)=='B')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'B'!\n\n";
				
			}
			
			
}
void HISTORYOFPAKISTAN(int &SCORE)
{
	
		char ANSWER;
					
			cout<<"------ENJOY YOUR HISTORY OF PAKISTAN QUIZ------\n\n";
			//question 1
			cout<<"Q1: WHO IS THE NATIONAL POET OF PAKISTAN?\n";
			cout<<"A.  SIR SYED AHMED KHAN\nB.  ALLAMA MUHAMMAD IQBAL\nC.  FAIZ AHMED FAIZ\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='B')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'B'!\n\n";
				
			}
			//question 2
			cout<<"Q2:  WHICH CITY WAS THE FIRST OFFICIAL CAPITAL OF PAKISTAN AFTER INDEPENDENCE?\n";
			cout<<"A.  KARACHI\nB.  PESHAWAR\nC.  LAHORE\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='A')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'A'\n\n!";
				
			}
			//question 3
			cout<<"Q3: WHO SERVED AS THE FIRST GOVERNOR GENERAL OF PAKISTAN?\n";
			cout<<"A.  LIAQUAT ALI KHAN\nB.  QUAID-E-AZAM MUHAMMAD ALI JINNAH\nC.  SIKANDER MIRZA\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='B')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'B'!\n\n";
				
			}
			//question 4
			cout<<"Q4: IN WHICH YEAR WAS THE FAMOUS LAHORE RESOLUTION PASSED?\n";
			cout<<"A.  1971\nB.  1947\nC.  1940\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='C')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'C'!\n\n";
				
			}
			//question 5
			cout<<"Q5: WHO WAS THE FIRST FEMALE PRIME MINISTER OF PAKISTAN?\n";
			cout<<"A.  FATIMA JINNAH\nB.  BENAZIR BHUTTO\nC.  BEGAM RANA LIAQAUAT ALI\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='B')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'B'!\n\n";
				
			}
			//question 6
			cout<<"Q6: IN WHICH YEAR DID PAKISTAN OFFICIALLY BECOME NUCLEAR POWER?\n";
			cout<<"A. 1991\nB. 1996\nC. 1998\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='C')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'C'!\n\n";
				
			}

}

void HISTORYOFISLAM(int &SCORE)
{
	
	
		
			char ANSWER;
			
			//question 1
			cout<<"---------ENJOY YOUR HISTORY OF ISLAM QUIZ--------\n\n";
			cout<<"Q1: IN WHICH CITY WAS PROPHET MUHAMMAD(S.A.W)BORN?\n";
			cout<<"A.  MAKKAH\nB.  MADINAH\nC.  TAIF\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='A')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'A'!\n\n";
				
			}
			
			//question 2
			cout<<"Q2: WHERE DID THE FIRST REVELATION COME TO PROPHET MUHAMMAD(S.A.W)?\n";
			cout<<"A.  MASJID-AL.HARAM\nB. MASJID-AN-NABAWI\nC. CAVE OF HIRA\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='C')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'C'!\n\n";
				
			}
			//question 3
			
			cout<<"Q3: WHAT IS THE HOLY BOOK OF ISLAM?\n";
			cout<<"A. TORAH\nB. QURAN\nC. ZABUR\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='B')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'B'!\n\n";
				
			}
			
			//question 4
			
			cout<<"Q4: HOW MANY PILLARS OF ISLAM ARE THERE?\n";
			cout<<"A.  4\nB.  7\nC.  5\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='C')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'C'!\n\n";
				
			}
			
			//question 5
			
			cout<<"Q5: WHICH MONTH IS THE MONTH OF FASTING FOR MUSLIMS?\n";
			cout<<"A. RAJAB\nB. RAMADAN\nC. SHAWAL\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='B')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'B'!\n\n";
				
			}
			
			//question 6
			
			cout<<"Q6: WHERE IS THE KAABA LOCATED?\n";
			cout<<"A.  MAKKAH\nB.  MADINAH\nC.  JERUSALEM\nYOUR ANSWER\n";
			cin>>ANSWER;
	    	if(toupper(ANSWER)=='A')
			{
				
				SCORE++;
				cout<<"-------CONGRATULATION! YOUR ANSWER IS CORRECT-------\n\n";
			}
			else
			{
				
				cout<<"SORRY YOUR ANSWER IS WRONG! THE CORRECT ANSWER WAS OPTION 'A'!\n\n";
				
			}
										
}

	
			


int main()
{
	
		int GKchoice;
		int SCORE;
		SCORE = 0;
		string NAME;
		char PLAYAGAIN;
		
				cout<<"------PLEASE ENTER YOUR FULL NAME-------\n\n";
				getline(cin,NAME);
				
				cout<<"\n------WELCOME TO QUIZ GAME-------"<<NAME<< " !\n";
				system("pause");
				
				
				
	do	
	{
		
		SCORE = 0;
		system("cls"); //clear screen
		
		cout<<"-------WELCOME TO GENERAL KNOWLEDGE MULTI-QUIZ GAME-------\n\n";
		cout<<"-------PLEASE ENTER YOUR FAVOURITE TOPIC-------\n\n";
		cout<<"1. GAMES AND SPORTS\n\n";
		cout<<"2. HISTORY OF PAKISTAN\n\n";
		cout<<"3. HISTORY OF ISLAM\n\n";
		cout<<"PLEASE SELECT YOUR FAVOURITE TOPIC: ";
		cin>>GKchoice;
		
	
		
		switch(GKchoice)
		{
			case 1:
				
				cout<<"PLAY GAMES AND SPORTS QUIZ";
				GAMESANDSPORTS(SCORE);
				break;
			case 2:
				
				cout<<"PLAY HISTORY OF PAKISTAN QUIZ";
				HISTORYOFPAKISTAN(SCORE);
				break;
			case 3:
				
				cout<<"PLAY HISTORY OF ISLAM QUIZ";
				HISTORYOFISLAM(SCORE);
				break;
			default:
				
				cout<<"SORRY INVALID OPTION , GAMES END ";
		}
		cout<<"----------QUIZ  COMPLETED----------\n\n";
		cout<<"----------" <<NAME<< "----------YOUR FINAL SCORE IS---------\n\n"<<"---------------"<<SCORE<<"---------------\n\n";
		cout<<"-----DO YOU WANT TO PLAY AGAIN-----?(Y/N):\n\n";
		cin>>PLAYAGAIN;
	}
	
	while(toupper(PLAYAGAIN)=='Y');
	{
		
		cout<<"\n ***THANKS FOR PLAYING***"<<NAME<<"  !"<<" GOOD BYE !\n";
		
	}
		
				return 0;
		
	
		
}