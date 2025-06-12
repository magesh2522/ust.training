#include <iostream>

using namespace std;

typedef struct {
    std::string title;
    std::string author;
    float price;
    int year;
} Book;

int main() {
    Book myBook;

    std::cout << "Enter book title: ";
    std::getline(std::cin, myBook.title);

    std::cout << "Enter author name: ";
    std::getline(std::cin, myBook.author);

    std::cout << "Enter price: ";
    std::cin >> myBook.price;

    std::cout << "Enter year of publication: ";
    std::cin >> myBook.year;

    std::cout << "\nBook Details:\n";
    std::cout << "Title: " << myBook.title << "\n";
    std::cout << "Author: " << myBook.author << "\n";
    std::cout << "Price: $" << myBook.price << "\n";
    std::cout << "Year: " << myBook.year << "\n";

    return 0;
}