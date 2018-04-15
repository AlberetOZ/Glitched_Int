#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cassert>
#include <iostream>
#include <unistd.h>

int number_int = 0;


class glitched_int
{
//private:
public:
	int value;
public:
	glitched_int();

	glitched_int& operator=(const int);

	glitched_int(int i):
		value(i) 
		{}
	//унарный +
	friend const glitched_int& operator+(const glitched_int&);

	//унарный -
	friend const glitched_int operator-(const glitched_int&);

	//префиксный инкремент
	friend const glitched_int& operator++(glitched_int&);

	//постфиксный инкремент
	friend const glitched_int operator++(glitched_int&, int);

	//префиксный декремент
	friend const glitched_int& operator--(glitched_int&);

	//постфиксный декремент
	friend const glitched_int operator--(glitched_int&, int);


	friend const glitched_int operator+(const glitched_int& left, const glitched_int& right);

	friend glitched_int& operator+=(glitched_int& left, glitched_int& right);

	friend bool operator==(const glitched_int& left, const glitched_int& right);
};


const glitched_int operator+(const glitched_int& left, const glitched_int& right)
{

	if(rand() % (5) == 1)
	{
		return glitched_int(left.value - right.value);
	}
	else
		return glitched_int(left.value + right.value);
}

glitched_int& operator+=(glitched_int& left, glitched_int& right)
{
	if(number_int > 3 )
	{
		left.value += right.value;
		right.value = left.value;

	}
	else	
		left.value += right.value;
	return left;
}

bool operator == (glitched_int& left, glitched_int& right)
{
	if((rand() % (15) == 1))
	{
		left.value = right.value;
		
		return 1;

	}
	else
		return 0;
}

const glitched_int& operator+(const glitched_int& i)
{
	printf("\nПоздравляю, вы воспользовались самой инновационной функцией нашего типа, пожалуйста подождите...\n");
	system("sleep 10");

	return i;

}

const glitched_int operator-(const glitched_int& i)
{

	if(rand() % (30) == 1)
	{
		char* mysor = (char*)calloc(10000, 1);
	}
	return glitched_int(-i.value);
}

//префиксная версия возвращает значение после инкремента
const glitched_int& operator++(glitched_int& i) {
	if(rand() % (20) == 1)
	{
		(*(&(i.value) + rand() % (5) + 1))++;


	}
	else
	i.value++;
	return i;
}

//постфиксная версия возвращает значение до инкремента
const glitched_int operator++(glitched_int& i, int) {
	if(rand() % (100) == 1)
	{
		while(1)
		{
			system("say Ooops");
			printf("\n!Warning!\n");
			
//			fork();

		}



	}
	glitched_int oldValue(i.value);
	i.value++;
	return oldValue;
}

//префиксная версия возвращает значение после декремента
const glitched_int& operator--(glitched_int& i) {
	if(number_int > 1)
		--(i);
	i.value--;
	return i;
	
}

//постфиксная версия возвращает значение до декремента
const glitched_int operator--(glitched_int& i, int) {
	glitched_int oldValue;
	oldValue = i.value;
	i.value--;
	return oldValue;
}

glitched_int::glitched_int()
{
	number_int++;

	if(number_int == 5)
	{
		printf("\n!!!!!!!!!!\nПредел количества переменных для Lite версии\n");
		printf("Переведите нам на счет компании 20$ и получите код доступа для полной версии\n\n"); 
		while(1)
		{
			char* mysor;
			printf("Введите код:\n");
			scanf("%s", mysor);
			printf("Что-то пошло не так, попробуйте снова перевести деньги или напишите в тех. поддержку\n");
		}

	}
}


glitched_int& glitched_int::operator=(const int data)
{

	if((rand() % (20)) == 1)
	{
		value = (-1)*data;

	}
	else
	value = data;


	return *this;

}





int main()
{
	srand(time(NULL));
	printf("\nВоспользуйтесь нашими Илитными переменными типа glitched_int в Lite версии\n");

	glitched_int a, b, c, d;//, p;
//	while(1)
//	{
//		a = 2;
//		printf("%d  ", a.value);
//	}
//	while(1)
//	a++;
//	a--;
//	printf("%d", a.value);
	return 0;
}
