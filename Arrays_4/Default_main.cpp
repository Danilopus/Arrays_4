#include <iostream>
#include <algorithm>
#include <ctime>;


int Get_Int();
int Get_Dbl();

int Random_Number_Int(int Range_min, int Range_max) 
{
	//srand(time(NULL));
	return Range_min + rand() % (Range_max - Range_min + 1); 
}

int main()
{
	const int Size = 20;
	int Summ = 0;
	int Test_Array[Size];
	std::cout << "Range limit low ";
	int Low_Range_Limit = Get_Int();
	std::cout << "Range limit high ";
	int High_Range_Limit = Get_Int();
	srand(time(NULL));
	for (int i = 0; i < Size; i++)
	{
		Test_Array[i] = Random_Number_Int(0, 100-1);
		if (Test_Array[i] >= Low_Range_Limit && Test_Array[i] <= High_Range_Limit)
		{
			std::cout << "Test_Array[" << i+1 << "] " << Test_Array[i] << "!\n";
		}
		else
		{
			std::cout << "Test_Array[" << i+1 << "] " << Test_Array[i] << "\n";
		}
	}
	
	//Bubble sorting
	//for (int i = Size/2-1; i > 0; i--)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		if (Test_Array[j] > Test_Array[j + 1])
	//			std::swap(Test_Array[j], Test_Array[j + 1]);
	//	}
	//}

	//Fast sort

	//std::sort(std::begin(Test_Array), std::end(Test_Array));
	//std::sort(Test_Array, Test_Array+Size/2);
	/*
	std::cout << "\n\nHow many days temp under ";
	int User_Input = Get_Int(), Days_Counter=0;

	for (int i = 0; i < Size; i++)
	{
		if (Test_Array[i] < User_Input)
		{
			Days_Counter++;
		}
	}
	std::cout << "\n\nAverage temp " << double(Summ)/Size <<"\n\n" << Days_Counter << " days temp under " << User_Input;
	*/
	
	
	std::cout << "\n\n";
	system("pause");
	return 0;
}

int Get_Int()
{
	int a;
	while (!(std::cin >> a) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "[Input error! Integer expected]\n";
	}
	return a;
}
int Get_Dbl()
{
	double a;
	while (!(std::cin >> a) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "[Input error! Integer expected]\n";
	}
	return a;
}