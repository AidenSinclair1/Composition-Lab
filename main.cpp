//
// main.cpp
// Demonstrates the refactored Page and Book classes.
//

#include <iostream>
#include "Page.h"
#include "Book.h"

int main() {
    std::cout << "--- Multi-File Class Example ---" << std::endl;

    // Demonstrate the Page class.
    Page p1(1, "Introduction to C++.");
    std::cout << "Page " << p1.getPageNumber()
              << ": " << p1.getContent() << std::endl;

    // Demonstrate the Book class and its Page member.
    Book myBook("The C++ Journey", "Bjarne Stroustrup");
    myBook.setPageDetails(42, "Classes and Objects.");

    std::cout << "\nBook Title: " << myBook.getTitle() << std::endl;
    std::cout << "Book Author: " << myBook.getAuthor() << std::endl;
    std::cout << "Current Page: " << myBook.getCurrentPageNumber() << std::endl;
    std::cout << "Page Content: " << myBook.getCurrentPageContent() << std::endl;

    return 0;
}
