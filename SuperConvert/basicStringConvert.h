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

