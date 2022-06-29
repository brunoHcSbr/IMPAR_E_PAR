//IDENTIFICADOR DE NÚMERO ÍMPAR E PAR

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num[5],i,contador01=0,contador02=0;
	printf("---DIGITE CINCO NÚMEROS PARA A IDENTIFICAÇÃO E CONTAGEM---\n");
	for(i=0;i<5;i++){
		printf("\nDigite o %d° número: ",i+1);
		scanf("%d",&num[i]);
	}
	printf("\n\n---IDENTIFICADOR---\n");
	for(i=0;i<5;i++){
	
	if (num[i] % 2 == 0){
    printf ("\nO %d° número = %d é par",i+1,num[i]);
    contador01=contador01+1;
}else {
    printf("\nO %d° número = %d é impar",i+1,num[i]);
    contador02=contador02+1;
}
}
    printf("\n\n---CONTADOR---\n");
    printf("\nA quantidade de números pares são: %d\n",contador01);
    printf("\nA quantidade de números impares são: %d\n",contador02);
}

