#include<iostream>
#include"book.h"
#include"library.h"
Book::Book(int  id, std::string title, 
std::string author, std::string publisher): LibraryItem(id, title), author(author), publisher(publisher)
{
    
}
std::string Book::getAuthor() const
{
    return  author;
}
std::string Book::getPublisher() const
{
    return  publisher;
}