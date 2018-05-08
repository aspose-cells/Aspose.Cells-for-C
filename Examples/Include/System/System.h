#ifndef _SYSTEM_H_
#define _SYSTEM_H_

//#define DEBUG_NEW_NO_NEW_REDEFINITION
//#include "debug_new.h"
//#define NEW new

#ifdef _DEBUG_NEW_
#define DEBUG_NEW_NO_NEW_REDEFINITION
#include "debug_new.h"
#else
#define NEW new
#endif



#pragma warning (disable: 4250)
#pragma warning (disable: 4251)
#pragma warning (disable: 4819) // 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失 

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