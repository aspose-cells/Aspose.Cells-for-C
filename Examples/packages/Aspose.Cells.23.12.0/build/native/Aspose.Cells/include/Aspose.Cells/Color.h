// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_COLOR_H
#define ASPOSE_CELLS_COLOR_H

#include <stdint.h>

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
	/// <summary>
	/// Represents an ARGB (alpha, red, green, blue) color.
	/// </summary>
	struct ASPOSE_CELLS_API2 Color {
		uint8_t	a;
		uint8_t	r;
		uint8_t	g;
		uint8_t	b;
	};

	inline bool operator==(const Aspose::Cells::Color& left, const Aspose::Cells::Color& right) {
		return left.a == right.a && left.r == right.r && left.g == right.g && left.b == right.b;
	}

	inline bool operator!=(const Aspose::Cells::Color& left, const Aspose::Cells::Color& right) {
		return !(left == right);
	}

} }

#endif
