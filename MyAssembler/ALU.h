#pragma once
#include <Windows.h>

class ALU
{
public:
	ALU();

	DWORD64 add(DWORD64 value, DWORD64 by);
	DWORD64 sub(DWORD64 value, DWORD64 by);
	DWORD64 and(DWORD64 value, DWORD64 by);
	DWORD64 or (DWORD64 vlaue, DWORD64 by);
	DWORD64 not(DWORD64 value, DWORD64 by);
	DWORD64 xor(DWORD64 value, DWORD64 by);

	~ALU();
};

