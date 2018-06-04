// Singleton.cpp : Defines the entry point for the console application.
// Sample program for singleton pattern

#include "RepositoryManager.h"
#include "iostream"
int main(int argc, char* argv[])
{
	
	int totalValueInput;
	std::cout << "Input total value" << std::endl;
	std::cin >> totalValueInput;
	RepositoryManager::instance()->setTotalValue(totalValueInput);
	std::cout << "Total  value from Singleton Class: " << RepositoryManager::instance()->getTotalValue() << std::endl;
	return 0;
}

