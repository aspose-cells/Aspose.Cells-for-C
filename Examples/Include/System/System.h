#ifndef _SYSTEM_H_
#define _SYSTEM_H_

//#define DEBUG_NEW_NO_NEW_REDEFINITION
//#include "debug_new.h"
#define NEW new

#pragma warning (disable: 4250)
#pragma warning (disable: 4251)

#ifdef WIN32
#ifdef ASPOSE_CELLS_LIBRARY
#define ASPOSE_CELLS_API __declspec(dllexport)
#else
#define ASPOSE_CELLS_API __declspec(dllimport)
#endif
#endif

#include <inttypes.h>
#include <stdio.h>
#include <String.h>

#include <typeinfo>

#endif	// _SYSTEM_H_