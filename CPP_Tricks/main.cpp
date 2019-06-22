#include <iostream>
#include <chrono>
#include "EnumerationCounting.h"
#include "PassingObjectsAnonymously.h"

using tclock = std::chrono::high_resolution_clock;
using timestamp = tclock::time_point;

	/*timestamp start = tclock::now();

	std::cout << "printing out 1000 stars...\n";
	for (int i = 0; i<1000; ++i) std::cout << "*";
	std::cout << std::endl;

	timestamp current = tclock::now();

	std::chrono::duration<double, std::milli> time_span = current - start;

	std::cout << "It took me " << time_span.count() << " milliseconds.";
	std::cout << std::endl;*/

int main(int argc, char *argv[])
{
	int a = 0x45464748;
	char* b = (char*)&a;
	for(int i=0; i<sizeof(a); i++)
	{
		std::cout << (short)*b++ << "\n";
	}
	//std::cout << sizeof(a) << "\n";
	/*std::cout << (short)b[0] << "\n";
	std::cout << (short)b[1] << "\n";
	std::cout << (short)b[2] << "\n";
	std::cout << (short)b[3] << "\n";*/
	//std::cout << (short)*(b += 3) << "\n";
	std::cout << COUNT << "\n";
	unsigned int max = UINT_MAX;
	int frame = 0;
	int total_frames = 6;
	/*for(unsigned int i = 0; i < max; i++)
	{
		//std::cout << "i is " << i << "\n";
		if(i % 10000000 == 0)
		{
			std::cout << "i is " << i << "\n";
		}
	}*/
	const int WIDTH = 50;
	const int HEIGHT = 50;
	char map[WIDTH * HEIGHT];
	std::fill_n(map, WIDTH * HEIGHT, '*');
	map[0] = '1';
	map[1 * WIDTH + 0] = '2';
	map[2 * WIDTH + 0] = '3';
	map[2 * WIDTH + 5] = 'C';
	map[(HEIGHT-1) * WIDTH + 0] = 'E';
	for (unsigned int i = 0; i < WIDTH * HEIGHT; i++)
	{
		if (i % WIDTH == 0 && i > 0) std::cout << "\n";
		std::cout << map[i] << " ";
	}
	std::cout << "max integer is " << max << "\n";
	std::cout << "max interger is now " << ++max << "\n";
	system("pause");
	return 0;
}

void test_func(MyStruct s)
{
	std::cout << s.a << "\n";
	std::cout << s.b << "\n";
}

void cpu_cycles()
{
	int num = 0;

	timestamp start = tclock::now();
	timestamp current;
	std::chrono::duration<double, std::milli> time_span;
	do
	{
		num++;
		current = tclock::now();
		time_span = current - start;
	} while (time_span.count() < 1);

	std::cout << "num is " << num << "\n";
}
