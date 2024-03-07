#include "logger.hpp"

#include <iostream>

Logger::Logger(){};

void Logger::logMessage(std::string message) { std::cout << message << std::endl; }