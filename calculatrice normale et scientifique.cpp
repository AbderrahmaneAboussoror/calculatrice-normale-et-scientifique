#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void func(){
	double n1, n2, op;
	int num;
	char signe, genre;
	char opinion[3];
	do{
		printf("Voulez vous commencez ?\nTapez oui si vous acceptez ou non si vous refusez: ");
		scanf("%s", &opinion);
	}while((opinion[0] != 'o' && opinion[1] != 'u' && opinion[2] != 'i') && (opinion[0] != 'n' && opinion[1] != 'o' && opinion[2] != 'n'));
	
	if(opinion[0] == 'o' && opinion[1] == 'u' && opinion[2] == 'i'){
		do{
			printf("Veuillez taper n pour la calculatrice normale ou s pour la calcul scientifique: ");
			scanf("\n%c", &genre);
		}while(genre != 'n' && genre != 's');
		do{
			if(genre == 'n'){
				printf("donnez le premier nombre :");
				scanf("\n%lf", &n1);
				printf("\ndonnez le signe de l'operation: ");
				scanf("\n%c", &signe);
				printf("\ndonnez le deuxieme nombre :");
				scanf("\n%lf", &n2);
				if(signe == '+')
					op = n1+n2;
				else if(signe == '-')
					op = n1-n2;
				else if(signe == '*')
					op = n1*n2;
				else if(signe == '/')
					op = n1/n2;
				printf("\n%lf", op);
				
			}
			else{
				printf("Tapez le numero de la fonction desiré: \n1.Logarithme\n2.Exponontiel\n3.cos\n4.sin\n5.tanj\n6.la racine carré\n7.la puissance\n");
				scanf("\n%d", &num);
				if(num == 1){
					printf("donnez le nombre: ");
					scanf("\n%lf", &n1);
					op = log(n1);
				}else if(num == 6){
					printf("donnez le nombre: ");
					scanf("\n%lf", &n1);
					op = sqrt(n1);
				}else if(num == 7){
					printf("donnez le nombre: ");
					scanf("\n%lf", &n1);
					printf("\ndonner la puissance: ");
					scanf("\n%lf", &n2);
					op = pow(n1, n2);
				}else if(num == 2){
					printf("donner la puissance: ");
					scanf("\n%lf", &n1);
					op = exp(n1);
				}else if(num == 3){
					printf("donnez le nombre: ");
					scanf("\n%lf", &n1);
					op = cos(n1);
				}else if(num == 4){
					printf("donnez le nombre: ");
					scanf("\n%lf", &n1);
					op = sin(n1);
				}
				else if(num == 5){
					printf("donnez le nombre: ");
					scanf("\n%lf", &n1);
					op = tan(n1);
				}
				printf("%lf", op);
			}
			printf("\nvoulez vous recommencez ?\nTapez oui pour recommencer ou non pour quitter \n");
			scanf("\n%s", &opinion);
			}while(opinion[0] == 'o' && opinion[1] == 'u' && opinion[2] == 'i');
			printf("merci pour votre participation!!!!");
	}
}
int main(){
	func();
}

















