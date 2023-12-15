// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_EXPORT_H
#define ASPOSE_CELLS_EXPORT_H

#include <stdint.h>

#ifdef _WIN32
	#ifdef ASPOSE_CELLS_LIBRARY
		#define ASPOSE_CELLS_API __declspec(dllexport)
		#define ASPOSE_CELLS_API2
	#else
		#define ASPOSE_CELLS_API __declspec(dllimport)
		#define ASPOSE_CELLS_API2
	#endif
	#define ASPOSE_CELLS_API3
#else
	#ifdef ASPOSE_CELLS_LIBRARY
		#define ASPOSE_CELLS_API __attribute__ ((visibility("default")))
		#define ASPOSE_CELLS_API2 __attribute__ ((visibility("default")))
	#else
		#define ASPOSE_CELLS_API
		#define ASPOSE_CELLS_API2
	#endif
	#define ASPOSE_CELLS_API3 __attribute__ ((visibility("default")))
#endif

#endif
