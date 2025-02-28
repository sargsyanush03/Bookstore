#include "bookstore.hpp"

void load_content() {
	FILE* stream = fopen("Library.txt", "r");
	if (!stream) {
		perror("Can't load Library's content");
		return;//if there's no presaved library,the program continues execution
	}
	int ret_val = 0;
	int  i = 0;
	//read data from library file and store in memory,increment the index
	while (1) {
		ret_val = fscanf(stream, "%s %s %s %d", object.data[i].title, object.data[i].author,
		object.data[i].isbn, &object.data[i].available);
		if (ret_val == EOF) {
			break;
		}
		object.index = i;
		++i;
	}
}