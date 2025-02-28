#pragma once
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
#define CAPACITY 100

typedef struct {
	char title[100];
	char author[100];
	char isbn[20];
	int available;
} Book;

typedef struct {
	Book *data;
	int index;
	int capacity;
} Library;

extern Library object;

void init_library();
void load_content();
void print_options();
void list_books();
int  add_book();
int  borrow_book();
int  return_book();
void search_book();
void save_data();
void destroy_library();
