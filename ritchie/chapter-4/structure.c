#include <stdio.h>

struct Student {
	int id;
	char name[20];
	float marks;
};

void Hello() {
	printf("Hello world\n");
}

int main() {
	struct Student s1 = {1, "Amith", 95.5};
	struct Student s2 = {.marks = 90.3, .name = "cilian", .id = 2};
	struct Student *ptr = &s2;
	printf("ID: %d\n", s1.id);
	printf("Name: %s\n", s1.name);
	printf("Marks: %.2f\n", s1.marks);

	printf("ID: %d\n", ptr->id);
        printf("Name: %s\n", ptr->name);
        printf("Marks: %.2f\n", ptr->marks);
	
	void (*fptr)() = Hello;
	printf("Address via fptr: %p\n", fptr);
	
	return 0;
}
