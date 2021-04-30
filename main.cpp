#include<iostream>
#include <string>

using namespace std;

int main()
{

	int array1[] = { 2,5,6,3,1,4,7 };
	int array2[] = { 2,5,6,3,4,1,7 };

	int *pArray1 = array1;
	int *pArray2 = array2;

	//pArray1 = pArray2;

	//cout <<* pArray1 << endl;
	//	cout <<*(pArray2 +2) << endl;

	    cout << array1[5] << endl;
		cout << array2[1] << endl;

		//cout << *pArray1[0] << endl;
		//cout << *pArray2[1] << endl;

		for (int i = 0; i < 7; i++)
		{
			cout  << *(array1 + i) << "    " << array1[i] << endl;

		}

	return 0;
}