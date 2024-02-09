#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

// mostrar as opções de operações matemáticas
void show_options(void) {
	// Limpar a tela do terminal toda vez que as opções forem exibidas
	system("cls");


	// Opções
	printf("[1] - x + y\n");
	printf("[2] - x - y\n");
	printf("[3] - x * y\n");
	printf("[4] - x / y\n");
	printf("[5] - Sair\n");

	printf("\nEscolha uma opcao: ");
}

void calcular(int option) {
	float result, x, y;

	// Só vai executar os comandos abaixo se uma das opções forem escolhidas
	if (option >= 1 && option <= 5) {

		if (option == 5) {
			printf("Saindo...\n");
			Beep(1000, 500);
			exit(0);
		}

		if (option == 1) {
			printf("Selecionado: adicao\n\n");
		} else if (option == 2) {
			printf("Selecionado: subtracao\n\n");
		} else if (option == 3) {
			printf("Selecionado: multiplicacao\n\n");
		} else if (option == 4) {
			printf("Selecionado: divisao\n\n");
		}
		
		printf("Valor de x -> ");
		scanf("%f", &x);
		fflush(stdin);
		printf("Valor de y -> ");
		scanf("%f", &y);

		switch (option) {
			case 1:
				result = x + y;
				printf("Exibindo resultado...\n");
				Beep(750, 1000);

				printf("\n+----------+----------\n");
				printf("| Resultado: %.2f\n", result);
				printf("+----------+----------\n\n");
			break;
			case 2:
				result = x - y;
				printf("Exibindo resultado...\n");
				Beep(750, 1000);

				printf("\n+----------+----------\n");
				printf("| Resultado: %.2f\n", result);
				printf("+----------+----------\n\n");
			break;
			case 3:
				result = x * y;
				printf("Exibindo resultado...\n");
				Beep(750, 1000);

				printf("\n+----------+----------\n");
				printf("| Resultado: %.2f\n", result);
				printf("+----------+---------\n\n");
			break;
			case 4:
				result = x / y;
				printf("Exibindo resultado...\n");
				Beep(750, 1000);

				printf("\n+----------+----------\n");
				printf("| Resultado: %.2f\n", result);
				printf("+----------+----------\n\n");
		}

	} else {  // Se nem uma das opções do menu forem escolhidas execute:
		printf("Por favor, insira uma das opcoes acima!\n");
		Sleep(2000);
	}

}

int main(void) {
	int option, sn;
	float x, y;

	do {
		do {
			show_options();
			scanf("%d", &option);
			fflush(stdin);
		
			calcular(option);
		} while (option < 1 || option > 4);
		
		printf("1 (continuar) 2 (parar): ");
		scanf("%d", &sn);
		fflush(stdin);

		if (sn != 1 && sn != 2) continue;
		
	} while (sn != 2);

	return 0;
}
