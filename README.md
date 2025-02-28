# Library Management System

## Overview
This program is a simple Library Management System implemented using C-style programming. It allows users to manage a collection of books, providing functionality to add, borrow, return, and search for books. The system also supports saving and loading data for persistence.

## Code Organization
- **Header File:** `bookstore.hpp` (contains function prototypes and struct definitions)
- **Source Files:**
  - `main.cpp` – Handles user interaction and menu logic
  - `print_options.cpp` – Displays menu options
  - `add_book.cpp` – Implements adding a book
  - `list_books.cpp` – Implements listing all books
  - `search_book.cpp` – Implements searching for books
  - `borrow_book.cpp` – Implements borrowing a book
  - `return_book.cpp` – Implements returning a book
  - `save_data.cpp` – Handles saving book data
  - `load_data.cpp` – Handles loading book data
  - `init_library.cpp` – Implements library initialization
  - `destroy_library.cpp` – Implements library destruction
  
## Compilation and Execution
To compile the program, use the following command:
```sh
 g++ *.cpp -o library_system
```
To run the program:
```sh
 ./library_system
```

## Features and Assumptions
- **Book Management:** Supports adding, listing, borrowing, returning, and searching for books.
- **Persistent Storage:** Saves and loads book data to/from a file.
- **Memory Management:** Uses dynamic allocation for flexibility.
- **Input Validation:** Ensures valid ISBNs and user input.
- **Search Functionality:** Supports case-insensitive, partial matches.

This implementation ensures modularity, readability, and efficiency while maintaining a simple command-line interface. Enjoy using the Library Management System!


