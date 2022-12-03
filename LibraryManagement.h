
#pragma once


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
        int m_choice ;

   public:

      void getChoice () {};
      void AddBook () {};
      void RemoveBook() {};
      void IssueBook (){};

      LibraryManagement (int choice){};
      ~LibraryManagement() {};


};