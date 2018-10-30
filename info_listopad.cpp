#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "pch.h"
#include <iostream>





int main(void) {

	setlocale(LC_ALL, ""); //Polskie znaki bez tego nie działają


	// Chciałem pozwolic uzytkownikowi na uruchamianie wszystkich zadañ w obrebie jednego pliku wiec zrobiłem to uzywajac switch i case
	int zadanie = 1;
	
	while (zadanie != 0)
	{
		printf("Wprowadź numer zadania do uruchomienia (od 1 do 20), wprowadz 0 zeby wyjsc.\n");
		scanf("%d", &zadanie);
		switch (zadanie) {

			//1.1. Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran.
		case 1:
			printf("Zadanie 1_1\n");
			{
				int a = 14;
				float b = 1.3;
				char c = 'c';
				printf("int=%d,float=%f,char=%c\n", a, b, c);
				break;
			}


			//1.2. Wyœwietliæ zmienn¹ typu int na ekran. Nale¿y u¿yæ metody printf i konstrukcji %d
		case 2:
			printf("Zadanie 1_2\n");
			{
				int a = 10;
				printf("int=%d\n", a);
				break;
			}

			//1.3. Pobrać od użytkownika liczbę x. Wyświetlić kwadrat liczby x.
		case 3:
			printf("Zadanie 1_3\n");
			{
				int x = 0;
				printf("Wprowadź liczbę do skwadracenia.\n");
				scanf("%d", &x);
				printf("x=%d\n", x*x);
				break;
			}

			//1.4. Zapoznać się z instrukcjami warunkowymi (if, else if, else oraz switch). Pobrać od używkownika liczbę i wyświetlić informację, czy jest
		   //ona: mniejsza, większa, czy równa 0.

		case 4:
			printf("Zadanie 1_4\n");
			{
				int x = 0;
				printf("Podaj liczbę.\n");
				scanf("%d", &x);
				if (x < 0)
				{
					printf("Liczba mniejsza od 0\n");
				}
				else if (x = 0)
				{
					printf("Liczba równa 0\n");
				}
				else
				{
					printf("Liczba większa od 0\n");
				}
				break;
			}

			//1.5. Pobrać ud użytkownika 3 liczby (x1, x2, x3). Wyświetlić informację, która z tych liczb jest największa.

		case 5:
			printf("Zadanie 1_5\n");
			{
				int x, y;
				printf("Podaj pierwsza liczbe\n");
				scanf("%d", &x);
				for (int i = 0; i < 2; i++)             //nie chciałem tego robić if else
				{
					printf("Podaj następną liczbe\n");
					scanf("%d", &y);
					if (y > x)
					{
						x = y;
					}
				}
				printf("Największa liczba to %d\n", x);

				break;
			}

			//1.6. Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator (jeden z czterech: mnożenie, dzielenie, dodawanie,
			//odejmowanie). Wymagane jest utworzenie prostego menu użytkownika. Uwaga - należy pamiętać o ułamkach (1/3 powinno dać 0.33, a nie
			//0)
		case 6:
			printf("Zadanie 1_6\n");
			{																																	
				int x=0, y=0;				//liczby na ktorych przeprowadzam operacje
				float odp;					//odpowiedz
				char dzialanie=NULL;		//operacja
				while (dzialanie != 'k')	//pętla, kalkulator będzie działał aż wpiszemy k																									
				{
					printf("\nKalkulator, wprowadź rodzaj działania(+,-,/,*), wpisz k żeby wyjść.\n");		//nowa linia na początku pętli, dziwne rzeczy działy się jak \n było w printf odpowiedzi									
					scanf(" %c", &dzialanie);																																																			
						switch (dzialanie)	// switch i case do operacji																										
						{																														
						case '+':																												
						{	
							printf("Wpisz liczby oddzielone spacją\n"); // ten print jest w każdym casie żeby nie powtarzał się jak wpiszemy k lub niepoprawne dzialanie
							scanf("%d %d", &x, &y);
							printf("%d+%d=%f", x, y, odp = (float)x + (float)y);
							break;																												
						}																														
						case '-':																												
						{	
							printf("Wpisz liczby oddzielone spacją\n");
							scanf("%d %d", &x, &y);
							printf("%d-%d=%f", x, y, odp = (float)x - (float)y);
							break;																												
						}																														
						case '/':																												
						{	
							printf("Wpisz liczby oddzielone spacją\n");
							scanf("%d %d", &x, &y);
							printf("%d/%d=%f", x, y, odp =(float)x / (float)y);
							break;
						}
						case '*':
						{	
							printf("Wpisz liczby oddzielone spacją\n");
							scanf("%d %d", &x, &y);
							printf("%d*%d=%f", x, y, odp = (float)x * (float)y);
							break;
						}
						case 'k':
						{	
							printf("Koniec\n");
							break;
						}
						default: printf("Niepoprawne działanie");
							break;
					}
						
				}
				break;

			}																					
			
			/*2. Pętle
			2.1.Zapoznać się z pętlą while.Pętla ta służy do wielokrotnego wykonania fragmentu kodu przez NIEZNANĄ Z GÓRY ilość razy.Pętla
			wykonuje się zawsze, jeśli warunek jest prawdziwy(ewaluowany do true).Napisać pętlę, w któej użytkownik podaje liczbę x.Należy
			wyświetlić tę liczbę.Jeżeli użytkownik poda 0, należy zakończyć program.*/
		case 7:
			printf("Zadanie 2_1\n");
			{
				int x = 1;
				while (x != 0)
				{	
					printf("Podaj liczbę\n");
					scanf("%d", &x);
					printf("Twoja liczba to %d\n", x);
				}
			break;
			}

			/*2.2.Przerobić kalkulator z zadania 1.6.Teraz po każdym działaniu program powinien spytać użytkownika, czy ten chce powtórzyć
			wszystko od początku.Jeśli tak - restartujemy kalkulator i zaczynamy od nowa.Jeśli nie - kończymy program.*/
		case 8:
			printf("Zadanie 2_2\n Zrobiłem kalkulator w ten sposob za pierwszym razem.");
			break;

		case 9:
			//2.3.Pobrać od użytkownika liczbę x.Należy wyświetlić wszystkie kolejne potęgi liczby x.Zakończyć program, kiedy liczba przekroczy 100 000.
			printf("Zadanie 2_3\n");
			{
				long int x,y, i=2;
				printf("Podaj liczbę do spotęgowania.\n");
				scanf("%d", &x);
				y = x;
				while (x<100000)
				{
					x = x * y;
					printf("%d^%d=%d\n", y, i, x);
					i++;
				}
				break;

			}













		case 0: 
		{
			printf("Koniec\n");
			break;
		}
		default: printf("Nie ma takiego zadania.");
			break;
		}
	}
	return 0;
}






