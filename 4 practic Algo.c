#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
  FILE *file = NULL;
  char input_message[50];

  while(true){
    printf("Enter the command: ");
    fflush(stdin);
    scanf("%s", input_message);
    if(strlen(input_message) != 1) {
      puts("Wrong command");
    }
    else if(!strcmp(input_message, "w")) {
      puts("Write the message: ");
      fflush(stdin);
      scanf("%s", input_message);
      file = fopen("file.txt", "w");
      if(file == NULL){
        puts("Unable to open the file");
        exit(1);
      }
      fprintf(file, "%s", input_message);
      fclose(file);
    }
    else if(!strcmp(input_message, "c")) {
      unlink("file.txt");
    }
    else if(!strcmp(input_message, "r")) {
      file = fopen("file.txt", "r");
      if(file == NULL){
        puts("Unable to open the file");
        exit(1);
      }
      fgets(input_message, 50, file);
      fclose(file);
      puts(input_message);
    }
    else puts("Wrong command");
  }
  
  return 0;
}
