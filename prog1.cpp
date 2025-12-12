#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publishedYear;
};

int main() {

    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book books[n];

    cout << "\n--- Enter Book Details ---\n";

    for (int i = 0; i < n; i++) {
        cout<<"\nbook "<< i + 1 <<endl;
        
        cout << "Enter title: ";
        cin >> books[i].title;

        cout << "Enter author: ";
        cin >> books[i].author;

        cout << "Enter published year: ";
        cin >> books[i].publishedYear;
    }

    cout << "\n--- Book Details Entered ---\n";

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Published Year: " << books[i].publishedYear << endl;
    }

    return 0;
}
