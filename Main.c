#include <stdio.h>

int main(){                
    
    FILE *archivo=NULL;
    FILE *archivo2=NULL;
    int num;

    archivo=fopen("vector.txt","r");
    archivo2=fopen("vector2.txt","w");

    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    for(int i=0; i<100; i++){
        fprintf(archivo,"%d\n",i);
    }
    while(!feof(archivo)){
        fscanf(archivo, "%d", &num);
    if(num%3==0){
        fprintf(archivo,"multiplo de 3");
    }
    else{
        fprintf(archivo2,"%d\n",num);
    }
    }
    fclose(archivo);
    fclose(archivo2);
     return 0;

}




