#include "bookstore.hpp"
//check if the book is available for borrowing
int is_available(char* isbn) {
	for (int i = 0; i <= object.index; ++i) {
		if (strcmp(isbn, object.data[i].isbn) == 0) {
			if (object.data[i].available) {
				return (i);
			}
		}
	}
	return (-1);
}

int borrow_book() {
	std::cout << "Please enter the ISBN of the book for borrowing\n";
	char borrow_isbn[20] = {0};
	getc(stdin);
	fgets(borrow_isbn, 20, stdin);
	borrow_isbn[strlen(borrow_isbn) - 1] = '\0';
	int index = is_available(borrow_isbn);
	if (index != -1) {
		object.data[index].available = 0;
		return (1);
	}
	return (0);
}