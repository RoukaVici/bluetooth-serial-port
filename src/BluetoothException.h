#pragma once

#ifndef _MSC_VER
#define NOEXCEPT noexcept
#else
#define NOEXCEPT
#endif

#include <exception>
#include <string>

class BluetoothException : std::exception
{
private:
	std::string message;

public:
	BluetoothException(std::string msg) NOEXCEPT
	{
		this->message = msg;
	}

	virtual const char* what() const NOEXCEPT
	{
		return message.c_str();
	}
};
