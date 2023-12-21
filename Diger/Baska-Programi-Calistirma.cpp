#include "stdafx.h"
#include <cstdlib>

int main()
{
	//pencereler sirasiyla acilacak birisi kapaninca digeri acilacak
	//butun pencereler kapaninca programda kapanacak
	//Her '\' karakterinden once ekstradan bir tane daha '\' karakteri yazilmali
	system("c:\\Merhaba.exe");

	system("c:\\test\\Merhaba.exe");
	
	//bosluk iceren klasorler týrnaklar icerisine alinacak
	//ayrica ekstradan yazilan her tirnak isaretinden once '\' karakteri yazilmali
	system("c:\\\"Program Files\"\\Merhaba.exe");

    return 0;
}