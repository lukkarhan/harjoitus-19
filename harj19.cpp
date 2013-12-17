/*
Tehtävä: Harjoitus 19
Tekijä: Hanna Lukkarinen, IIO13S1
Pvm: 15.12.2013

Kuvaus:
Tee ohjelma, joka toimii auton nopeusmittarina.
Periaate on seuraava: Näppäimistä toimii
nopeusanturina ja näyttä mittarin näyttänä.
Nopeusmittari laskee viiden viimeisen nopeuden
keskiarvon ja tulostaa sen nykyisenä nopeutena
näytälle. Negatiivinen nopeus lopettaa ohjelman.
Toiminta on siis seuraava:
Ohjelman kaynnistyksessa mittari näyttää nolla
0
0
0
0
0 (alkutila) nopeus = 0 km/h
Anna nopeus: 10 => 2 km/h
Anna nopeus: 20 => 6 km/h
Anna nopeus: 30 => 12 km/h
Anna nopeus: 40 => 20 km/h
Anna nopeus: 50 => 30 km/h
Anna nopeus: 50 => 38 km/h
Anna nopeus: 50 => 44 km/h
Anna nopeus: 50 => 48 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: -5 => loppu

Toteuta kayttaen taulukkoa.*/


#include <iostream>
using namespace std;

int main ()
{
	int nopeus[5]={0,0,0,0,0};
	int ind = 0;
	int keskiarvo;

	while (true==true)
	{
		cout<<"Anna nopeus: ";
		cin>>nopeus[ind];
		if (nopeus[ind] < 0)
		{
			break;
		}
		keskiarvo=(nopeus[0]+nopeus[1]+nopeus[2]+nopeus[3]+nopeus[4])/5;
		cout<<keskiarvo<<" km/h"<<endl;
		ind++;
		if (ind > 4)
		{
			ind = 0;
		}
	}
}