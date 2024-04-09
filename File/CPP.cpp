#include<iostream>
using namespace std;
int main(){
string package;
int pay,num,choice,p_no,type;
char again ='*';
cin>>package;
if(package=="*999#"){
	
	
do{	
cout<<"Welcome to Ethiotelecom Service \n";	
cout<<"1.For 5G package \n 2.For Package \n";
cin>>choice;
if(choice==1){
cout<<"1.For your self \n 2.For Gift \n";	
cin>>num;

if(num==1){
cout<<"1.400 birr for 1000 GB Weekly \n 2.1200 birr for 1500 GB Monthly";
cin>>pay;
if(pay==1){
	cout<<"You successfully Buy weekly 1000 GB";
}else if(pay==2){
		cout<<"You successfully Buy Monthly 1200 GB";
}else{
	cout<<"Wrong choice ";
}	
	
}else if(num==2){
	cout<<"Enter the Phone Number You want to send a Gift \n";
	cin>>p_no;
	cout<<"1.400 birr for 1000 GB Weekly \n 2.1200 birr for 1500GB Monthly";
	cin>>pay;
	if(pay==1){
	cout<<"You sent successfully weekly 1000 GB";
}else if(pay==2){
		cout<<"You successfully sent Monthly 1200 GB";
}else{
	cout<<"Wrong choice ";
}
}	
}else if(choice==2){
	cout<<"1. For Your self \n 2.For Gift \n";
	cin>>num;
	if(num==1){
	cout<<"1.Daily \n 2.Weekly \n 3.Monthly \n";	
	cin>>type;
	if(type==1){
		cout<<"1. 3 Birr for 50 mb \n 2. 5 Birr for 75 mb \n";
		cin>>pay;
		if(pay==1){
			cout<<"You Buy 50 mb daily package successfully \n";
		}else if(pay==2){
			cout<<"You Buy 50 mb daily package successfully \n";
			
		}else{
			cout<<"Wrong Choice";
		}
	}else if(type==2){
		cout<<"1. 15 Birr for 400 mb Weekly Package \n 2. 25 Birr for 1 GB mb weekly Package \n";	
			cin>>pay;
		if(pay==1){
			cout<<"You Buy 400 mb Weekly package successfully \n";
		}else if(pay==2){
			cout<<"You Buy 1  GB Weekly package successfully \n";
			
		}else{
			cout<<"Wrong Choice";
		}
	}else if(type==3){
	cout<<"1. 50 Birr for 1 GB Monthly package \n 2. 10 Birr for 2.5 GB mb Monthly Package \n";	
			cin>>pay;
		if(pay==1){
			cout<<"You Buy 1 GB Monthly  package successfully \n";
		}else if(pay==2){
			cout<<"You Buy 2.5  GB Monthly  package successfully \n";
			
		}else{
			cout<<"Wrong Choice";
		}	
	}else
	{
		cout<<"Wrong Choice";
		break;
	}
		
	}else if(num==2){
	cout<<"Enter Phone Number You Want to send A gift \n";
	cin>>p_no;
	cout<<"1.Daily \n 2.Weekly \n 3.Monthly \n";	
	cin>>type;
	if(type==1){
		cout<<"1. 3 Birr for 50 mb \n 2. 5 Birr for 75 mb \n";
		cin>>pay;
		if(pay==1){
			cout<<"You Buy 50 mb Daily package successfully \n";
		}else if(pay==2){
			cout<<"You Buy 50 mb Daily package successfully \n";
			
		}else{
			cout<<"Wrong Choice";
		}
	}else if(type==2){
		cout<<"1. 15 Birr for 400 mb Weekly Package \n 2. 25 Birr for 1 GB mb weekly Package \n";	
			cin>>pay;
		if(pay==1){
			cout<<"You Buy 400 mb Weekly package successfully \n";
		}else if(pay==2){
			cout<<"You Buy 1  GB Weekly package successfully \n";
			
		}else{
			cout<<"Wrong Choice";
		}
	}else if(type==3){
	cout<<"1. 50 Birr for 1 GB Monthly package \n 2. 10 Birr for 2.5 GB mb Monthly Package \n";	
			cin>>pay;
		if(pay==1){
			cout<<"You Buy 1 GB Monthly  package successfully \n";
		}else if(pay==2){
			cout<<"You Buy 2.5  GB Monthly  package successfully \n";
			
		}else{
			cout<<"Wrong Choice";
			
		}	
	}else
	{
		cout<<"Wrong Choice";
		break;
	}	
	}else{
		cout<<"Wrong Choice";
	}
}
cout<<"\t Your Process is Successfully complated to do another transaction enter * or to terminate enter any kea \n";
cin>>again;
}while(again=='*');	

	
}
	
	return 0;
}
/*Coded By Fuad Seid*/