#include <stdio.h>

void operate(char* file_name){
        FILE *file;
        file = fopen(file_name,"a+");
        if(file == NULL){
                fprintf(stderr,"Error creating file %s \n", file_name);
                return;
        }
        fclose(file);

}

int main(int argc, char** argv){
        if(argc <= 1){
                printf("touch: missing file operand\n");
                return -2;
        }
        for(int i = 1;i < argc;i++){
                operate(argv[i]);
        }
        return 0;
}
