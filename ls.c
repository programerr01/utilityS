#include <stdio.h>
#include <dirent.h>


//Function to print directory
int handleDirectory(char* dirr){
	DIR *dir;
	struct dirent *entry;

	dir = opendir(dirr); //Open the directory 

	if(dir == NULL){
		printf("ls: cannot access '%s': No such file or directory\n", dirr);
		return -1;
	}
	entry = readdir(dir);
	while(entry){
		printf("%s\n",entry->d_name);
		entry = readdir(dir);
	}
	closedir(dir);
	return 0;
}

int main(int argc, char *argv[]){
	char dir[] = ".";
	if(argc >= 2){
		for(int x_ = 1;x_ < argc;x_++){
			handleDirectory(argv[x_]);
		}
	}
	else{
		handleDirectory(dir);
	}
	
	return 0;
}
