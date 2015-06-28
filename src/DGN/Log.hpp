/*
 * File:   Log.hpp
 * Author: JoPe
 *
 * Created on 28 de junio de 2015, 11:31
 */

#ifndef LOG_HPP
#define	LOG_HPP

#if defined(DEBUG) || defined(SAFE)

#include <iostream>

#define LOG(message) do \
{ \
  if (!message.empty()) \
  { std::cout << message << std::endl; } \
} while (false)

#elif defined(RELEASE)

#define LOG(message)

#endif

#endif	/* LOG_HPP */

