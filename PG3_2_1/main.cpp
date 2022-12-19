#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;


int main() {
	std::list<const char*>yamatelist{
	"Komagome","Tabata","Nippori","Uguisudani","Ueno","Okachimachi","Akihabara",
	"Kanda","Tokyo","Yurakucho","Shimbashi","Hamamatsucho","Tamachi",
	"Shinagawa","Osaki","Gotanda","Meguro","Ebisu","Shibuya","Harajuku","Yoyogi",
	"Shinjuku","Shin-Okubo","Takadanobaba","Mejiro","Ikebukuro","Otsuka","Sugamo"
	};

	printf("1970”N\n");

	for (std::list<const char*>::iterator itr = yamatelist.begin(); itr != yamatelist.end(); ++itr)
	{
		cout << *itr << "|";
	}

	for (std::list<const char*>::iterator itr = yamatelist.begin(); itr != yamatelist.end(); ++itr)
	{
		if (strcmp(*itr,"Nippori")==0) {
			itr = yamatelist.insert(itr, "Nishinippori");
			++itr;
		}
	}
	printf("2019”N\n");
	for (std::list<const char*>::iterator itr = yamatelist.begin(); itr != yamatelist.end(); ++itr)
	{
		cout << *itr << "|";
	}
	for (std::list<const char*>::iterator itr = yamatelist.begin(); itr != yamatelist.end(); ++itr)
	{
		if (strcmp(*itr,"Shinagawa")==0) {
			itr = yamatelist.insert(itr, "TakanawaGateway");
			++itr;
		}
	}
	printf("\n2022”N\n");
	for (std::list<const char*>::iterator itr = yamatelist.begin(); itr != yamatelist.end(); ++itr)
	{
		cout << *itr << "|";
	}

}