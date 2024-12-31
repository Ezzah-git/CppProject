#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu(); //using globally

class Management{
	public:
		Management(){
			mainMenu();
		}
		
};
	// now for each choice now we are making classes for each
	class Details{
		public:
			static string name, gender;
			int age;
			string add;
			static int cID;
			char arr[100];
			
			void information(){
			cout<<"\n Enter customer ID: ";
			cin>>cID;
			cin.ignore();
			cout<<"\n Enter your name: ";
			getline(cin,name);
			cout<<"\n Enter your age: ";
			cin>>age;
			cin.ignore();
			cout<<"\n Gender: ";
			getline(cin,gender);
			cout<<"\nYour details are secured.";
		}
			};
	
int Details::cID;
string Details::name;
string Details::gender;

class registeration{
public:
	static int choice;
	int choice1;
	int back;
	static float charges;
	//flight function
	void flights(){
		string flightN[]={"Dubai","Canada","UK","USA","Australia"};
		for(int i=0; i<5; i++){
			cout<<(1+i)<<".Flight to "<<flightN[i]<<endl;
		}
		cout<<"\n *******Welcome to the Cloud Airlines********\n"<<endl;
		cout<<"\nPress the number of the country of which you want to book the flight: ";
		cin>>choice;
		
	// now making cases for choice of country	
switch(choice){
	case 1:
		{
			cout<<"____________________________Welcome to Dubai Emirates_______________________\n"<<endl;
	
			cout<<"\nFollowing are the flight details: "<<endl;
			
			cout<<"\n1: flight ID: DUB - 498 | Business Class"<<endl;
			cout<<" Date and Time: 04-12-2024 at 8:00 A.M | Flight duration : 2 hours, 25 minutes. "<<endl;
			cout<<"Ticket price:  PKR 60,570"<<endl;
			
			cout<<"\n\n2: flight ID: DUB - 651 | Premium Economy"<<endl;
			cout<<" Date and Time: 04-12-2024 at 11:00 A.M | Flight duration : 3 hours, 25 minutes. "<<endl;
			cout<<"Ticket price:  PKR 55,550"<<endl;
			
			cout<<"\n\n3: flight ID: DUB - 892 | Business Class"<<endl;
			cout<<" Date and Time: 04-12-2024 at 2:00 p.M | Flight duration : 5 hours, 25 minutes. "<<endl;
			cout<<"Ticket price:  PKR 50,570"<<endl;
		
		cout<<"\n Select the flight you want to book: ";
		cin>>choice1;
		if(choice1==1){
			charges=60570;
			cout<<"\n----------You have successfully booked the flight DUB - 498 | Business Class.----------"<<endl;
			cout<<"You can go back to menu and take the ticket"<<endl;
		}
		else if(choice1==2){
			charges=55550;
			cout<<"\n ----------You have successfully booked the flight DUB - 651 | Premium Economy.----------"<<endl;
			cout<<"You can go back to menu and take the ticket"<<endl;	
		}
		else if(choice1==3){
			charges=50570;
			cout<<"\n ----------You have successfully booked the flight DUB - 892 | Economy Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;
		}
		else{
			cout<<"Invalid input , shifting to the previous menu"<<endl;
			flights();
		}//if else closing
		cout<<"\nPress any key to go back to the main menu: "<<endl;
		cin>>back;
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}
				break;
	}//case closing
		case 2:{
				cout<<"____________________________Welcome to Canadian Airlines!_______________________\n"<<endl;
		
			cout<<"\nFollowing are the flight details: "<<endl;
			
			cout<<"\n1: flight ID: CA - 125 | Business Class"<<endl;
			cout<<" Date and Time: 06-12-2024 at 11:00 A.M | Flight duration : 13 hours. "<<endl;
			cout<<"Ticket price: PKR 850,000"<<endl;
			
			cout<<"\n\n2: flight ID: CA - 661 | Premium Economy"<<endl;
			cout<<" Date and Time: 08-12-2024 at 7:00 A.M | Flight duration : 14 hours. "<<endl;
			cout<<"Ticket price: PKR 550,000"<<endl;
			
			cout<<"\n\n3: flight ID: CA - 392 | Economy Class"<<endl;
			cout<<" Date and Time: 03-12-2024 at 12:00 p.M | Flight duration : 14 hours, 30 minutes. "<<endl;
			cout<<"Ticket price:  PKR 370,000"<<endl;
		
		cout<<"\n\n Select the flight you want to book: ";
		cin>>choice1;
		if(choice1==1){
			charges=850000;
			cout<<"\n ----------You have successfully booked the flight CA - 125 | Business Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;
	
		}
		else if(choice1==2){
			charges=550000;
			cout<<"\n ----------You have successfully booked the flight CA - 661 | Premium Economy Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;
		
		}
		else if(choice1==3){
			charges=370000;
			cout<<"\n ----------You have successfully booked the flight CA - 392 | Economy Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;

		}
		else{
			cout<<"Invalid input , shifting to the previous menu"<<endl;
			flights();
		}//if else closing
		cout<<"\nPress any key to go back to the main menu: "<<endl;
		cin>>back;
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}
				break;
	}//case closing
	case 3: {
			cout<<"____________________________Welcome to UK Airways!_______________________\n"<<endl;
		
			cout<<"\nFollowing are the flight details: "<<endl;
			
			cout<<"\n1: flight ID: UK - 121 | Business Class"<<endl;
			cout<<" Date and Time: 06-12-2024 at 11:00 A.M | Flight duration : 8 hours. "<<endl;
			cout<<"Ticket price: PKR 850,000"<<endl;
			
			cout<<"\n\n2: flight ID: UK - 546 | Premium Economy"<<endl;
			cout<<" Date and Time: 08-12-2024 at 7:00 A.M | Flight duration : 8 hours and 25 minutes. "<<endl;
			cout<<"Ticket price: PKR 550,000"<<endl;
			
			cout<<"\n\n3: flight ID: UK - 678 | Economy Class"<<endl;
			cout<<" Date and Time: 03-12-2024 at 12:00 p.M | Flight duration :  8 hours and 50 minutes. "<<endl;
			cout<<"Ticket price:  PKR 370,000"<<endl;
		
				cout<<"\n Select the flight you want to book: ";
		cin>>choice1;
		if(choice1==1){
			charges=850000;
			cout<<"\n ----------You have successfully booked the flight UK - 121 | Business Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;
	
		}
		else if(choice1==2){
			charges=550000;
			cout<<"\n ----------You have successfully booked the flight UK - 546 | Premium Economy Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;
		
		}
		else if(choice1==3){
			charges=370000;
			cout<<"\n ----------You have successfully booked the flight UK - 678 | Economy Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;

		}
		else{
			cout<<"Invalid input , shifting to the previous menu"<<endl;
			flights();
		}//if else closing
		cout<<"\nPress any key to go back to the main menu: "<<endl;
		cin>>back;
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}			
		break;
	}//case closing
	
		case 4:{
		cout<<"____________________________Welcome to US Airways!_______________________\n"<<endl;
		
			cout<<"\nFollowing are the flight details: "<<endl;
			
			cout<<"\n1: flight ID: US - 121 | Business Class"<<endl;
			cout<<" Date and Time: 06-12-2024 at 11:00 A.M | Flight duration : 14 hours. "<<endl;
			cout<<"Ticket price: PKR 850,000"<<endl;
			
			cout<<"\n\n2: flight ID: US - 546 | Premium Economy"<<endl;
			cout<<" Date and Time: 08-12-2024 at 7:00 A.M | Flight duration : 18 hours. "<<endl;
			cout<<"Ticket price: PKR 550,000"<<endl;
			
			cout<<"\n\n3: flight ID: US - 678 | Economy Class"<<endl;
			cout<<" Date and Time: 03-12-2024 at 12:00 p.M | Flight duration :  22 hours. "<<endl;
			cout<<"Ticket price:  PKR 370,000"<<endl;
		
				cout<<"\n Select the flight you want to book: ";
		cin>>choice1;
		if(choice1==1){
			charges=850000;
			cout<<"\n---------- You have successfully booked the flight US - 121 | Business Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;
	
		}
		else if(choice1==2){
			charges=550000;
			cout<<"\n----------You have successfully booked the flight US - 546 | Premium Economy Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;
		
		}
		else if(choice1==3){
			charges=370000;
			cout<<"\n----------You have successfully booked the flight US - 678 | Economy Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;

		}
		else{
			cout<<"Invalid input , shifting to the previous menu"<<endl;
			flights();
		}//if else closing
		cout<<"\nPress any key to go back to the main menu: "<<endl;
		cin>>back;
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}			
		break;
}//case closing	
	case 5:{
	cout<<"____________________________Welcome to AUSTRALIAN AIRLINES!_______________________\n"<<endl;

			cout<<"\nFollowing are the flight details: "<<endl;
			
			cout<<"\n1: flight ID: AUS - 121 | Business Class"<<endl;
			cout<<" Date and Time: 06-12-2024 at 11:00 A.M | Flight duration : 18 hours. "<<endl;
			cout<<"Ticket price: PKR 850,000"<<endl;
			
			cout<<"\n\n2: flight ID: AUS - 546 | Premium Economy"<<endl;
			cout<<" Date and Time: 08-12-2024 at 7:00 A.M | Flight duration : 22 hours. "<<endl;
			cout<<"Ticket price: PKR 550,000"<<endl;
			
			cout<<"\n\n3: flight ID: AUS - 678 | Economy Class"<<endl;
			cout<<" Date and Time: 03-12-2024 at 12:00 p.M | Flight duration :  24 hours. "<<endl;
			cout<<"Ticket price:  PKR 370,000"<<endl;
		
				cout<<"\n Select the flight you want to book: ";
		cin>>choice1;
		if(choice1==1){
			charges=850000;
			cout<<"\n ----------You have successfully booked the flight AUS - 121 | Business Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;
	
		}
		else if(choice1==2){
			charges=550000;
			cout<<"\n ----------You have successfully booked the flight AUS - 546 | Premium Economy Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;
		
		}
		else if(choice1==3){
			charges=370000;
			cout<<"\n ----------You have successfully booked the flight AUS - 678 | Economy Class.----------"<<endl;
			cout<<"\nYou can go back to menu and take the ticket"<<endl;

		}
		else{
			cout<<"Invalid input , shifting to the previous menu"<<endl;
			flights();
		}//if else closing
		cout<<"\nPress any key to go back to the main menu: "<<endl;
		cin>>back;
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}			
		break;	
}//case closing
		
}//switch closing
	}//void closing
}; //registeration class closing

 float registeration::charges;
 int registeration::choice;

// using multiple inheritance
class  ticket : public registeration, Details{
	
	public:
void Bill() {
    string destination;
    ofstream outf("record.txt");  // File to write the ticket

    switch (registeration::choice) {
        case 1:
            destination = "Dubai";
            break;
        case 2:
            destination = "Canada";
            break;
        case 3:
            destination = "UK";
            break;
        case 4:
            destination = "USA";
            break;
        case 5:
            destination = "Australia";
            break;
        default:
            destination = "Unknown";
            break;
    }
    cout << "Destination selected: " << destination << endl;
    // Write ticket details to file
    if (outf) {
        outf << "___________________________AIRLINES_________________________" << endl;
        outf << "___________________________TICKET___________________________" << endl;
        outf << "____________________________________________________________" << endl;
        outf << "Customer ID: " << Details::cID << endl;
        outf << "Customer name: " << Details::name << endl;
        outf << "Customer Gender: " << Details::gender << endl;
        outf << "\tDescription\n" << endl;
        outf << "Destination: " << destination << endl;
        outf << "Flight cost: " << registeration::charges << endl; 
    } else {
        cout << "Error: Could not open file for writing." << endl;
    }

    outf.close();
}	
	void disBill(){
		ifstream ifs("record.txt");{
			if(!ifs){
				cout<<"File error!";
			}
			//eof-----> end of checking
			while(!ifs.eof()){
				ifs.getline(arr, 100);
				cout<<arr<<endl;
			}
		}//ifs closing
		ifs.close();
	}//disBill closing
	};//ticket class closing

//menu
void mainMenu(){
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\n\t*-*-*-*-*-*-*-*-*-*-*-*-CLOUD AIRLINES-*-*-*-*-*-*-*-*-*-*-*-\n"<<endl;
	cout<<"\t--------------------------Main Menu--------------------------\n"<<endl;
	
	cout<<"\t_____________________________________________________________"<<endl;
	cout<<"\t|                                                           |"<<endl;
	cout<<"\t|                Press 1 to add customer details            |"<<endl;
	cout<<"\t|                Press 2 for Flight Registeration           |"<<endl;
	cout<<"\t|                Press 3 for Ticket and Charges             |"<<endl;
	cout<<"\t|                Press 4 to exit                            |"<<endl;
	cout<<"\t|___________________________________________________________|"<<endl;
	
	cout<<"\nEnter the choice: ";
	cin>>lchoice;
	
	Details d;
	registeration r;
	ticket t;
	
	switch(lchoice){
		case 1:
			{
				cout<<"\t_________________________Customer Details_______________________\n"<<endl;
				d.information();
				cout<<"Press 1 to go back to the main menu ";
				cin>>back;
				
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}
				break;
			}//case 1 closing
		case 2:
			{
			cout<<"\t__________________Book a flight using this system__________________\n"<<endl;
			r.flights();
			break;	
			} //case 2 closing
		case 3:
		{
			cout<<"\t__________________Get Your Ticket__________________\n"<<endl;
			t.Bill();
			cout<<"Your ticket is booked, you can collect it \n"<<endl;
			cout<<"Press 1 to display your ticket ";
			
			cin>>back;
			if(back==1){
				t.disBill();
				cout<<"Any key to go back to main menu: ";
				cin>>back;
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}
			}
			break;
		}//case 3 closing
		
			case 4:{
				cout<<"\n\n\t_______________ThankYou_______________"<<endl;
				break;
			}//case 4 closing
			
			default:
				{
					cout<<"Invalid input! Please try again....\n"<<endl;
					mainMenu();
					break;
				}			
	}//switch closing	
}//main menu closing

int main(){
	cout<<"Roll no. 24SW050"<<endl;
	cout<<"Section:2"<<endl;
	Management Mobj;
	return 0;
}

