/*            Resete de Spool local SAP      */
/*		Gupo Multi 23/01/2023             */
/*	Frederico Almeida - Analista de Suporte Jr */


#include<iostream>
#include <windows.h> 
using namespace std;

int main(){
	
	ShowWindow(GetConsoleWindow(), SW_HIDE); // esconder prompt de comando
	
	system("net stop spooler");
	system("del /Q /F /S \"%systemroot%\\System32\\spool\\printers\\*.*\"");
	system("net star spooler");
	system("net start SAPSprint");
	
	
	return 0;
	
}
