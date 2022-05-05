#include <stdio.h>

int longitudCadena(char *cad){
    
    int contador = 0; 
    int i; 
    for(i=0;cad[i]!='\0';i++){
        contador++;  
    }
    return contador;  
}

int equivalenteNumerico(char *cad){
    
     int numero, i; 

     for (i=0; cad[i]; i++){
        numero=numero *10;
        switch (cad[i])
        {
            case '1':numero +=1;
                break;
            case '2':numero +=2;
                break;
            case '3':numero +=3;
                break;
            case '4':numero +=4;
                break;
            case '5':numero +=5;
                break;
            case '6':numero +=6;
                break;
            case '7':numero +=7;
                break;
            case '8':numero +=8;
                break;
            case '9':numero +=9;
                break;
            default:
                break;
        }
    }
    return numero; 
}



char * convierteEnMayus(char *cad){
    int i;
    for (i=0; cad[i]!='\0'; i++){
      if(cad[i]>=97&&cad[i]<=122)
        cad[i]=cad[i]-32;
    }
    return cad; 
}

char * quitaCaracter(char *cad, char car){
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
    return cad; 
}


char * concatenaCadenas(char *cad1, char *cad2){
    
    int i;
    int contador = 0; 
    for(i=0;cad1[i]!='\0';i++)
    {
        contador++;
    }
    for(i=0;cad2[i]!='\0';i++)
    {
        cad1[contador+i]=cad2[i];
    }
    cad1[contador+i]='\0';
    return cad1; 
}

char* agregaCaracter(char *cad,  char car, int pos){

    int i;
    char aux,aux2;
    aux=cad[pos];
    cad[pos]=car;
    for(i = pos+1; cad[i-1] != '\0'; i++)
    {
        aux2=cad[i];
        cad[i]=aux;
        aux=aux2;
    }

    return cad;

}

void menu(int opcion) {

    
    char cad1[20] = {};
    char cad2[20] = {};
    char car; 
    int pos;   


    switch (opcion) {
        case 1:
            printf("ingrese la cadena: ");
            scanf("%s/n",cad1);
            printf(" %d", longitudCadena(cad1));
            break;
        case 2:
            printf("ingrese la cadena: ");
            scanf("%s/n",cad1); 
            printf(" %d", equivalenteNumerico(cad1));
            break;
        case 3:
            printf("ingrese la cadena: ");
            scanf("%s/n",cad1); 
            printf(" %s", convierteEnMayus(cad1));
            break;
        case 4:
             printf("ingrese la cadena: ");
             scanf("%s/n",cad1);
             printf("ingrese caracter a quitar: ");
             scanf("%s/n", &car);
             printf(" %s", quitaCaracter(cad1,car));
            break; 
        case 5:
            printf("ingrese la primer cadena: ");
            scanf("%s/n",cad1);
            printf("ingrese la segunda cadena: ");
            scanf("%s/n",cad2);
            printf(" %s",concatenaCadenas(cad1,cad2));
            break; 
        case 6: 
            printf("Ingrese una cadena, el caracter y su posicion en donde insertarlo \n");
            scanf("%s %c %d", cad1, &car, &pos);
            printf(" %s",agregaCaracter(cad1,car,pos));
            break; 
    }
}


int main () {

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
        printf("6 - agrega caracter en cadena \n");
        printf("7 - salir \n\n");
        printf("----> ");
        scanf(" %i", &opcion);         
        menu(opcion);
    }



return 0; 


}
