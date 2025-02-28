//frees the library's memory
#include "bookstore.hpp"
void destroy_library() {
	free(object.data);
	object.index = -1;
	object.capacity = 0;
}