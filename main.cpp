#include "bookstore.hpp"
Library object;

int main()
{
	int option = 0;
	init_library();
	load_content();
	while (1) {
		print_options();
		std::cin >> option;
		system("clear");//clears terminal console after each action
		switch (option) {
			case 1:
			if (add_book() == 1) {
				std::cout << "The book is succesfully added.\n" << std::endl;
			} else {
				std::cout << "Failed to add a book.\n" << std::endl;
			}
			break;
			case 2:
			list_books();
			break;
			case 3:
			search_book();
			break;
			case 4:
			if (borrow_book() == 1) {
				std::cout << "The book is succesfully borrowed.\n" << std::endl;
			} else {
				std::cout << "The book is not available for borrowing\n" << std::endl;
			}
			break;
			case 5:
			if (return_book() == 1) {
				std::cout << "The book is succesfully returned.\n" << std::endl;
			} else {
				std::cout << "The book was not borrowed by user to be returned.\n" << std::endl;
			}
			break;
			case 6:
			std::cout << "Exiting program..." << std::endl;
			save_data();
			destroy_library();
			exit(EXIT_SUCCESS);
			default:
			std::cout << "Invalid option!Try again" << std::endl;
			break;
		}
	}
}