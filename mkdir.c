#include <stdio.h>
#include <stdlib.h>


int create(char* folder_name){
	if(mkdir(folder_name) == 0){

	}
	else{
		printf("Error creating directory");
		return 1;
	}
}

int main(int argc,char* argv[]){
	if(argc == 1){
		printf("mkdir: missing operand");
		return 1;
	}
	for(int i = 1;i < argc;i++){
		create(argv[i]);
	}
}
