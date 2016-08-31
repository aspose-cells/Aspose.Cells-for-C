#ifndef _SYSTEM_H_
#define _SYSTEM_H_
#define NEW  new

//#define ASPOSE_CELLS_LIBRARY

/*
#ifdef _DEBUG
#define DEBUG_NEW_NO_NEW_REDEFINITION
#include <debug_new.h>
#else
#define debug_new new
#endif
*/

#pragma warning (disable: 4251)

#ifdef WIN32
#ifdef ASPOSE_CELLS_LIBRARY
#define ASPOSE_CELLS_API __declspec(dllexport)
#else
#define ASPOSE_CELLS_API __declspec(dllimport)
#endif
#endif

#if 0
#ifdef _DEBUG
#include <vld.h>
#endif
#endif

 
#include <inttypes.h>
#include <stdio.h>
#include <String.h>
#ifdef _DEBUG
// #include <debug_new.h>
#endif
#include <typeinfo>
//#include "C:\Program Files (x86)\Visual Leak Detector\include\vld.h"

#endif	// _SYSTEM_H_