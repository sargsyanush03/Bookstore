#include "bookstore.hpp"

int add_book() {
	//resize library,if it's nessesary
	if (object.index + 1 == object.capacity) {
		object.data = (Book*)realloc(object.data, object.capacity * 2 * sizeof(Book));
		if (!object.data) {
			perror("Not enough memory!");
			exit(EXIT_FAILURE);
		}
		object.capacity *= 2;
	}
	//new line character left in buffer after choosing option
	getc(stdin);
	//checking the isbn uniqness,after only add to a collection
	std::cout << "Enter the isbn." << std::endl;
	char tmp_isbn[20] = {0};
	fgets(tmp_isbn, 20, stdin);
	size_t len = strlen(tmp_isbn);
	tmp_isbn[len - 1] = '\0';
	for (int i = 0; i <= object.index; ++i) {
		if (strcmp(tmp_isbn, object.data[i].isbn) == 0) {
			std::cout << "The isbn is not unique!Try again." << std::endl;
			return (0);
		}
	}
	object.index++;
	strcpy(object.data[object.index].isbn, tmp_isbn);
	//removing new line characters from strings
	std::cout << "Enter the author name.\n";
	fgets(object.data[object.index].author, 100, stdin);
	len = strlen(object.data[object.index].author);
	object.data[object.index].author[len - 1] = '\0';
	std::cout << "Enter the book title.\n";
	fgets(object.data[object.index].title, 100, stdin);
	len = strlen(object.data[object.index].title);
	object.data[object.index].title[len - 1] = '\0';
	object.data[object.index].available = 1;
	return (1);
}