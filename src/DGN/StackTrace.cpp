#include "StackTrace.hpp"

#if defined(DEBUG) || defined(SAFE)

std::string StackTrace()
{
  HANDLE process = GetCurrentProcess();
  HANDLE thread = GetCurrentThread();

  return "";
}

#elif defined(RELEASE)

#endif
