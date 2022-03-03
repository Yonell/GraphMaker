#include <iostream>
#include <fstream>

std::ofstream wyj;

int main()
{
	wyj.open("graph.txt");
	int n;
	std::cout << "How many nodes does the graph have?" << std::endl;
	std::cin >> n;
	wyj << n << std::endl;
	for (int i = 0; i < n; i++)
	{
		wyj << i << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << "Which nodes is the node " << i << " connected to? (type -1 when you're done)" << std::endl;
		int buffer;
		std::cin >> buffer;
		while (buffer >= 0)
		{
			wyj << i << " " << buffer << std::endl;
			std::cin >> buffer;
		}
	}


	return 0;
}