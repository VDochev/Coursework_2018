#include "stdafx.h"
#include "Header.h"

int main(int argc, const byte *argv[])
{
	int errNum = 0;
	if (argc >= 0)
	{
		errNum = InitiationProcess(argv[1]);
		PoliceReport(errNum);
	}
	else
	{
		printf("The book of the innkeeper is missing! Put her in the console!");
		return 1;
	}
	return 0;
}

