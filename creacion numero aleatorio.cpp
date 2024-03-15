#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int aleatorio=0; cout<<endl<<endl;
	cout<<
	"programa para generar 10 numeros aleatorios\n";
	for(int i=1; i<11;i++)
	{
		aleatorio=rand()%7;
		cout<<"el numero "<<i<<" generado es: "<<aleatorio<<endl; 
	}
	getch();
	return 0;
}



