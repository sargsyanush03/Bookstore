#include "bookstore.hpp"

void save_data() {
	unlink("Library.txt"); //delete existing file
	FILE* stream = fopen("Library.txt", "w");
	if (!stream) {
		perror("Can't save the data");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i <= object.index; ++i) {
		fprintf(stream, "%-30s %-30s %-20s %-10d\n",
			object.data[i].author,
			object.data[i].title,
			object.data[i].isbn,
			object.data[i].available);
	}
	fclose(stream);
}