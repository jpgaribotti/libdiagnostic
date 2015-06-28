/*
 * File:   StackTrace.hpp
 * Author: JoPe
 *
 * Created on 28 de junio de 2015, 13:44
 */

#ifndef STACKTRACE_HPP
#define	STACKTRACE_HPP

#if defined(DEBUG) || defined(SAFE)

std::string StackTrace();

#elif defined(RELEASE)



#endif


#endif	/* STACKTRACE_HPP */

