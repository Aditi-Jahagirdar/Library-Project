#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "LibraryManagement.h"


using namespace std;


int main()
{
   
   ofstream outfile1 ("AvailableBooks.txt");
   ofstream outfile2 ("IssuedBooks.txt");

   cout<<"Library Management Portal \n 
   1. Add book \n 
   2. Remove Book \n 
   3. Issue Book \n 
   Enter your choice "<<endl;

  int choice ;
  cin>>choice;

  outfile1.close();
  outfile2.close();
    return 0;
}
