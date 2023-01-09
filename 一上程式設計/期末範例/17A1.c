#include<stdio.h>
#include<string.h>
#include<stdbool.h>

//幹這題的題目敘述到底在寫三小???

bool test_extension(char *file_name, char *extension){
    
    FILE *p;

    for(int i=0;i<strlen(extension);i++){
        //轉大寫
        if(extension[i]>='A' && extension[i]<='Z'){
            extension[i] += 32;
        }
    }

    strcat(file_name,extension);

    p = fopen(file_name,"r");

    //判斷P是否成立
    if(p==NULL){
        return false;
    }
    else{
        fclose(p);
        return true;
    }
}



int main(){

    char file[20],ext[10];
    bool status = false;

    gets(file);
    gets(ext);

    status = test_extension(file,ext);

    if(status == true){
        printf("EXIST");
    }
    else{
        printf("NOT EXIST");
    }

}

