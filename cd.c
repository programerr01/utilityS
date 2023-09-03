#include <stdio.h>
#include <unistd.h>


int changeDir(char* dir){
	if(chdir(dir) == 0){

	}
	else{
		perror("chdir");
       	 	return -1;

	}
	return 0;	
}

int main(int argc, char* argv[]){
	char *dir = "~";
	if(argc == 2){
		dir = argv[1];
	}
	if(argc > 2){
		printf("cd: Too Many Arguments\n");
		return -1;
	}
	changeDir(dir);
	return 0;
}

