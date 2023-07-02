#include<iostream>
#include<fstream> //for file handling
#include<iomanip>//for floating point values
 
using namespace std;

void mainMenu();

class Management {
public:
		
	Management(){
		mainMenu();
		}
};


class Details {
public:
	static string name,gender;
	int phoneNo;
	int age;
	string add;
	static int cID;
	char arr[100];
		
	void information(){
		cout<<"\nEnter the customer ID: ";
		cin>>cID;
		cout<<"\nEnter the name: ";
		cin>>name;
		cout<<"\nEnter the age: ";
		cin>>age;
		cout<<"\nEnter the Adress: ";
		cin>>add;
		cout<<"\nEnter the Gender: ";
		cin>>gender;
		cout<<"\nYour details are saved with Us.\n"<<endl;
		}
};
int Details::cID;
string Details::name;
string Details::gender;

class Registration {
public:
	static int choice;
	int choice1;
	int back;
	static float charges;
		
	void flights(){
			
		string flight[]={"Dubai","Canada","UK","USA","Australia","Europe"};
		for(int i=0;i<6;i++){
			cout<<(i+1)<<".Flight to "<<flight[i]<<endl;
		}
		 cout<<"Welcome to the Airlines\n";
		 cout<<"\nPress the number of the country of which you want to book the flight: ";
		 cin>>choice;
switch(choice){
	case 1:
		{
			cout<<"\n-------------Welcome to Dubai Emirates-------------"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
            cout<<"Following are the flights: \n";
			
			cout<<"1. DUB - 498 "<<endl;
			cout<<"\t08-01-2023 8:00AM 5hrs Rs. 14000"<<endl;
			cout<<"2. DUB - 658 "<<endl;
			cout<<"\t09-01-2023 4:00AM 4hrs Rs. 10000"<<endl;
			cout<<"3. DUB - 508 "<<endl;
			cout<<"\t11-01-2023 11:00AM 9hrs Rs. 9000"<<endl;
					
		cout<<"\nSelect the flight you want to book: ";
		cin>>choice1;
			if(choice1==1){
					
			charges=14000;
				cout<<"\nYou have successfully Booked the flight DUB - 498"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;			
			}
			else if(choice1==2){
					
				charges=10000;
				cout<<"\nYou have successfully Booked the flight DUB - 658"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else if(choice1==3){
					
				charges=9000;
				cout<<"\nYou have successfully Booked the flight DUB - 508"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else{
				cout<<"Invalid input, Shifting to the previous menu"<<endl;
				flights();
			}
						
				cout<<"\nPress any key to go back to Main menu: "<<endl;
				cin>>back;
				if(back==1){
						mainMenu();
				}
				else{
							mainMenu();
				}
			}
	case 2:
		{
			cout<<"\n-------------Welcome to Canadian Airlines-------------"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
            cout<<"Following are the flights: \n";
			
			cout<<"1. CA - 198 "<<endl;
			cout<<"\t08-01-2023 2:00PM 7hrs Rs. 34000"<<endl;
			cout<<"2. CA - 258 "<<endl;
			cout<<"\t09-01-2023 8:00PM 8hrs Rs. 20000"<<endl;
			cout<<"3. CA - 908 "<<endl;
			cout <<"\t11-01-2023 12:00AM 9hrs Rs. 9900"<<endl;
			
		cout<<"Select the flight you want to book: ";
		cin>>choice1;
			if(choice1==1){
				
			  charges=34000;
			cout<<"\nYou have successfully Booked the flight CA - 198"<<endl;
			cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else if(choice1==2){
				
			   charges=20000;
			cout<<"\nYou have successfully Booked the flight CA - 258"<<endl;
			cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else if(choice1==3){
				
				charges=9900;
			cout<<"\nYou have successfully Booked the flight CA - 908"<<endl;
			cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else{
				cout<<"Invalid input, Shifting to the previous menu"<<endl;
						flights();
			}
						
		cout<<"\nPress any key to go back to Main menu: "<<endl;
		cin>>back;
			if(back==1){
						mainMenu();
				}
		    else{
						mainMenu();
				}
			}
	case 3:
		{
	       cout<<"\n-------------Welcome to UK Airways-------------"<<endl;
           cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
           cout<<"Following are the flights: \n";
	        
			cout<<"1. UK - 798 "<<endl;
			cout<<"\t08-01-2023 6:00AM 9hrs Rs. 44000"<<endl;
					
		cout<<"Select the flight you want to book: ";
		cin>>choice1;
			if(choice1==1){
				
				charges=44000;
				cout<<"\nYou have successfully Booked the flight UK - 798"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else{
						
				cout<<"Invalid input, Shifting to the previous menu"<<endl;
					flights();	
			}
						
				cout<<"\nPress any key to go back to Main menu: "<<endl;
				cin>>back;
				if(back==1){
						mainMenu();
				}
				else{
						mainMenu();
				}
							}
	case 4:
		{
			
			cout<<"\n-------------Welcome to US Airways-------------"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
            cout<<"Following are the flights: \n";
			
			cout<<"1. US - 998 "<<endl;
			cout<<"\t08-01-2023 8:00PM 10hrs Rs. 43500"<<endl;
			cout<<"2. US - 853 "<<endl;
			cout<<"\t09-01-2023 5:00AM 8hrs Rs. 95000"<<endl;
			cout<<"3. US - 08 "<<endl;
			cout<<"\t11-01-2023 3:00PM 4hrs Rs. 9300"<<endl;
					
		cout<<"Select the flight you want to book: ";
		cin>>choice1;
			if(choice1==1){
					
			charges=43500;
				cout<<"\nYou have successfully Booked the flight US - 998"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;			
			}
			else if(choice1==2){
					
				charges=95000;
				cout<<"\nYou have successfully Booked the flight US - 853"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else if(choice1==3){
					
				charges=9300;
				cout<<"\nYou have successfully Booked the flight US - 08"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else{
				cout<<"Invalid input, Shifting to the previous menu"<<endl;
				flights();
			}
						
				cout<<"\nPress any key to go back to Main menu: "<<endl;
				cin>>back;
				if(back==1){
						mainMenu();
				}
				else{
							mainMenu();
				}	
			}
	case 5:
		{
			
			cout<<"\n-------------Welcome to Australian Airlines-------------"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
            cout<<"Following are the flights: \n";
		
			cout<<"1. AS - 358 "<<endl;
			cout<<"\t08-01-2023 4:00AM 7hrs Rs. 89000"<<endl;
			cout<<"2. AS - 658 "<<endl;
			cout<<"\t09-01-2023 9:00AM 2hrs Rs. 15000"<<endl;
		 
					
		cout<<"Select the flight you want to book: ";
		cin>>choice1;
			if(choice1==1){
					
			charges = 89000;
				cout<<"\nYou have successfully Booked the flight AS - 358"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;			
			}
			else if(choice1==2){
					
				charges=15000;
				cout<<"\nYou have successfully Booked the flight AS - 658"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else{
				cout<<"Invalid input, Shifting to the previous menu"<<endl;
				flights();
			}
						
				cout<<"\nPress any key to go back to Main menu: "<<endl;
				cin>>back;
				if(back==1){
						mainMenu();
				}
				else{
							mainMenu();
				}
				}
		case 6:
			{
				cout<<"\n-------------Welcome to European Airlines-------------"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
                cout<<"Following are the flights: \n";
			
			cout<<"1. EU - 658 "<<endl;
			cout<<"\t08-01-2023 9:00AM 8hrs Rs. 64000"<<endl;
			cout<<"2. EU - 762 "<<endl;
			cout<<"\t09-01-2023 11:00AM 6hrs Rs. 10900"<<endl;
			cout<<"3. EU - 508 "<<endl;
			cout<<"\t11-01-2023 2:00PM 5hrs Rs. 78000"<<endl;
					
		cout<<"Select the flight you want to book: ";
		cin>>choice1;
			if(choice1==1){
					
			charges=64000;
				cout<<"\nYou have successfully Booked the flight EU - 658"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;			
			}
			else if(choice1==2){
					
				charges=10900;
				cout<<"\nYou have successfully Booked the flight EU - 762"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else if(choice1==3){
					
				charges=78000;
				cout<<"\nYou have successfully Booked the flight EU - 508"<<endl;
				cout<<"You can go back to menu and take the ticket"<<endl;
			}
			else{
				cout<<"Invalid input, Shifting to the previous menu"<<endl;
				flights();
			}
						
				cout<<"\nPress any key to go back to Main menu: "<<endl;
				cin>>back;
				if(back==1){
						mainMenu();
				}
				else{
							mainMenu();
				}
					}
					default:
						{
							cout<<"Invaild Input, shifting to the main menu !"<<endl;
							mainMenu();
							break;
						}
			}
		}
};

float Registration::charges;
int Registration::choice;

//multiple inheritence
class ticket : public Registration, Details {
	public:
		void bill(){
			
			string destination = "";
			ofstream outf("records.txt");
			{
				
        outf << "\n-----------------------------------Ticket-----------------------------------" << endl;
        outf << "\n|                          WELCOME TO AIRLINES                             |" << endl;
        outf << "\n----------------------------------------------------------------------------" << endl;
				
				outf<<"Customer ID: "<<Details::cID<<endl;
				outf<<"Customer Name: "<<Details::name<<endl;
				outf<<"Customer Gender: "<<Details::gender<<endl;
				outf<<"\tDescrtiption"<<endl<<endl;
				
				if(Registration::choice==1){
					destination="Dubai";
				}
				else if(Registration::choice==2){
					destination="Canada";
				}
				else if(Registration::choice==3){
					destination="UK";
				}
				else if(Registration::choice==4){
					destination="USA";
				}
				else if(Registration::choice==5){
					destination="Australia";
				}
				else if(Registration::choice==6){
					destination="Europe";
				}
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost: \t\t"<<Registration::charges<<endl;
				outf << "\n----------------------------------------------------------------------------" << endl;
				
			}
			outf.close();
		}
		void disbill(){
			{
				ifstream ifs("records.txt");
				{
					if(!ifs){
						cout<<"File error!"<<endl;
					}
				 
					while(!ifs.eof()){
						ifs.getline(arr,100);
						cout<<arr<<endl;
					}
				}
				ifs.close();
			}
		}
};






void mainMenu(){
	int lchoice;
	int schoice;
	int back;
	cout<<"\n\t\t\t*********************** WELCOME TO AIRLINE RESERVATION SYSTEM ***********************";
    cout<<"\n\t\t\t===================================================================================";
    cout<<"\n\t\t\t===================================================================================";
	cout<<"\t\t\t\t\t\t\t"<<endl;
	
	cout<<"\t\tPress 1 to add the customer Detials \t"<<endl;
	cout<<"\t\tPress 2 for flight Registration \t"<<endl;
	cout<<"\t\tPress 3 for ticket and charges \t"<<endl;
	cout<<"\t\tPress 4 to Exit \t"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
   cout<<"\n\t\t\t==================================================================================="<<endl;
	cout<<"Enter the choice: ";
	cin>>lchoice;
	
	Details d;
	Registration r;
	ticket t;
	
	
	switch(lchoice){
		case 1:
		 	{
		 		cout<<"\n------------- Customer Details -------------\n"<<endl;
		 		d.information();
		 		cout<<"Press 1 to go back to main menu ";
		 		cin>>back;
		 		cout<<"\n";
		 		if(back ==1 ){
		 			mainMenu();
				 }
				else{
				 	mainMenu();
				 }
				break;
			 }
		case 2:
			{
			 	cout<<"\n-------------Book a flight using this system-------------\n"<<endl;
			 	r.flights();
			 	break;
			}
		case 3:
				cout<<"-------------Get your ticket-------------\n"<<endl;
				t.bill();
				cout<<"Your ticket is printed, you can collect it \n"<<endl;
				cout<<"press 1 to display your ticket ";
				cin>>back;
				if(back==1){
				 	t.disbill();
				 	cout<<"Press any key to go back to main menu:";
				 	cin>>back;
				 	if(back == 1){
				 		mainMenu();
					 }
				else{
						mainMenu();
			    }
			}
				else{
					 	mainMenu();
				}
			    break;		 
			case 4:
				{
					cout<<"\n\n\t-------------Thank You-------------"<<endl;
					break;
				}
				default:
				{
					cout<<"Invalid input, Please try again!"<<endl;
						mainMenu();
				break;
				 }
			 	
	}
	
	
	
	
}
int main(){
	Management m1;
	
	return 0;
}
