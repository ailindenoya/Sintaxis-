#include <stdio.h>

void longitudCadena(char *cad){
    int i;
    int contador = 0; 
    printf("ingrese la cadena: ");
    scanf("%s/n",cad);
    for(i=0;cad[i]!='\0';i++){
        contador++;  
    }
    printf("longitud de cadena: %i", contador); 
}

void equivalenteNumerico(char *cad){
    int i;
    printf("ingrese la cadena: ");
    scanf("%s/n",cad); 
    for (i=0; cad[i]; i++){
        printf(" %d", *(cad+i));
    } 
    
}

void convierteEnMayus(char *cad){
    int i; 
    printf("ingrese la cadena: ");
    scanf("%s/n",cad);
    for (i=0; cad[i]!='\0'; i++){
    printf(" %c", *(cad+i)-32);
    }

}

void quitaCaracter(char *cad, char car){
    printf("ingrese la cadena: ");
    scanf("%s/n",cad);
    printf("ingrese caracter a quitar: ");
    scanf("%s/n", &car);
    int i,j =0; 
    
     for (int i=0; cad[i]!= '\0'; i++)
    {
        if (cad[i]== car)
        {
            int j=i;

            while (cad[j] != '\0')
            {
                cad[j]=cad[j+1];
                j++;
            }
            i--;
        }
    }
    printf("cadena sin caracter: %s", cad); 
}


void concatenaCadenas(char *cad1, char *cad2){
    
    int i;
    int contador = 0; 
    printf("ingrese la primer cadena: ");
    scanf("%s/n",cad1);
    printf("ingrese la segunda cadena: ");
    scanf("%s/n",cad2);
    for(i=0;cad1[i]!='\0';i++)
    {
        contador++;
    }
    for(i=0;cad2[i]!='\0';i++)
    {
        cad1[contador+i]=cad2[i];
    }
    cad1[contador+i]='\0';
    printf("\nLa combinacion de las dos cadenas es: ");
    for(i=0;cad1[i]!='\0';i++)
    {
        printf("%c",cad1[i]);
    }
}

void cambiaCaracter(char *cad,  char car, int pos){
    
    int i;
    printf("Ingrese una cadena, el caracter y su posicion en donde insertarlo \n");
    scanf("%s %c %d", cad, &car, &pos);

    for(i = 0; cad[i] != '\0'; i++)
    {
        if(i == pos)
        {
            cad[i] = car; 
        }
    }

    printf("cadena nueva:  %s", cad);
    
}

void menu(int opcion, char *cad1, char *cad2, char car, int pos ) {

    switch (opcion) {
        case 1:
            longitudCadena(cad1);
            break;
        case 2:
            equivalenteNumerico(cad1);
            break;
        case 3:
            convierteEnMayus(cad1);
            break;
        case 4:
            quitaCaracter(cad1,car);
            break; 
        case 5:
            concatenaCadenas(cad1,cad2);
            break; 
        case 6: 
            cambiaCaracter(cad1,car,pos);
            break; 
    }
}


int main () {

    char car; 
    int pos;
    char cad1[20] = {};
    char cad2[20] = {}; 
    int opcion = 0; 

    //Menú
    while (opcion != 7) {
        printf(" \n\n");
        printf("INGRESE UNA OPCION \n\n");
        printf("1 - calcular longitud de cadena \n");
        printf("2 - calcular equivalente numerico de cadena \n");
        printf("3 - convertir cadena en mayuscula \n");
        printf("4 - quitar caracter de cadena \n");
        printf("5 - concatenar cadenas \n");
        printf("6 - cambiar caracter de cadena \n");
        printf("7 - salir \n\n");
        printf("----> ");
        scanf(" %i", &opcion);         
        menu(opcion,cad1,cad2,car,pos);
    }


return 0; 


}