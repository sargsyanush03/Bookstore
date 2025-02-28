#include "bookstore.hpp"
//allocate memory for books
//set size and capacity of library
void init_library() {
	object.data = (Book*)malloc(CAPACITY * sizeof(Book));
	if (!object.data) {
		perror("Malloc failed");
		exit(EXIT_FAILURE);
	}
	memset(object.data, 0, sizeof(Book) * object.capacity);
	object.index = -1;
	object.capacity = CAPACITY;
}