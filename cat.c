#include <stdio.h>
#include <errno.h>
#include <string.h>


int handle_file(char* filename){
	FILE *file; // Declare a file pointer 
	
	file = fopen(filename,"r");

	//check if file exists 
	if(file == NULL){
		        fprintf(stderr, "Error opening file '%s': %s\n", filename, strerror(errno));

		return 1;
	}
	char character;

	//fgetc is used to get character from file 
	character = fgetc(file);

	while(character != EOF){
		putchar(character);
		character = fgetc(file);
	}
	fclose(file);
	return 0;
}

int main(int argc, char* argv[]){
	if(argc == 1){
		printf("Argument is not passed");
	}
	else{
		for(int i = 1;i < argc;i++){
			handle_file(argv[i]);
		}
	}
	return 0;
}
