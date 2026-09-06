#include <iostream>  //header file for input / output
#include <conio.h>                     
#include <string>
using namespace std; // standard library in c++
int main()
{
            int num1; // variable for taking first input from user
            int num2; // variable for taking 2nd input from user
            char op; // op variable of char data type for storing operator
			string name;
			char useagain;            
			cout<<"****************************************"<<endl;
			cout<<"**            ***DIGITAL***           **"<<endl;
			cout<<"***           ***CALCULATOR***       ***"<<endl;
			cout<<"****************************************"<<endl;
			
		
			
					cout<<"\n Please Enter Your Name  : ";
					cin>>name;
					
					cout<<"\n\n Welcome To Digital Calculator "<<name<<" ";	
					
				do
				{
				
			
		            //prompt the user to enter first number
		            
		            cout<<"\n\n PLEASE ENTER FIRST NUMBER : ";
		            cin>>num1;
		            
		            //prompt user to enter second number
		            
		            cout<<"\n\n PLEASE ENTER SECOND NUMBER : ";
		            cin>>num2;
		            
		            // prompt the user to select operator
		            
		            cout<<"\n\n PLEASE SELECT OPERATOR : ->  ( + , - , * , / , % ) :"<<endl;
		            cin>>op;
            switch(op)
            {

                case '+':
					cout<<"\n Hello! Here Is Your Answer ";
                    cout<<"\n SUM OF  "<<num1<< " + " <<num2<<  "  is -> "<<num1 + num2;
                    break;

                case '-':
					cout<<"\n Hello! Here Is Your Answer ";
                    cout<<"\n DIFFERENCE OF " <<num1<< " - "  <<num2<<  "  is -> "<<num1 - num2;
                    break;

                case '*':
					cout<<"\n Hello! Here Is Your Answer ";
                    cout<<"\n multiplication of  " <<num1<<  " * "  <<num2<<  "  is -> "<<num1 * num2;
                    break;

                case '/':
				    cout<<"\n Hello! Here Is Your Answer ";
                    cout<<"\n DIVISION OF  "  <<num1<<  " / "  <<num2<<  "  is -> "<<num1 / num2;
                    break;
                    
                case '%':
                	
                	cout<<"\n Hello! Here Is Your Answer ";
                	cout<<"\n MODULUS OF  "   <<num1<<  " % "   <<num2<<  "  is -> "<<num1 % num2;
                	break;

                default:
					cout<<"\n\n OOPS!!!!!";
                    cout<<"\n SORRY ! INVALID OPTION ! ";
            }
            
            	cout<<"\n\nDo You Want To use Again (Y,N)";
            	cin>>useagain;
            
        }
        
        	while(toupper(useagain) =='Y');
        	
        	cout<<"\n Thank You For Using Our Project  "  <<name<<" ";


                return 0;




}