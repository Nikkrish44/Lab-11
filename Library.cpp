//include headers and libraries

//implement class functions

#include "Library.h"
#include <iostream>
// #include <string>
using namespace std;

Library::Library()
{
for(int i = 0; i<10; i++)
	{
		books[i] = "";
	}
}

bool Library::addBook(string bookName)
{
bool avail;
int spot;

for(int i = 0; i<10; i++)
	{
		if(books[i]==bookName)
			{
			avail=false;
			break;
			}
		if(books[i]=="")
			{
			avail=true;
			spot = i;
			}
			
	}

if(avail==false)
	return avail;
else
	{
	books[spot] = bookName;
	return avail;
        }


}


bool Library::removeBook(string bookName)
{

for(int i=0;i<10;i++)
	{
		if(books[i]==bookName)
			{books[i]="";
			return true; 
				}

	

	}
return false;


}


void Library::print()
{
cout<<"Library contents:"<<endl;
for(int i=9;i>=0;i--)
{
	if(books[i]!="")
	cout<<books[i]<<endl;
}

}










