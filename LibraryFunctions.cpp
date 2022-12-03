#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <LibraryManagement.h>
using namespace std;

    
         void LibraryManagement :: AddBook ()
        {
              cout<<"Enter book details "<<endl;
              cin>>m_bookrec;
              outfile1<<m_bookrec<<endl;
     
        }
    
      #if0   void LibraryManagement ::RemoveBook()    //Removal of record from file to be defined
        {
             cout<<"Enter Book details "<<endl;
             cin>>m_bookrec;
    
        }
      #endif

        void LibraryManagement :: IssueBook ()
        {
           cout<<"Enter Book details "<<endl;
           cin>>m_bookissuerec;
           outfile2<<m_bookissuerec<<endl;
        }
       
       LibraryManagement :: LibraryManagement (choice)
       {
            m_choice = choice;
            if (m_choice == 1)
                entity.Addbook();
            elseif (m_choice == 2)
                entity.RemoveBook();
            elseif (m_choice == 3)
                entity.IssueBook();
            else
               cout<<"Thanks for using library services\n";

       }
       
