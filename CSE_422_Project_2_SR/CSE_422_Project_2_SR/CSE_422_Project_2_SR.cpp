// CSE_422_Project_2_SR.cpp : Defines the entry point for the console application.
//
#include "..\..\sr.c"
#include "stdafx.h"

#include <iostream>
using namespace std;

int main()

{
	struct pkt test;
	test.seqnum = 0;
	test.acknum = 0;
	for (int i = 0; i < 20; i++)
	{
		test.payload[i] = "ABCDEFGHIJKLMNOPQRS"[i];
	}
	test.checksum = ComputeChecksum(test);
	cout << test.checksum << endl;
}

