#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
		
            string name;
            char Ans;
            int scorehappy = 0 , scoresad = 0;
            	//instruction for user
            	
			cout<<"\nHello! This project was created by Iraj Arshad.";
            cout<<"\n\nThese instructions are for all new users. Please read them carefully before starting.";
            cout<<"\n\nAfter reading these instructions, press Enter to start the game.";
            cout<<"\n\nFirst, enter your name. You can enter either your first name or your full name (including spaces).";
            cout<<"\n\nYou can use both uppercase and lowercase letters when answering the questions.";
            cout<<"\n\nAfter every input, make sure to press the Enter key. This is mandatory.";
            cout<<"\n\nWhen you finish the program, press Enter one last time to close it.";
            cout<<"\n\nI hope you enjoy this project.";
            cout<<"\n\nHave a great day!";
				
				//system pause
				system ("pause");
				
				//system clear
				system ("cls");
				
				//taking input
                cout<<"HELLO! WHAT'S YOUR NAME ? : ";
                getline(cin,name);
                cout<<"\n That's Great " <<name<< "  welcome! I hope you are feeling well!!";
                cout<<"\n\nWelcome To Mood Guessing Game";
                system("pause");
                cout<<"\n\n Let's get started! Today I Am Trying To Guess Your Mood ??";
                cout<<"\n\n Your First Question is Here : ";
                cout<<"\n\nQ:1 How Many Hours Did You Sleep Last Night ?\n";
                cout<<"A : 5 hours\nB : 6 hours\nC: More Than 7 hours\n";
                cin>>Ans;
                
                //checking answers
                if(Ans == 'C' || Ans == 'c')
                {
                        scorehappy = scorehappy + 1;
                }
                else
                {
                        scoresad = scoresad + 1;
                }
                
                cout<<"\n\nQ:2 How is your energy level right now? \n";
                cout<<"A : High\nB : Medium\nC : Low\n";
                cin>>Ans;
                if(Ans == 'A' || Ans == 'a')
                {
                        scorehappy = scorehappy + 1;
                }
                else
                {
                        scoresad = scoresad + 1;
                }
                cout<<"\n\nQ:3 Do you feel like talking to friends or family today? ??\n";
                cout<<"A : Yes\nB : No\n";
                cin>>Ans;
                if(Ans == 'A' || Ans == 'a')
                {
                        scorehappy = scorehappy + 1;
                }
                else
                {
                        scoresad = scoresad + 1;
                }

                cout<<"\n\nQ:4 How Was Your Day Today?\n";
                cout<<"A : Great\nB : Bad\n";
                cin>>Ans;
                 if(Ans == 'A' || Ans == 'a')
                {
                        scorehappy = scorehappy + 1;
                }
                else
                {
                        scoresad = scoresad + 1;
                }
                
                //grading scores

                if(scorehappy > scoresad)
                {

                        cout<<"\nAnalyzing..........";
                        cout<<"\n\nI Guess You Are Happy Today ";
                        cout<<"\n\n That's Too Great! Keep Smilling!";

                }
                else if(scorehappy == scoresad)
                {
                        cout<<"\nAnalyzing..........";
                        cout<<"\n\nYour Mood Seems Neutral Today";
                        cout<<"\n\n Take some time for yourself and do something you enjoy!";

                }
                else
                {

                         cout<<"\nAnalyzing..........";
                         cout<<"\n\nI Guess You Are Sad Today";
                         cout<<"\n\n Don't Worry Everything Will Be Fine";
                }


                    cout<<"\n\n Thank You So Much "<<name;
                    cout<<"\n\n Have A Nice Day ";

                
                    return 0;
                
                
}
