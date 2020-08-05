#pragma once

#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>

System::String^ charToSystemString(char* bufferToConvert)
{
	std::string convertedString(bufferToConvert);
	System::String^ convertedSystemString = gcnew System::String(convertedString.c_str());
	return convertedSystemString;
}

int lengthOf(char c)
{
	if (c != NULL)
		return 1;
	else
		return 0;
}

int lengthOf(std::string c)
{
	int length = c.length();
	return length;
}

int lengthOf(char *c)
{
	std::string convertedString = (std::string)c;
	return convertedString.length();
}

int lengthOf(int c)
{
	int size = std::to_string(c).length();
	return size;
}