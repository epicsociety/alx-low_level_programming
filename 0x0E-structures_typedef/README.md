This is all about sturctures and typedef. 

Skeleton for Structures

example:
   struct student
   {
	   int rollno;
	   char name[20];
	   float marks;
   }


They can be defined in two main diff ways;

struct student
{
	int rollno;
	  char name[20];
	  float marks;
  } s1 = {35, "John", 98.3}

or like

struct student
 17 {
	  int rollno;
	  char name[20];
	   float marks;
 }

void (main)
{
	struct student s2 = {14, "Reen", 45.2}
	struct student s3 = {12, "Mary", 85.5}
}
