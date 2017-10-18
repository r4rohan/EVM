#include<iostream>   //for input and output
#include<conio.h>   //for getch
#include<windows.h>   //for sleep
#include<time.h>     //for sleep
#include<fstream>   //for file handling
#include<string.h>   //for strings
#include<stdlib.h>   //for random no generation
using namespace std;
class evm
{
	private:
		int age;   //for age
		string id;   //for voter id no
		char gender; //for sex
		char vote;   //for vote symbol
		int total_votes=0;   //for total votes
		int t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0;  //for count of votes of each party
		char c2,c3,c4,c5,c6,c7;  //for others
		int arr[6]={0,0,0,0,0,0};   //initialises zero to prevent from getting garbage value in counting of votes
		int i,j,k,l,m,n;
		int temp=0;
	public:
		
		void getdata()    //collecting data
           {
	a:	cout<<"\nEnter your age ";
		cin>>age;
		if(age<18 || age>126)
	       {
			cout<<"I think you dont know the constitution of India according to which you are not eligible to vote\nPlease try in next elections...";
			goto a;
	       }	
		else
		cout<<"You can vote...\n";
		b:
		cout<<"\nEnter your Voter id card no: ";
		cin>>id;
		if(id.length()!=8)  //for checking whether the id card no is length of 8 or not
		{
			cout<<"Invalid id no\n";
			goto b;
		}
		else
		cout<<"Valid id no\n";
		c:
		cout<<"\nGender\n M for Male\n F for Female\n T for Transgender\n";
		cin>>gender;
		
		switch(gender)
		{
			case 'M':
			case 'm':
				cout<<"\nMale";
				break;
			case 'F':
			case 'f':
				cout<<"\nFemale";
				break;
			case 'T':
			case 't':
				cout<<"\nTransgender";
				break;
			
			default:
				cout<<"\nCongrats you are an alien and you are not eligible to vote.......Try again and identify yourself\n";
				goto c;
			
		} 
		s:
		cout<<"\nPress\n @ for Tumhari Janta Party\n # for Rangrezz National Party\n & for Sabki Party\n * for Tum Party\n % for IT Party\n d for Donald Duck\n";
		cin>>vote;
		
			switch(vote)
				{
				
					case '@':
						cout<<"Your vote is punched for TJP\n";
						t1++;
						arr[0]=t1;
						break;
					case '#':
						cout<<"Your vote is punched for RNP\n";
						t2++;
						arr[1]=t2;
						break;
					case '&':
						cout<<"Your vote is punched for SP\n";
						t3++;
						arr[2]=t3;
						break;
					case '*':
						cout<<"Your vote is punched for TUM\n";
						t4++;
						arr[3]=t4;
						break;
					case '%':
						cout<<"Your vote is punched for IT\n";
						t5++;
						arr[4]=t5;
						break;
					case 'd':
					case 'D':
						cout<<"You vote for Donald Duck\n";
						t6++;
						arr[5]=t6;
						break;
					default:
						cout<<"Dont waste your time, vote properly";
						goto s;
	      
	       }
	
           }
      void unique()  //for generation of random no
	  {
	  	long u;
	  	srand(time(NULL));  //initialize random no
	  	u=rand()%1000+10000;  //generate no b/w 1000 and 10000 
	  	cout<<"\nYour after vote id is:"<<u;
	  }     
           
      void total()
      {
      	cout<<"\nPress Y/y to get the results..... ";
      	cin>>c2;
      		long userId; //for user id of administrator
      		
			d:
			cout<<"\n\t---Login Id---\n ";
			cin>>userId;
			if(userId!=11607651)  
			{
				cout<<"\nDon't try to be smart.....Enter correct id\n";
				goto d;
			}
			else
			cout<<"\nHello Mr. Rohan Singh\n";
			z:
			string pwd="Rohan";  //password
			string pass="";  //empty string
			char c;	
				cout<<"\n\n\t---Password--- \n\n"; 
				p:
				c=getch();
				cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating the string
					goto p;
				}   
					
      			{
      			if(pass==pwd)
      			{
      				cout<<"\nFetching Data";
      				Sleep(500);  //for time lapse
      				cout<<".";
      				Sleep(500);
      				cout<<".";
      				Sleep(500);
      				cout<<".";
      				Sleep(500);
      				cout<<".";
      				cout<<"\nTumhari Janta Party	   : "<<t1<<endl;
					cout<<"Rangrezz National Party    : "<<t2<<endl;
					cout<<"Sabki Party                : "<<t3<<endl;
					cout<<"TUM                        : "<<t4<<endl;
					cout<<"IT                         : "<<t5<<endl;
					cout<<"Donald Duck                : "<<t6<<endl;
				}
				else
				{
				cout<<"\nWrong Password\n";
				goto z;
				}
			}
		}
	
	void winner()
	{
		for(i=0;i<6;++i)
		{
			//cout<<endl;
			//cout<<arr[i];
			for(j=0;j<6-i-1;++j)
			     {
			     	  if(arr[j]<arr[j+1])
			     	  {
			     	     temp=arr[j];
			     	     arr[j]=arr[j+1];
			     	     arr[j+1]=temp;
			       	  }
			        
			   	 } 
		       
		}
		
		cout<<"\n\t\tLoading";
		Sleep(1000);
		cout<<".";
		Sleep(1000);
		cout<<".";
		Sleep(500);
		cout<<".";
		Sleep(500);
		cout<<".";
		cout<<"\n\n\t\tWinner is: ";
	}
	
	void party()   //for announcing winner
	{
		if(arr[0]==t1)
		{
		cout<<"Tumhari Janta Party";
		}
		else if(arr[0]==t2)
		{
			cout<<"Rangrezz National Party";
		}
		else if(arr[0]==t3)
		{
			cout<<"Sabki Party";
		}
		else if(arr[0]==t4)
		{
			cout<<"TUM Party";
		}
			else if(arr[0]==t5)
		{
			cout<<"IT Party";
		}
		else if(arr[0]==t6)
		{
			cout<<"Donald Duck";
		}
	}
	
	

};
int main()
{
	cout<<"***********************************************************************Welcome to Elections of 2014**********************************************\n";
	cout<<"************************************************************************Choose Wisely Live Wisely************************************************\n";
	evm e;
	q:
	e.getdata();
	e.unique();
	cout<<"\nPress Y to vote\n Press anything else to get the results (Note: Only for administrator) ";
	 	char c1;
	 	cin>>c1;
	 	if(c1=='y' || c1=='Y') 
   		{
		    goto q;
		}
		else
		 {
		 	e.total();
		 	goto ww;
		 }
		
	 ww:

 	e.winner();
 	e.party();
 	
	getch();
	return 0;
 
	
}
