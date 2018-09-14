#include "BluetoothException.h"

BluetoothException::BluetoothException(std::string msg) NOEXCEPT
{
    this->message = msg;
}

const char* BluetoothException::what() const NOEXCEPT
{
    return message.c_str();
}