#include "bookstore.hpp"
#include <iomanip> 
//using setw for aligning and nice user Interface
void list_books() {
	std::cout << std::left
	<< std::setw(50) << "Title"
	<< std::setw(50) << "Author"
	<< std::setw(20) << "ISBN"
	<< std::setw(4)  << "Available\n"
	<< std::endl;
	for (int i = 0; i <= object.index; ++i) {
		std::cout << std::left
		<< std::setw(50) << object.data[i].title
		<< std::setw(50) << object.data[i].author
		<< std::setw(20) << object.data[i].isbn
		<< std::setw(4)  << (object.data[i].available > 0 ? "Yes" : "No")
		<< std::endl;
	}
	std::cout << "\n\n";
}



