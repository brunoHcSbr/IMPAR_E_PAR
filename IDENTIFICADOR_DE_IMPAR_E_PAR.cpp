//IDENTIFICADOR DE N�MERO �MPAR E PAR

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num[5],i,contador01=0,contador02=0;
	printf("---DIGITE CINCO N�MEROS PARA A IDENTIFICA��O E CONTAGEM---\n");
	for(i=0;i<5;i++){
		printf("\nDigite o %d� n�mero: ",i+1);
		scanf("%d",&num[i]);
	}
	printf("\n\n---IDENTIFICADOR---\n");
	for(i=0;i<5;i++){
	
	if (num[i] % 2 == 0){
    printf ("\nO %d� n�mero = %d � par",i+1,num[i]);
    contador01=contador01+1;
}else {
    printf("\nO %d� n�mero = %d � impar",i+1,num[i]);
    contador02=contador02+1;
}
}
    printf("\n\n---CONTADOR---\n");
    printf("\nA quantidade de n�meros pares s�o: %d\n",contador01);
    printf("\nA quantidade de n�meros impares s�o: %d\n",contador02);
}

