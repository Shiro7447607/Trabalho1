/*
Alunos-Matrícula:
 Marcos Nery Borges Junior - 17/0017885
 Matheus Salles Blanco - 16/0138400
*/
#include <stdio.h>
#include <stdlib.h>

void recebe_notas(float * notas, int numelem, int * APR){

  int i; 

  for(i=0;i<numelem;i++){
  
     if(notas[i]>=6){
      APR[i]=1;
     }    
     else{
      APR[i]=0;
     }

  }

}

void conta_notas(int * APR, int numelem, int * napr, int * nrep){
    
    int i;  
    *napr = 0;
    *nrep = 0;
    
    for(i=0;i<numelem;i++){
   
        if(APR[i]==1){
          *napr += 1;
        }
        else{
            *nrep += 1;
        }

  }

}

int percent_aprov(int napr, int nrep, float *papr, float *prep){
   
  int talunos = napr + nrep;
  *papr = ((float)napr/talunos)*100;
  *prep = ((float)nrep/talunos)*100;

  if(*papr>50){
    return 1;
  }

  return 0;

}


int main(){

  int i, numelem=10, napr, nrep, result;
  int APR[numelem];
  float notas[numelem], papr, prep;

  printf("Digite as notas dos alunos\n");

  for(i=0;i<numelem;i++){
  
     scanf("%f",&notas[i]);
  
  }

  recebe_notas(notas, numelem, APR);
  conta_notas(APR,numelem,&napr,&nrep);
  result = percent_aprov(napr,nrep,&papr,&prep);
  
  printf("\nRESULTADOS:\n");
  printf("Quantidade de aprovados: %d\nQuantidade de reprovados: %d\n",napr,nrep);
  printf("Percentual de aprovados: %.2f\nPercentual de reprovados: %.2f\n",papr,prep);
  
  if(result){
    printf("Boas noticias, mais da metade da turma foi aprovada !\n");
  }
  else{
    printf("Infelizmente menos da metade dos alunos conseguiram ser aprovados\n");
  }
    
    
    return 0;
}
