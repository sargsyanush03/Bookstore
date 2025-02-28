#include "bookstore.hpp"
int is_not_available(char* isbn) {
	for (int i = 0; i <= object.index; ++i) {
		if (strcmp(isbn, object.data[i].isbn) == 0) {
			if (object.data[i].available == 0) {
				return (i);
			}
		}
	}
	return (-1);
}

int  return_book() {
	std::cout << "Please enter the ISBN of the book for returning\n";
	char borrow_isbn[20] = {0};
	getc(stdin);
	fgets(borrow_isbn, 20, stdin);
	borrow_isbn[strlen(borrow_isbn) - 1] = '\0';
	int index = is_not_available(borrow_isbn);//return the index of book which you can return
	if (index != -1) {
		object.data[index].available = 1;
		return (1);
	}
	return (0);
}