// Lab9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "List.h"

int main(){
	List<int> ilst;
	List<double> dlst;
	ilst.Add(1);
	ilst.Add(2);
	ilst.Add(3);
	ilst.Add(4);
	ilst.Show();
	dlst.Add(1.2);
	dlst.Add(2.4);
	dlst.Add(3.12);
	dlst.Add(4.39);
	dlst.Show();
	getchar();
	return 0;
}