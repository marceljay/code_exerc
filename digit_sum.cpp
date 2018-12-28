
#include<iostream>
#include<cmath>

using namespace std;

int check()
{
	int number;
	bool cond= false;

	do 
	{		
		fflush(stdin);	// Delete Keyboard buffer
		cin.clear();	// Delete cin buffer
		cin >> number;

		if(cin.fail()==true)
			cout << "Not a valid number, please try again" << endl;
		else
		{
			cond=true;
		}

	} while (cond==false);

	return number;
}


int main()
{

    	int z;
	int constNR;
	int m;
	int q=0;




	cout<<"---------Cross Sum----------" << endl;
 	cout<<"Enter a whole number:" << endl;

	z = constNR = check();

	do 
	{

	m = z%10;							// z Modulo 10 = gives you last cipher
	q=q+m;								// cross sum
	z = z/10;							// z / 10 = delete cipher after comma (int)
	
	
	} while(z!=z%10);						

	q=q+z;								// Loop ends when z == z mod 10
	cout << "The cross sum of "<< constNR << " is:"<< q <<endl;
	system("pause");

return 0;
}
