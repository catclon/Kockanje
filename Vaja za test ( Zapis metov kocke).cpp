#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
	// Dekleriranje spremenljivk
	srand(time(0));
	int i, vsotaKock = 0, metKocke = 0, stMetov = 0;
	ofstream kocka("metKocke.txt");

	// Vnos stevilo metov
	cout << "Vpisite stevilo metov: ";
	cin >> stMetov;
	cout << endl;
	
	// Zanka for generira nakljucen razultat kocke, ter jo zapise v datoteko "metKocke.txt"
	for (i = 1; i <= stMetov; i++) { 
		metKocke = rand ()%  6 + 1;
		cout << i << ". Nakljucen met kocke: " << metKocke << endl;
		cout << "----------------" << endl;
		vsotaKock += metKocke;
		kocka << metKocke << " "; 
	}
	cout << "Vsota metov kock je: " << vsotaKock;
}

