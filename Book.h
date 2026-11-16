//
// Book.h
// Declaration of the Book class. Book contains a Page object.
//

#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Page.h"

class Book {
public:
    Book();
    Book(const std::string& t, const std::string& a);

    void setTitle(const std::string& t);
    std::string getTitle() const;

    void setAuthor(const std::string& a);
    std::string getAuthor() const;

    // Book uses a Page object to model its current page.
    void setPageDetails(int pageNum, const std::string& pageContent);
    int getCurrentPageNumber() const;
    std::string getCurrentPageContent() const;

private:
    std::string title;
    std::string author;
    Page currentPage;
};

#endif // BOOK_H
