//include headers and libraries
#include "Library.h"
#include <iostream>
using namespace std;


int main(){
    Library library;
    
    //ask for commands and execute

bool quir = false;

while(quir==false)

	{
		char resp;
		cout<<"Enter command: ";
		cin>>resp;
	
		if(resp=='a')
			{
			string a;
			cin>>a;
		       bool c = library.addBook(a);
			if(c==false)
				cout<<"Cannot add the book"<<endl;
			}
		if(resp=='r')
			{
			string a;
			cin>>a;
			 bool c = library.removeBook(a);
			if(c==false)
				cout<<"Cannot remove the book."<<endl;
			}
		if(resp=='p')
			library.print();
		if(resp=='q')
			{
		cout<<"Exiting"<<endl;
			quir = true;
			}

cout<<endl;



	}


}
