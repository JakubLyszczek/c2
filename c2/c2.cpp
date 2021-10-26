#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//zadania 1-3

	/*
	float a, b, c, delta;

	cout << "Podaj a ", cin >> a;
	cout << "Podaj b ", cin >> b;
	cout << "Podaj c ", cin >> c;

	if (a != 0)
	{
		delta = (b * b) - (4 * a * c);
		if (delta == 0)
		{
			cout << "jedno rozwiazanie, x1= " << -b / (2 * a) << endl;

		}
		else if (delta > 0)
		{
			cout << "dwa rozwiazania: \n";
			cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
			cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
		}
		else
		{
			cout << "brak rozwiazan\n";
		}
	}
	else
	{
		if (b == 0)
		{
			if (c == 0)
				cout << "rownanie tozsamosciowe" << endl;
			else
				cout << "rownanie sprzeczne" << endl;
		}
		else
		{
			cout << "x = " << -b / a;
		}
	}
	*/


	//zadanie 4

	/*
	float x;
	char w;

	cout << "wybierz funkcje a b lub c ";
	cin >> w;
	cout << "podaj wartosc x ";
	cin >> x;

	switch (w)
	{
	case 'a':
		if (x > 0)
		{
			cout << "wynik to: " << 2 - x << endl;

		}
		else if(x==0)
		{
			cout << "wynik to: " << 0 << endl;
		}
		else
		{
			cout << "wynik to: " << -3 * x << endl;
		}
		break;

	case 'b':
		if (x >= 1)
		{
			cout << "wynik to: " << x*x << endl;
		}
		else
		{
			cout << "wynik to: " << x << endl;
		}
		break;


	case 'c':
		if(x>2)
		{
			cout << "wynik to: " << 2 + x << endl;
		}
		else if (x == 2)
		{
			cout << "wynik to: " << 8 << endl;
		}
		else
		{
			cout << "wynik to: " << x - 4 << endl;
		}
		break;

	default:
		cout << "brak funkcji o takiej nazwie";
		break;

	*/

	//zadadnie5
	
	/*
	float a, b, c, min, srod, max;
	cout << "Podaj x y z ";
	cin >> a >> b >> c;
	min = a;
	srod = b;
	max = c;
	if (min > srod) 
	{ 
		srod = a; min = b;
	}
	if (srod > max)
	{
		max = srod;
		srod = c;
		if (min > srod)
		{
				srod = min;
				min = c;
		}
	}
	cout << min << srod << max;
	*/

	//zadadnie6
	/*
	bool pog, aut;
	cout << "Wybierz pogode: \n0 - Pada deszcz\n1 - Nie pada\n";
	cin >> pog;
	cout << "Status autobusu \n0 - Jest autobus\n1 - Nie ma autobusu\n";
	cin >> aut; 
	if (!pog && !aut)
		cout << "Wez parasol, dostaniesz sie na uczelnie";
	else if (!pog && aut)
		cout << "Nie dostaniesz sie na uczalnie";
	else
		if(pog && !aut)
		cout << "Dostaniesz sie na uczelnie, milego dnia i pieknej pogody";
		else
		cout << "Nie dostaniesz sie na uczelnie";
	*/

	//zadanie7

	bool zni, pre;
	cout << "Znizka na samochod \n0 - Nie\n1 - Tak\n";
	cin >> zni;
	cout << "Premia \n0 - Nie\n1 - Tak\n";
	cin >> pre;
	if (!zni || pre)
		cout << "Możesz kupic samochod! Znizki na samochod nie ma :( ";
	else if (!zni || !pre)
		cout << "Zakup samochód trzeba odlozyc na pozniej...   Zniżki na samochód nie ma";
	else
		if (zni || pre)
			cout << "Mozesz kupić samochod !";
		else
			cout << "Zadanie nie precuzyje wyniku";
}