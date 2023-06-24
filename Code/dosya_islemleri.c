#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * f;

    f = fopen ("dosya.txt", "w+");
    fprintf(f, "%s", "Dosyaya yazı yaz.");

    fclose(f);

    int c;

    f = fopen("dosya.txt","r");
    
    while(1) {
        c = fgetc(f);
        if(feof(f)) { 
            break;
        }
        printf("%c", c);
    }
    fclose(f);

    return 0;
}