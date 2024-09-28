# 确保 Book 类正确定义
class Book:
    def __init__(self, title, author, isbn):
        self.title = title
        self.author = author
        self.isbn = isbn

    def __str__(self):
        return f"Title: {self.title}, Author: {self.author}, ISBN: {self.isbn}"
class library:
     def __init__(self):
        self.books = []
     def __add_book__(self,book):
        self.books.append(book)
        print(f"Add book {self.title} successful")
     def __remove__(self,isbn):
          for book in self.books:
               if book.isbn==isbn:
                    self.books.remove(book)
                    return
          print(f"No book found with ISBN: {isbn}") 
     def __find__(self,book):
          found_books = [book for book in self.books if title.lower() in book.title.lower() ]
          if found_books:
            for book in found_books:
                print(book)
          else:
            print(f"No books found with title: {title}")   
     def __list__(self):
         if self.books:
             for book in self. books:
                 print(book)
         else:
             print("dont have any books")
import json

class Library:
    def __init__(self):
        self.books = []

    def add_book(self, book):
        self.books.append(book)
        print(f"Added: {book.title}")

    def remove_book(self, isbn):
        for book in self.books:
            if book.isbn == isbn:
                self.books.remove(book)
                print(f"Removed: {book.title}")
                return
        print(f"No book found with ISBN: {isbn}")

    def search_book(self, title):
        found_books = [book for book in self.books if title.lower() in book.title.lower()]
        if found_books:
            for book in found_books:
                print(book)
        else:
            print(f"No books found with title: {title}")

    def list_books(self):
        if self.books:
            for book in self.books:
                print(book)
        else:
            print("No books in the library.")

    def save_to_file(self, filename):
        """保存图书到文件"""
        try:
            with open(filename, 'w') as file:
                json.dump([book.__dict__ for book in self.books], file)
            print(f"Library saved to {filename}")
        except IOError as e:
            print(f"Error saving to file: {e}")

    def load_from_file(self, filename):
        """从文件加载图书"""
        try:
            with open(filename, 'r') as file:
                books_data = json.load(file)
                self.books = [Book(**data) for data in books_data]
            print(f"Library loaded from {filename}")
        except (IOError, json.JSONDecodeError) as e:
            print(f"Error loading from file: {e}")
def main():
    library = Library()
    filename = 'library.json'

    # 尝试从文件加载图书
    library.load_from_file(filename)

    while True:
        print("\nLibrary Menu:")
        print("1. Add Book")
        print("2. Remove Book")
        print("3. Search Book")
        print("4. List All Books")
        print("5. Save and Exit")

        choice = input("Choose an option: ")

        if choice == '1':
            title = input("Enter book title: ")
            author = input("Enter book author: ")
            isbn = input("Enter book ISBN: ")
            library.add_book(Book(title, author, isbn))
        elif choice == '2':
            isbn = input("Enter ISBN of the book to remove: ")
            library.remove_book(isbn)
        elif choice == '3':
            title = input("Enter title to search: ")
            library.search_book(title)
        elif choice == '4':
            library.list_books()
        elif choice == '5':
            library.save_to_file(filename)
            print("Exiting the system.")
            break
        else:
            print("Invalid option, please try again.")

if __name__ == "__main__":
    main()