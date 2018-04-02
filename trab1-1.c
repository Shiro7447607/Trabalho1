/*
Alunos-Matrícula:
 Marcos Nery Borges Junior - 17/0017885
 Matheus Salles Blanco - 16/0138400
*/
#include<stdio.h>
void fneuronio(int * entradas, int * pesos, int tamanho,int T, int * result){
         int i,somap=0;
      
         for(i=0;i<tamanho;i++){
                somap += (entradas[i]*pesos[i]);
             }
        
         if(somap > T){
		 	*result=1;
		 }
         else{
		 	*result = 0;
			 }
    }


int main(){
	int i, T,entradas[10],pesos[10], resultado;
 
    printf("Entre com os elementos do vetor neural \n");  
    
    for(i=0;i<10;i++){    
           scanf("%d", &entradas[i]); 
        }
    
    printf("Entre os pesos \n");  
    
    for(i=0;i<10;i++){
        scanf("%d", &pesos[i]); 
    }
    
    printf("Digite a constante T\n");
    scanf("%d",&T);
    
    fneuronio(entradas,pesos,10,T,&resultado);
    
    
    if(resultado==0){
    	printf("\nNeuronio inibido!");
	} else{
		printf("\nNeuronio ativado");
	}
    
  return 0;
  
}
