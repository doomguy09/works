#include "stdafx.h"
#include <fstream>
#include <iostream>


int main()
{
	char fname1[100], fname2[100];
	std::cout << "Put the first file's name: "; 
	std::cin.getline(fname1, 100); 
	std::cout << "Put the second file's name: ";
	std::cin.getline(fname2,100);
		
	std::ofstream fout;
	fout.open(fname1);
	if (!fout) {
		std::cout << "Can't open file!";
	}
	else {
		for(int i = 0; i < 100; ++i)
		fout << rand()%100<<" ";
	}
	fout.close();
	std::ifstream fin; 
	fin.open(fname1); fout.open(fname2);
	if (!fin) {
		std::cout << "Can't open file!";
	}
	else {
		char ch;
		while (fin.get(ch)) {
			fout << ch;
			
		}
	}
	fin.close(); fout.close();

}
