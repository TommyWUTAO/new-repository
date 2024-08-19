#ifndef Book_H
#define Book_H
#include"library.h"
#include <string>
class Book : public LibraryItem
{
    private:
      std::string author;
      std::string publisher;
    public:
    Book(int  id, std::string title, std::string author, std::string publisher);
	std::string getAuthor() const;
	std::string getPublisher() const;


};
#endif