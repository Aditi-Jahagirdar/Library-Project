#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

struct BookRecord
{
   int BookID;
   string Category;
   string BookName;
   string AuthorName;
};

struct BookIssueRecord
{
   int BookID;
   string bookName;
   string issuedBy;

   time_t now = time(0);
   char* issueDateTime = ctime(now);

};

class LibraryManagement
{
   private:
        BookRecord m_bookrec;
        BookIssueRecord m_bookissuerec;
        int choice ;

   public:
        
        void getChoice ()
        {
            cout<<"Library Management Portal \n 1. Add book \n 2. Remove Book 
            \n 3. Issue Book \n Enter your choice "<<endl;
            
            cin>>choice;

        }
   
        void AddBook ()
        {
              cout<<"Enter book details "<<endl;
              cin>>m_bookrec;
              outfile1<<m_bookrec<<endl;
     
        }
    
      #ifdef  void RemoveBook()    //Removal of record from file to be defined
        {
             cout<<"Enter Book details "<<endl;
             cin>>m_bookrec;
    
        }
      #endif

        void IssueBook ()
        {
           cout<<"Enter Book details "<<endl;
           cin>>m_bookissuerec;
           outfile2<<m_bookissuerec<<endl;
        }

};

int main()
{
   
   ofstream outfile1 ("AvailableBooks.txt");
   ofstream outfile2 ("IssuedBooks.txt");

   


  outfile1.close();
  outfile2.close();
    return 0;
}
