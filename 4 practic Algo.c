#include <stdio.h>
 
struct person
{
    char * name;
    char * patronymic;
    char * surname;
    char * birthday;
};
 
int main(void)
{
    struct person tom = {"Slava", "Batkovich", "Dontsov", "09.07.2003"};
    printf("PID - %s %s %s \n", tom.name, tom.surname, tom.birthday);
    printf("BD - %s %s", tom.patronymic, tom.birthday);
    return 0;
}
