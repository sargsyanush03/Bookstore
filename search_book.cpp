#include "bookstore.hpp"
#include <iomanip> 

void search_by_isbn(char* text) {
	std::cout << std::left
	<< std::setw(50) << "Title"
	<< std::setw(50) << "Author"
	<< std::setw(20) << "ISBN"
	<< std::setw(4)  << "Available\n"
	<< std::endl;
	//using strncmp for partial matching results
	for (int i = 0 ; i <= object.index; ++i) {
		if (strncmp(text, object.data[i].isbn, strlen(text)) == 0) {
			std::cout << std::left
			<< std::setw(50) << object.data[i].title
			<< std::setw(50) << object.data[i].author
			<< std::setw(20) << object.data[i].isbn
			<< std::setw(4)  << (object.data[i].available > 0 ? "Yes" : "No")
			<< std::endl;
		}
	}
}

void search_by_title(char* text) {
	std::cout << std::left
	<< std::setw(50) << "Title"
	<< std::setw(50) << "Author"
	<< std::setw(20) << "ISBN"
	<< std::setw(4)  << "Available\n"
	<< std::endl;
	for (int i = 0 ; i <= object.index; ++i) {
		if (strncmp(text, object.data[i].title, strlen(text)) == 0) {
			std::cout << std::left
			<< std::setw(50) << object.data[i].title
			<< std::setw(50) << object.data[i].author
			<< std::setw(20) << object.data[i].isbn
			<< std::setw(4)  << (object.data[i].available > 0 ? "Yes" : "No")
			<< std::endl;
		}
	}
}

void search_by_author(char* text) {
	std::cout << std::left
	<< std::setw(50) << "Title"
	<< std::setw(50) << "Author"
	<< std::setw(20) << "ISBN"
	<< std::setw(4)  << "Available\n"
	<< std::endl;
	for (int i = 0 ; i <= object.index; ++i) {
		if (strncmp(text, object.data[i].author, strlen(text)) == 0) {
			std::cout << std::left
			<< std::setw(50) << object.data[i].title
			<< std::setw(50) << object.data[i].author
			<< std::setw(20) << object.data[i].isbn
			<< std::setw(4)  << (object.data[i].available > 0 ? "Yes" : "No")
			<< std::endl;
		}
	}
}

void search_book() {
	std::cout 
	<< "Please choose searching option\n"
	<< "1.Search by ISBN\n"
	<< "2.Search by title\n"
	<< "3.Search by author\n";
	int option = 0;
	std::cin >> option;
	getc(stdin);
	char text[100] = {0};
	switch (option) {
		case 1:
		std::cout << "Enter the ISBN\n";
		fgets(text, 100, stdin);
		text[strlen(text) - 1] = 0;
		search_by_isbn(text);
		break;
		case 2:
		std::cout << "Enter the title\n";
		fgets(text, 100, stdin);
		text[strlen(text) - 1] = 0;
		search_by_title(text);
		break;
		case 3:
		std::cout << "Enter the author\n";
		fgets(text, 100, stdin);
		text[strlen(text) - 1] = 0;
		search_by_author(text);
		break;
		default:
		std::cout << "Invalid option";
		break;
	}

}