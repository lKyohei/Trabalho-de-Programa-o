#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main (void) {
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	/*variáveis do 1º minigame*/
	
	char a1[50] = "a) 2";
	char b1[50] = "b) 3";
	char c1[50] = "c) 10";
	
	char a2[50] = "a) 0";
	char b2[50] = "b) 4";
	char c2[50] = "c) 12";
	
	char a3[50] = "a) 3";
	char b3[50] = "b) 20";
	char c3[50] = "c) 5";
	
	char resposta1[100];
	char resposta2[100];
	char resposta3[100];
	
	/*variáveis do 2º minigame*/
	
	int cont = 1, num, num_pc = 4; // num_pc numero ao qual o computador está pensando
	
	/*variáveis do 3º minigame*/
	
	int dadoA, dadoB; // variaveis dos dados
	dadoA = rand();// variaveis que vão ser randomizadas a cada turno
	dadoB = rand();// variaveis que vão ser randomizadas a cada turno
	int score_user_1 = 0, score_user_2 = 0; //variavel que acumula a pontuação de cada jogador
	int cont2 = 1;// variavel validadora que serve para saber se o jogador quer continuar jogando ou não
	int result1 = 0, result1_turn, result2 = 0, result2_turn; // result1 e result 2 variavel pra saber qual a pontuaçao total do jogador na vez dele // result1_turn e result2_turn variavel que acumula a pontuação do jogador no turno dele
	int result_final_1, result_final_2;
	int acumulative_turn_1 = 0, acumulative_turn_2 = 0; // variavel que registra a pontuação total ao longo do jogo de cada jogador
	int acumulative_turn_resist1 = 0, acumulative_turn_resist2 = 0;
	int var_aux1, var_aux2;
	
	/*------------------------*/
	
	printf("Esse algoritmo é composto por um conjunto de Minigames.\n\n");
	
	int validador = 1;
	
	while (validador > 0 && validador < 6) {  //while responsavel pelo loop de todos os 3 jogos 
		
		printf("Insira o digito correto para entrar no Minigame ou digite 4 para sair:\n");
		printf("1 - Pergunta e resposta.\n");
		printf("2 - Adivinhe o número.\n");
		printf("3 - Olho de cobra.\n");
		printf("4 - Sair.\n");
		scanf("%d", &validador);
		printf("\n");
		
		switch (validador) { //
            case 1:
            	
            	while (validador == 1) { // para que o jogador ao digitar 1 tente jogar novamente
            		printf("Esse é um minigame em que você deve inserir a ALTERNATIVA correta ao que se pede na questão.\n");
	            	printf("Obs: Serão 3 perguntas no total.\n\n");
	            	
	            	/*1ª questão*/
	            	
	                printf("1ª pergunta: Quanto é 1 + 1?\n-->Alternativas:\n%s\n%s\n%s\n", &a1, &b1, &c1);
	                scanf("%s", &resposta1);
	                printf("\n");
	                
	                if (strcmp (resposta1, "a") == 0) { //if para caso o jogador acerte a resposta
	                	
	                    printf("Resposta Correta!\n");
	                    printf("Sua reposta: %s", &a1, ".");
	                    printf("\n");
	                    printf("\n");
	                }
					else {// else para caso o jogador erre a resposta
	                	
	                    printf("Resposta Incorreta!\n"); 
	                    printf("A respota correta era: %s", &a1, ".");
	                    printf("\n");
	                    printf("\n");
	                }
	                
	                /*2ª questão*/
	                
	                printf("2ª pergunta: Quanto é 2 + 2?\n-->Alternativas:\n%s\n%s\n%s\n", &a2, &b2, &c2);
	                scanf("%s", &resposta2);
	                printf("\n");
	                
	                if (strcmp (resposta2, "b") == 0) {
	                	
	                    printf("Resposta Correta!\n");
	                    printf("Sua reposta: %s", &b1, ".");
	                    printf("\n");
	                    printf("\n");
	                }
					else {
	                	
	                    printf("Resposta Incorreta!\n");
	                    printf("A respota correta era: %s", &b1, ".");
	                    printf("\n");
	                    printf("\n");
	                }
	                
	                /*3ª questão*/
	                
	                printf("3ª pergunta: Quanto é 1 + 4?\n-->Alternativas:\n%s\n%s\n%s\n", &a3, &b3, &c3);
	                scanf("%s", &resposta3);
	                printf("\n");
	                
	                if (strcmp (resposta3, "c") == 0) {
	                	
	                    printf("Resposta Correta!\n");
	                    printf("Sua reposta: %s", &c3, ".");
	                    printf("\n");
	                    printf("\n");
	                }
					else {
	                	
	                    printf("Resposta Incorreta!\n");
	                    printf("A respota correta era: %s", &c3, ".");
	                    printf("\n");
	                    printf("\n");
	                }
	                
	                printf("Caso deseje continuar jogando o minigame digite 1, senão digite 5 para voltar ao menu.\n");
					scanf("%d", &validador);
					printf("\n");
				}
                
                break;
                
            case 2:
            	
            	while (validador == 2) { // para o jogador tentar novamente ao digitar 2
            		
            		cont = 1;
            		
            		printf("A ideia desse minigame é você tentar adivinhar o número que o computador está pensando.\n");
            		printf("Obs: você terá apenas 5 chances para tentar adivinhar...\n");
            		printf("\n");
            		
            		while (cont <= 5 && num != num_pc) { //while que define a quantidade de chances para o jogador
            			
            			printf("Computador --> por favor digite um número:\n");
						scanf("%d", &num);
						printf("\n");
						
						if (num > num_pc) {
							printf("O número que você digitou é maior do que o computador está pensando.\n");
							printf("\n");
						}
						else if (num < num_pc) {
							printf("O número que você digitou é menor do que o computador está pensando.\n");
							printf("\n");
						}
						else {
							printf("Parabéns você acertou o número que o computador está pensando.\n");
							printf("\n");
						}
						
						cont++;
						
					}
					
					if (cont > 5) {	
						printf("Infelizmente suas chances se esgotaram... Game Over\n");
						printf("\n");
					}
					
					printf("Caso deseje continuar jogando o minigame digite 2, senão digite 5 para voltar ao menu.\n");
					scanf("%d", &validador);
					printf("\n");
					num =0;
				}
                
                break;
                
            case 3: //case 3 responsavel pelo 3 jogo
            	
                while (validador == 3) { // responsavel para que o jogador queira jogar novamente ao digitar 3
                	
                	printf("A ideia desse minigame é que dois jogadores irão competir pra ver quem atingi 50 pontos primeiro.\n");
            		printf("Obs1: a pontuação será decidica no jogar de 2 dados...\n");
            		printf("Obs2: você terá direito ao seu turno e um turno extra, porém aqui vai algumas ressalvas...\n");
            		printf("Obs3: se você optar pelo turno extra você correrá o risco de perder sua pontuação nos seguintes casos...\n");
            		printf("Caso 1: se um dos dados cair no número 1 você perderá toda a sua pontuação adquirida na presente rodada e perderá sua vez...\n");
            		printf("Caso 2: se os 2 dados caírem no número 1 você perderá sua pontuação total e perderá sua vez...\n");
            		printf("Obs4: caso não deseje jogar os dados novamente você poderá encerrar seu turno e consequentemente voc~e irá preserva sua pontuação...\n");
            		printf("\n");
                	
                	while (score_user_1 < 50 && score_user_2 < 50) { // define que ambos os jogadores precisam de 50 pontos ou mais para que exista um vencedor
                		
                		dadoA = rand();
						dadoB = rand();
                		
                		while (cont2 == 1) { //serve para que o caso o usuario digite 1 ao final do seu turno ele jogue novamente
                			
                			dadoA = rand();
							dadoB = rand();
                			
                			printf("Este é o turno do jogador 1!\n");
                			printf("\n");
                			
                			srand((unsigned)time(NULL));//funcao srand utilizada para gerar os numeros aleatorios dos dados
							dadoA = dadoA%6 + 1, dadoB = dadoB%6 + 1;
							result1_turn = dadoA + dadoB;
							printf("A soma dos valores dos seus dados é: %i + %i = %i\n", dadoA, dadoB, result1_turn, ".\n");
							printf("Sua pontuação total atualmente é: %i", result1_turn + result1, ".\n");
							printf("\n");
							
							result1 = result1 + result1_turn;
							
							printf("Caso deseje jogar os dados novamente digite 1, senão digite 0 para passar a vez.\n");
							scanf("%i", &cont2);
							printf("\n");
							
							while (cont2 == 1) { // esse while e para caso o jogador jogue novamente e tire 1 em cada um de seus dados e seja aplicada as punições
								
								dadoA = rand();
								dadoB = rand();
								
								srand((unsigned)time(NULL));
								dadoA = dadoA%6 + 1, dadoB = dadoB%6 + 1;
								var_aux1 = dadoA + dadoB;
								
								acumulative_turn_1 = result1_turn + var_aux1 + acumulative_turn_1;
								acumulative_turn_resist1 = result1_turn + var_aux1 + acumulative_turn_resist1;
								
								if (cont2 == 1 && dadoA == 1 && dadoB != 1) {//else if para caso o jogador tire 1 + algum outro numero entre 1 e 6
									result1 = result1 - acumulative_turn_resist1 + var_aux1;
									printf("Os valores dos seus dados foram: %i + %i\n", dadoA, dadoB, ".\n");
									printf("\n");
									printf("Infelizmente um de seus dados caíram em 1 e você perdeu sua pontuação acumulada esta rodada.\n");
									printf("\n");
									printf("Sua pontuação total atualmente é: %i", result1, ".\n");
									printf("\n");
									printf("%i\n", acumulative_turn_1);
									printf("\n");
								
									cont2 = 0;
								
								}
								else if (cont2 == 1 && dadoA != 1 && dadoB == 1) {//else if para caso o jogador tire algum outro numero entre 1 e 6 + 1
									result1 = result1 - acumulative_turn_resist1 + var_aux1;
									printf("Os valores dos seus dados foram: %i + %i\n", dadoA, dadoB, ".\n");
									printf("\n");
									printf("Infelizmente um de seus dados caíram em 1 e você perdeu sua pontuaç~eo acumulada esta rodada.\n");
									printf("\n");
									printf("Sua pontuação total atualmente é: %i", result1, ".\n");
									printf("\n");
									printf("%i\n", acumulative_turn_1);
									printf("\n");
									
									cont2 = 0;
									
								}
								else if (cont2 == 1 && dadoA == 1 && dadoB == 1) { // else if para caso o jogador ire 1+1 e perca toda a sua pontuação e sua vez
									printf("Os valores dos seus dados foram: %i + %i\n", dadoA, dadoB, ".\n");
									printf("Infelizmente os seus 2 dados caíram no número 1 e você perdeu toda sua pontuação.\n");
									printf("\n");
									result1 = 0;
									printf("Sua pontuação total atualmente é: %i", result1, ".\n");
									printf("\n");
									
									cont2 = 0;
								}
								else if (cont2 == 1 && dadoA != 1 && dadoB != 1) { // else if para caso o jogador tire numeros diferente de 1 e possar seguir jogando normalmente
									printf("A soma dos valores dos seus dados é: %i + %i = %i\n", dadoA, dadoB, var_aux1, ".\n");
									result1 = acumulative_turn_1 + result1 - result1_turn;
									printf("Sua pontuação total atualmente é: %i", result1, ".\n");
									printf("\n");
									
									printf("Caso deseje jogar os dados novamente digite 1, senão digite 0 para passar a vez.\n");
									scanf("%d", &cont2);
									printf("\n");
								}
								
								dadoA = 0;
								dadoB = 0;
								
								acumulative_turn_1 = 0;
								var_aux1 = 0;
								result1_turn = 0;
							}
							
							dadoA = 0;
							dadoB = 0;
							
							var_aux1 = 0;
							acumulative_turn_1 = 0;
							result1_turn = 0;
							acumulative_turn_resist1 = 0;
						}
						
						cont2 = 1;
						
						if (result1 >= 50) {
							cont2 = 0;
						}
						
						while (cont2 == 1) {
							
							dadoA = rand();
							dadoB = rand();
							
							printf("Este é o turno do jogador 2!\n");
                			printf("\n");
                			
                			srand((unsigned)time(NULL));
							dadoA = dadoA%6 + 1, dadoB = dadoB%6 + 1;
							result2_turn = dadoA + dadoB;
							printf("A soma dos valores dos seus dados é: %i + %i = %i\n", dadoA, dadoB, result2_turn, ".\n");
							printf("Sua pontuação total atualmente é: %i", result2_turn + result2, ".\n");
							printf("\n");
							
							result2 = result2 + result2_turn;
							
							printf("Caso deseje jogar os dados novamente digite 1, senão digite 0 para passar a vez.\n");
							scanf("%i", &cont2);
							printf("\n");
							
							while (cont2 == 1) {
								
								dadoA = rand();
								dadoB = rand();
								
								srand((unsigned)time(NULL));
								dadoA = dadoA%6 + 1, dadoB = dadoB%6 + 1;
								var_aux2 = dadoA + dadoB;
								
								acumulative_turn_2 = result2_turn + var_aux2 + acumulative_turn_2;
								acumulative_turn_resist2 = result2_turn + var_aux2 + acumulative_turn_resist2;
								
								if (cont2 == 1 && dadoA == 1 && dadoB != 1) {
									result2 = result2 - acumulative_turn_resist2 + var_aux2;
									printf("Os valores dos seus dados foram: %i + %i\n", dadoA, dadoB, ".\n");
									printf("\n");
									printf("Infelizmente um de seus dados caíram em 1 e você perdeu sua pontuação acumulada esta rodada.\n");
									printf("\n");
									printf("Sua pontuação total atualmente é: %i", result2, ".\n");
									printf("\n");
									printf("%i\n", acumulative_turn_2);
									printf("\n");
								
									cont2 = 0;
								
								}
								else if (cont2 == 1 && dadoA != 1 && dadoB == 1) {
									result2 = result2 - acumulative_turn_resist2 + var_aux2;
									printf("Os valores dos seus dados foram: %i + %i\n", dadoA, dadoB, ".\n");
									printf("\n");
									printf("Infelizmente um de seus dados caíram em 1 e você perdeu sua pontuaç~eo acumulada esta rodada.\n");
									printf("\n");
									printf("Sua pontuação total atualmente é: %i", result2, ".\n");
									printf("\n");
									printf("%i\n", acumulative_turn_2);
									printf("\n");
									
									cont2 = 0;
									
								}
								else if (cont2 == 1 && dadoA == 1 && dadoB == 1) {
									printf("Os valores dos seus dados foram: %i + %i\n", dadoA, dadoB, ".\n");
									printf("Infelizmente os seus 2 dados caíram no número 1 e você perdeu toda sua pontuação.\n");
									printf("\n");
									result2 = 0;
									printf("Sua pontuação total atualmente é: %i", result2, ".\n");
									printf("\n");
									
									cont2 = 0;
								}
								else if (cont2 == 1 && dadoA != 1 && dadoB != 1) {
									printf("A soma dos valores dos seus dados é: %i + %i = %i\n", dadoA, dadoB, var_aux2, ".\n");
									result2 = acumulative_turn_2 + result2 - result2_turn;
									printf("Sua pontuação total atualmente é: %i", result2, ".\n");
									printf("\n");
									
									printf("Caso deseje jogar os dados novamente digite 1, senão digite 0 para passar a vez.\n");
									scanf("%d", &cont2);
									printf("\n");
								}
								
								dadoA = 0;
								dadoB = 0;
								
								acumulative_turn_2 = 0;
								var_aux2 = 0;
								result2_turn = 0;
							}
							
							dadoA = 0;
							dadoB = 0;
							
							var_aux2 = 0;
							acumulative_turn_2 = 0;
							result2_turn = 0;
							acumulative_turn_resist2 = 0;
							
						}
						
						cont2 = 1;
						
						if (result2 >= 50) {
							cont2 = 0;
						}
						
						score_user_1 = result1;
						score_user_2 = result2;
						
					}
					
					if (score_user_1 >= 50) {
						printf("Parabéns o jogador 1 ganhou!\n");
						printf("\n");
					}
					else {
						printf("Parabéns o jogador 2 ganhou!\n");
						printf("\n");
					}
					
					result1 = 0;
					result2 = 0;
					
					score_user_1 = 0;
					score_user_2 = 0;
					
					var_aux1 = 0;
					var_aux2 = 0;
					
					cont2 = 1;
					
					printf("Caso deseje continuar jogando o minigame digite 3, senão digite 5 para voltar ao menu.\n");
					scanf("%d", &validador);
					printf("\n");
                	
				}
                
                break;
                
            case 4:
                validador = 6;
                
                break;
                
        }
		
		printf("Programa encerrado!\n");
		printf("\n");
	}
	
	system("pause");
	return 0;

}
