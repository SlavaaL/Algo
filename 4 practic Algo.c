#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


struct person_type
{
  char *name;
  char *surname;
  char *father_name;
  char *birthday;
};

int
main ()
{

  char input_message[50];
  struct person_type pr;
  pr.name = "First name";
  pr.surname = "last name";
  pr.father_name = "father name";
  pr.birthday = "11.05.2005";
  
  while (true)
    {
      scanf ("%s", input_message);
      if (!strcmp (input_message, "PID"))
	{
	  puts (pr.surname);
	  puts (pr.name);
	  puts (pr.birthday);
	}
      else if (!strcmp (input_message, "BD"))
	{
	  puts (pr.father_name);
	  puts (pr.birthday);
	}
      else
	puts ("Wrong command!");
    }

  return 0;
}
