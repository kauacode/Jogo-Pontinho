#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	char l1 = ' ', l2 = ' ', l3 = ' ', l4 = ' ', l5 = ' ', l6 = ' ';
	char l7 = ' ', l8 = ' ', l9 = ' ', l10 = ' ', l11 = ' ', l12 = ' ';
	char l13 = ' ', l14 = ' ', l15 = ' ', l16 = ' ', l17 = ' ', l18 = ' ';
	char l19 = ' ', l20 = ' ', l21 = ' ', l22 = ' ', l23 = ' ', l24 = ' ';
	char l25 = ' ', l26 = ' ', l27 = ' ', l28 = ' ', l29 = ' ', l30 = ' ';
	char col1 = ' ', col2 = ' ', col3 = ' ', col4 = ' ', col5 = ' ', col6 = ' ';
	char col7 = ' ', col8 = ' ', col9 = ' ', col10 = ' ', col11 = ' ', col12 = ' ';
	char col13 = ' ', col14 = ' ', col15 = ' ', col16 = ' ', col17 = ' ', col18 = ' ';
	char col19 = ' ', col20 = ' ', col21 = ' ', col22 = ' ', col23 = ' ', col24 = ' ';
	char col25 = ' ', col26 = ' ', col27 = ' ', col28 = ' ', col29 = ' ', col30 = ' ';
	int contador = 0, pontuacao1 = 0, pontuacao2 = 0, jogador1, jogador2, escolha;
	int quadrado1 = 0 , quadrado2 = 0 , quadrado3 = 0 , quadrado4 = 0 , quadrado5 = 0 , quadrado6 = 0 ;
	int quadrado7 = 0 , quadrado8 = 0 , quadrado9 = 0 , quadrado10 = 0 , quadrado11 = 0 , quadrado12 = 0 ;
	int quadrado13 = 0 , quadrado14 = 0 , quadrado15 = 0 , quadrado16 = 0 , quadrado17 = 0 , quadrado18 = 0 ;
	int quadrado19 = 0 , quadrado20 = 0 , quadrado21 = 0 , quadrado22 = 0 , quadrado23 = 0 , quadrado24 = 0 ;
	int quadrado25 = 0 , quadrado26 = 0 , quadrado27 = 0 , quadrado28 = 0 , quadrado29 = 0 , quadrado30 = 0 ;
	int total_quadrados = 0 ;
	int j1 = 0, j2 = 1;
	int last_move = 0;
	int end_game = 0;

	while (total_quadrados != 25)	//Enquanto o número de quadrados fechados for diferente de 25 executará esse laço.
	{		
		cout << "Jogo do Pontinho:       " << endl;
		cout << "   1   2   3   4   5   6" << endl;
		cout << " +---+---+---+---+---+---+" << endl;
		cout << "1| "
			 << "*" << setw(2) << l1 << " *" << setw(2) << l2 << " *" << setw(2) << l3 << " *" << setw(2) << l4 << " *" << setw(2) << l5 << " *" << setw(2) << "|" << endl;
		cout << " +" << setw(2) << col1 << setw(4) << col2 << setw(4) << col3 << setw(4) << col4 << setw(4) << col5 << setw(4) << col6 << setw(2) << "+" << endl;
		cout << "2| "
			 << "*" << setw(2) << l6 << " *" << setw(2) << l7 << " *" << setw(2) << l8 << " *" << setw(2) << l9 << " *" << setw(2) << l10 << " *" << setw(2) << "|" << endl;
		cout << " +" << setw(2) << col7 << setw(4) << col8 << setw(4) << col9 << setw(4) << col10 << setw(4) << col11 << setw(4) << col12 << setw(2) << "+" << endl;
		cout << "3| "
			 << "*" << setw(2) << l11 << " *" << setw(2) << l12 << " *" << setw(2) << l13 << " *" << setw(2) << l14 << " *" << setw(2) << l15 << " *" << setw(2) << "|" << endl;
		cout << " +" << setw(2) << col13 << setw(4) << col14 << setw(4) << col15 << setw(4) << col16 << setw(4) << col17 << setw(4) << col18 << setw(2) << "+" << endl;
		cout << "4| "
			 << "*" << setw(2) << l16 << " *" << setw(2) << l17 << " *" << setw(2) << l18 << " *" << setw(2) << l19 << " *" << setw(2) << l20 << " *" << setw(2) << "|" << endl;
		cout << " +" << setw(2) << col19 << setw(4) << col20 << setw(4) << col21 << setw(4) << col22 << setw(4) << col23 << setw(4) << col24 << setw(2) << "+" << endl;
		cout << "5| "
			 << "*" << setw(2) << l21 << " *" << setw(2) << l22 << " *" << setw(2) << l23 << " *" << setw(2) << l24 << " *" << setw(2) << l25 << " *" << setw(2) << "|" << endl;
		cout << " +" << setw(2) << col25 << setw(4) << col26 << setw(4) << col27 << setw(4) << col28 << setw(4) << col29 << setw(4) << col30 << setw(2) << "+" << endl;
		cout << "6| "
			 << "*" << setw(2) << l26 << " *" << setw(2) << l27 << " *" << setw(2) << l28 << " *" << setw(2) << l29 << " *" << setw(2) << l30 << " *" << setw(2) << "|" << endl;
		cout << " +---+---+---+---+---+---+" << endl;

	while(last_move > 0)	//Enquanto last_move for maior que zero testará as possibilidades
	{						//de ter um quadrado fechado para pontuar.
	
		if (l1 == '-' && col1 == '|' && col2 == '|' && l6 == '-' && quadrado1 == 0) // Testando cada possibilidade de quadrado.
		{
			if (j1 == 1)
			{
				pontuacao1++;	//Pontuação jogador 1 incrementa se a condição for satisfeita.
			}
			else
			{
				pontuacao2++;	//Pontuação jogador 2 incrementa se não for satisfeita.
			}
			quadrado1 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |" << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l2 == '-' && col2 == '|' && col3 == '|' && l7 == '-' && quadrado2 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado2 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"	 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l3 == '-' && col3 == '|' && col4 == '|' && l8 == '-' && quadrado3 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado3 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l4 == '-' && col4 == '|' && col5 == '|' && l9 == '-' && quadrado4 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado4 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l5 == '-' && col5 == '|' && col6 == '|' && l10 == '-' && quadrado5 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado5 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l6 == '-' && col7 == '|' && col8 == '|' && l11 == '-' && quadrado6 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado6 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l7 == '-' && col8 == '|' && col9 == '|' && l12 == '-' && quadrado7 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado7 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l8 == '-' && col9 == '|' && col10 == '|' && l13 == '-' && quadrado8 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado8 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l9 == '-' && col10 == '|' && col11 == '|' && l14 == '-' && quadrado9 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado9 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l10 == '-' && col11 == '|' && col12 == '|' && l15 == '-' && quadrado10 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado10 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l11 == '-' && col13 == '|' && col14 == '|' && l16 == '-' && quadrado11 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado11 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l12 == '-' && col14 == '|' && col15 == '|' && l17 == '-' && quadrado12 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado12 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l13 == '-' && col15 == '|' && col16 == '|' && l18 == '-' && quadrado13 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado13 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l14 == '-' && col16 == '|' && col17 == '|' && l19 == '-' && quadrado14 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado14 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l15 == '-' && col17 == '|' && col18 == '|' && l20 == '-' && quadrado15 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado15 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l16 == '-' && col19 == '|' && col20 == '|' && l21 == '-' && quadrado16 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado16 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l17 == '-' && col20 == '|' && col21 == '|' && l22 == '-' && quadrado17 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado17 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l18 == '-' && col21 == '|' && col22 == '|' && l23 == '-' && quadrado18 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado18 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l19 == '-' && col22 == '|' && col23 == '|' && l24 == '-' && quadrado19 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado19 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l20 == '-' && col23 == '|' && col24 == '|' && l25 == '-' && quadrado20 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado20 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l21 == '-' && col25 == '|' && col26 == '|' && l26 == '-' && quadrado21 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado21 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l22 == '-' && col26 == '|' && col27 == '|' && l27 == '-' && quadrado22 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado22 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l23 == '-' && col27 == '|' && col28 == '|' && l28 == '-' && quadrado23 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado23 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l24 == '-' && col28 == '|' && col29 == '|' && l29 == '-' && quadrado24 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado24 = 1;
			last_move = 0;	//Libera a próxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}
		if (l25 == '-' && col29 == '|' && col30 == '|' && l30 == '-' && quadrado25 == 0)
		{
			if (j1 == 1)
			{
				pontuacao1++;
			}
			else
			{
				pontuacao2++;
			}
			quadrado25 = 1;
			last_move = 0;	//Libera a proxima jogada.
			total_quadrados++;
			cout << "PLACAR: JOGADOR 1 = " << pontuacao1 << " pontos |"
				 << " JOGADOR 2 = " << pontuacao2 << " pontos." << endl;
		}

		if(j1 == 1)
		{
			j1 = 2;
			j2 = 0;
		}
		else if(j2 == 1)
		{
			j1 = 0;
			j2 = 1;
		}
		last_move = 0;	//Libera a proxima jogada.
	}
		while (j1 == 0 && total_quadrados != 25)	//Enquanto o total de quadrados for diferente de 25 executa o laço e j1 for igual a zero.
		{
			cout << "Vez do jogador 1: para preencher na horizontal digite 1, na vertical 2: " << endl;
			cin >> jogador1;
			if (jogador1 == 1)	//Se o jogador1 escolher a opção 2 cairá nessa escolha abaixo.
			{
				cout << "Digite um numero da vertical e depois dois da horizontal JUNTOS e na ORDEM: " << endl;
				cin >> escolha;
				switch (escolha)
				{
					
				case 112:
					if (l1 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l1 = '-';
						j1++;
					}
					last_move = 1;
					break;
				case 123:
					if (l2 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l2 = '-';
						j1++;
					}
					last_move = 1;
					break;
				case 134:
					if (l3 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l3 = '-';
						j1++;
						last_move = 1;;
					}
					break;
				case 145:
					if (l4 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l4 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 156:
					if (l5 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l5 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 212:
					if (l6 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l6 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 223:
					if (l7 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l7 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 234:
					if (l8 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l8 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 245:
					if (l9 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l9 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 256:
					if (l10 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l10 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 312:
					if (l11 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l11 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 323:
					if (l12 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l12 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 334:
					if (l13 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l13 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 345:
					if (l14 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l14 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 356:
					if (l15 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l15 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 412:
					if (l16 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l16 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 423:
					if (l17 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l17 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 434:
					if (l18 == '-')
						cout << "Posição inválida! Digite outra: "  << endl;
					else
					{
						l18 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 445:
					if (l19 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l19 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 456:
					if (l20 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l20 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 512:
					if (l21 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l21 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 523:
					if (l22 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l22 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 534:
					if (l23 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l23 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 545:
					if (l24 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l24 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 556:
					if (l25 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l25 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 612:
					if (l26 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l26 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 623:
					if (l27 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l27 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 634:
					if (l28 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l28 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 645:
					if (l29 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l29 = '-';
						j1++;
						last_move = 1;
					}
					break;
				case 656:
					if (l30 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l30 = '-';
						j1++;
						last_move = 1;
					}
					break;
				default:
					cout << "Opção inválida!" << endl;
				}
			}
			if (jogador1 == 2)	//Se o jogador1 escolher a opção 2 cairá nessa escolha abaixo.
			{
				cout << "Digite um numero da horizontal e depois dois da vertical JUNTOS: " << endl;
				cin >> escolha;
				switch (escolha)
				{
				case 112:
					if (col1 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col1 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 212:
					if (col2 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col2 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 312:
					if (col3 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col3 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 412:
					if (col4 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col4 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 512:
					if (col5 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col5 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 612:
					if (col6 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col6 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 123:
					if (col7 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col7 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 223:
					if (col8 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col8 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 323:
					if (col9 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col9 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 423:
					if (col10 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col10 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 523:
					if (col11 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col11 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 623:
					if (col12 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col12 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 134:
					if (col13 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col13 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 234:
					if (col14 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col14 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 334:
					if (col15 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col15 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 434:
					if (col16 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col16 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 534:
					if (col17 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col17 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 634:
					if (col18 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col18 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 145:
					if (col19 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col19 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 245:
					if (col20 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col20 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 345:
					if (col21 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col21 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 445:
					if (col22 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col22 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 545:
					if (col23 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col23 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 645:
					if (col24 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col24 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 156:
					if (col25 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col25 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 256:
					if (col26 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col26 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 356:
					if (col27 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col27 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 456:
					if (col28 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col28 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 556:
					if (col29 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col29 = '|';
						j1++;
						last_move = 1;
					}
					break;
				case 656:
					if (col30 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col30 = '|';
						j1++;
						last_move = 1;
					}
					break;
				default:
					cout << "Opção inválida!" << endl;
				}
			}
		}
		while (j2 == 0 && total_quadrados != 25)	//Enquanto o total de quadrados for diferente de 25 executa o laço e j1 for igual a zero.
		{
			cout << "Vez do jogador 2: para preencher na horizontal digite 1, na vertical 2: " << endl;
			cin >> jogador2;
			if (jogador2 == 1)	//Se o jogador2 escolher a opção 1 cairá nessa escolha abaixo.
			{
				cout << "Digite um numero da vertical e depois dois da horizontal JUNTOS e na ORDEM: " << endl;
				cin >> escolha;
				switch (escolha)
				{
				case 112:
					if (l1 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l1 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 123:
					if (l2 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l2 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 134:
					if (l3 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l3 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 145:
					if (l4 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l4 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 156:
					if (l5 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l5 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 212:
					if (l6 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l6 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 223:
					if (l7 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l7 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 234:
					if (l8 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l8 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 245:
					if (l9 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l9 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 256:
					if (l10 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l10 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 312:
					if (l11 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l11 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 323:
					if (l12 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l12 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 334:
					if (l13 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l13 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 345:
					if (l14 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l14 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 356:
					if (l15 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l15 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 412:
					if (l16 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l16 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 423:
					if (l17 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l17 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 434:
					if (l18 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l18 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 445:
					if (l19 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l19 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 456:
					if (l20 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l20 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 512:
					if (l21 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l21 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 523:
					if (l22 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l22 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 534:
					if (l23 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l23 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 545:
					if (l24 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l24 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 556:
					if (l25 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l25 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 612:
					if (l26 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l26 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 623:
					if (l27 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l27 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 634:
					if (l28 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l28 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 645:
					if (l29 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l29 = '-';
						j2++;
						last_move = 1;
					}
					break;
				case 656:
					if (l30 == '-')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						l30 = '-';
						j2++;
						last_move = 1;
					}
					break;
				default:
					cout << "Opção inválida!" << endl;
				}
			}
			if (jogador2 == 2)	//Se o jogador2 escolher a opção 2 cairá nessa escolha abaixo.
			{
				cout << "Digite um numero da horizontal e depois dois da vertical JUNTOS: " << endl;
				cin >> escolha;
				switch (escolha)
				{
				case 112:
					if (col1 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col1 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 212:
					if (col2 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col2 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 312:
					if (col3 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col3 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 412:
					if (col4 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col4 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 512:
					if (col5 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col5 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 612:
					if (col6 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col6 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 123:
					if (col7 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col7 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 223:
					if (col8 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col8 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 323:
					if (col9 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col9 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 423:
					if (col10 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col11 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 523:
					if (col11 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col11 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 623:
					if (col12 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col12 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 134:
					if (col13 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col13 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 234:
					if (col14 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col14 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 334:
					if (col15 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col15 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 434:
					if (col16 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col16 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 534:
					if (col17 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col17 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 634:
					if (col18 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col18 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 145:
					if (col19 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col19 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 245:
					if (col20 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col20 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 345:
					if (col21 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col21 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 445:
					if (col22 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col22 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 545:
					if (col23 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col23 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 645:
					if (col24 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col24 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 156:
					if (col25 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col25 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 256:
					if (col26 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col26 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 356:
					if (col27 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col27 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 456:
					if (col28 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col28 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 556:
					if (col29 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col29 = '|';
						j2++;
						last_move = 1;
					}
					break;
				case 656:
					if (col30 == '|')
						cout << "Posição inválida! Digite outra: " << endl;
					else
					{
						col30 = '|';
						j2++;
						last_move = 1;
					}
					break;
				default:
					cout << "Opção inválida!" << endl;
				}
			}
		}	
}

	if(total_quadrados == 25)	// Se 25 quadrados forem preenchidos o jogo encerrará.
	{
		end_game = 1;
		cout << "Fim de jogo!" << endl;
		if(pontuacao1 > pontuacao2)	 //Condição para saber quem ganhou e mostrar em texto.
			cout << "Jogador 1 venceu!" << endl;
			else{
				cout << "Jogador 2 venceu!" << endl;
		}
	}	
}
