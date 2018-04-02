/*
Alunos-Matrícula:
 Marcos Nery Borges Junior - 17/0017885
 Matheus Salles Blanco - 16/0138400
*/
#include <stdio.h>
#include <stdlib.h>

int recebe_notas(int *notas, int numelem, int *apr){
	int i;
	
	for(i = 0; i <= numelem; i++){
		i = *notas;
	}
	if(*notas >= 6){
		*apr = 1;
	} else{
		*apr = 0;
	}
}

void contas_notas(int *apr, int numelem){
	
}

int percent_aprov(int *porcento, int *apr){
	//porcento = (apr++
	//if((*apr == 1) >= 60%){
	//	return 1;
	//} else{
	//	return 0;
	//}
	
}

int main(){
	int i, notas[10], apr[10], numelem;
	
	printf("Insira os valores das 10 notas\n");
	
	for(i = 0;i <= 10;i++){      
        scanf("%d\n", &notas[i]); 
    }
    
    
    
    return 0;
}
