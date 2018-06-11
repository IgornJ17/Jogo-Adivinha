#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// declaração do tipo e das variaveis utilizadas
	int chute, numeroPensado, acertou, maior, i, tentativa, segundos, numeroRandomico, dificuldade;
	double pontos, pontosPerdidos; 
	
	// Area de variaveis
	segundos = time(0);
	srand(segundos);

	numeroRandomico = rand();
	numeroPensado = numeroRandomico % 100;

	
	tentativa = 10;
	//Imprimindo cabeçalho
	  
   printf("                          _______,.........._                          \n");
   printf("                     _.::::::::::::::::::::::::._                      \n");
   printf("                  _J::::::::::::::::::::::::::::::-.                   \n");
   printf("               _,J::::;::::::!:::::::::::!:::::::::::-.\\_ ___         \n");
   printf("            ,-:::::/::::::::::::/''''''-:/   \\::::::::::::::::L_      \n");
   printf("          ,;;;;;::!::/         V               -::::::::::::::::7      \n");
   printf("        ,J:::::::/\\/                              '-'`\\:::::::.7     \n");
   printf("         |:::::::'                                       \\::!:::/     \n");
   printf("        J::::::/                                          `.!:\\ dp    \n");
   printf("       |:::::7                                             |/\\:\\     \n");
   printf("       J::::/                                               \\/ \\:|   \n");
   printf("       |:::/                                                    \\:\\  \n");
   printf("       |::/                                                     |:.Y   \n");
   printf("       |::7                                                      |:|   \n");
   printf("       |:/                              `OOO8ooo._               |:|   \n");
   printf("       |/               ,,oooo8OO'           ``Y8o,             |'     \n");
   printf("        |          ,8P'    _.__         .---..._                /      \n");
   printf("        |           '   .-'    `-.    .'       `-.            /        \n");
   printf("       `.            ,'          `. /            `.          L_        \n");
   printf("      .-.J.          /              Y               \\        /_ \\    \n");
   printf("     |    \\         /               |                Y      /         \n");
   printf("      \\ \\ \\       Y          8B    |   8B           |     /Y   '    \n");
   printf("       \\ \\\\      |                |                ;    / |  /      \n");
   printf("        \\ \\\\     |               ,'.              /    /  L |       \n");
   printf("        \\  J\\     \\           _.'   `-._       _.'    /  _.'        \n");
   printf("          `.___,\\    `._     _,'          '-...-'     /'` '           \n");
   printf("                \\      '---'  _____________         /                 \n");
   printf("                 `.          \\|T T T T T|/       ,'                   \n");
   printf("                    `.          \\_|_|_|_/       .'                    \n");
   printf("                      `.         `._.-._.'      .'                     \n");
   printf("                       `._         `-'     _,'                         \n");
   printf("                           `--._________.--'                           \n\n\n");
   printf("Bem vindo ao jogoooooo!!!!\n");


	printf("Qual é a dificuldade que deseja?\n\n");
	printf("Facil[1] Medio[2] Dificil[3]\n");
	printf("Escolha ");scanf("%d", &dificuldade);

	if(dificuldade == 1){
		tentativa = 15;
	}
	else if(dificuldade == 2){
		tentativa = 10;
	}else{
		tentativa = 5;
	};

	system("cls");
	pontos = 1000;
	// Laço de repetição das instruções
	for(i = 1; i <= tentativa; i++){
		printf("Tentativa %d...\n", i);
		// Usuario digitará o numero desejado
		printf("Qual e seu chute? \n"); scanf("%d", &chute);

			if(chute < 0){
			system("cls");
			printf("O numero %d nao e permitido!! Tente novamente.\n", chute);
			i--;
			continue; 
		}

		acertou = numeroPensado == chute;
		maior = chute > numeroPensado;
		if(acertou){
			system("cls");
			printf("Seu chute foi %d.\n", chute);
			printf("Parabens, voce acertou o valor misterioso!!\n", i);
			printf("Voce acertou o numero na tentativa n %d!!\n", i);
			printf("Voce somou %.1f pontos!!\n", pontos);	
			break;

        }
        
        else if(maior){
			system("cls");
			printf("O numero chutado e maior que o numero misterioso!!\n");
		}

		else{
			system("cls");
			printf("O numero chutado e menor que o numero misterioso!!\n");
		};
		pontosPerdidos = abs(chute - numeroPensado) / (double)2;
		pontos = pontos - pontosPerdidos;
	};
	printf("\nFim de jogo!!\n");

	if(i > tentativa){
		system("cls");	
		printf("\nFim de jogo!!\n");
		printf("Voce perdeu, tente novamente!!\n");
		printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
		};
}
