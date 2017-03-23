#include <iostream>



using namespace std;

void factoresPrimos(int param)
{
	while (param > 0)
	{
		int temp = param % 2;
		if (temp != 1)
		{
			int primo = param / 2;
			cout << primo << endl;
		}
		 param= param/2;
	}
	
}

int main()
{
	int numero = 13195;
    int  numero2 = 20;

	factoresPrimos(numero);

	/*float temp = numero2 % 2;
	cout << temp << endl;*/
	

	

	

	return 0;
}