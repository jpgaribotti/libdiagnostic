/*
 * File:   Check.hpp
 * Author: JoPe
 *
 * Created on 1 de mayo de 2015, 17:08
 */

#ifndef CHECK_HPP
#define	CHECK_HPP

#include <stdexcept>

/// A set of macros to enable and disable different levels of error detection,
/// reporting and handling.

#if defined(DEBUG) || defined(SAFE)

#define STR_DETAIL(val) #val
#define STR(val) STR_DETAIL(val)

/// Replaces assert for checking conditions in general.
#define CHECK(condition) do                                                   \
{                                                                             \
  if (!(condition))                                                           \
  {                                                                           \
    throw std::logic_error (                                                  \
        __FILE__ ":" STR(__LINE__) " -- ("                                    \
        #condition ") == FALSE\n");                                           \
  }                                                                           \
} while (false)

/// Check that parameters match function requirements.
#define CHECK_ARG(condition) do                                               \
{                                                                             \
  if (!(condition))                                                           \
  {                                                                           \
    throw std::invalid_argument (                                             \
        __FILE__ ":" STR(__LINE__) " -- ("                                    \
        #condition ") == FALSE\n");                                           \
  }                                                                           \
} while (false)

/// Check that the result of an operation is within expected bounds.
#define CHECK_RESULT(condition) do                                            \
{                                                                             \
  if (!(condition))                                                           \
  {                                                                           \
    throw std::domain_error (                                                 \
        __FILE__ ":" STR(__LINE__) " -- ("                                    \
        #condition ") == FALSE\n");                                           \
  }                                                                           \
} while (false)

#elif defined(RELEASE)

#define CHECK(condition)
#define CHECK_ARG(condition)
#define CHECK_RESULT(condition)

#endif

#endif	/* CHECK_HPP */

