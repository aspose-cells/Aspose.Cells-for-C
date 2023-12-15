// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_CELLAREA_H
#define ASPOSE_CELLS_CELLAREA_H

#include <stdint.h>

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
class CellArea_Impl;

/// <summary>
/// Represent an area of cells.
/// </summary>
class ASPOSE_CELLS_API2 CellArea {
public:
	/// <summary>
	/// Gets or set the start row of this area.
	/// </summary>
	int32_t	StartRow;
	/// <summary>
	/// Gets or set the end row of this area.
	/// </summary>
	int32_t	EndRow;
	/// <summary>
	/// Gets or set the start column of this area.
	/// </summary>
	int32_t	StartColumn;
	/// <summary>
	/// Gets or set the end column of this area.
	/// </summary>
	int32_t	EndColumn;

public:
	/// <summary>
	/// Default constructor.
	/// </summary>
	ASPOSE_CELLS_API CellArea();
	/// <summary>
	/// Constructs from an implementation object. Internal use.
	/// </summary>
	CellArea(CellArea_Impl* impl);

	/// <summary>
	/// Creates a cell area.
	/// </summary>
	/// <param name="startRow">The start row.</param>
	/// <param name="startColumn">The start column.</param>
	/// <param name="endRow">The end row.</param>
	/// <param name="endColumn">The end column.</param>
	/// <returns>Return a <see cref="CellArea"/>.</returns>
	ASPOSE_CELLS_API static CellArea CreateCellArea(int startRow, int startColumn, int endRow, int endColumn);
	/// <summary>
	/// Creates a cell area.
	/// </summary>
	/// <param name="startCellName">The top-left cell of the range.</param>
	/// <param name="endCellName">The bottom-right cell of the range.</param>
	/// <returns>Return a <see cref="CellArea"/>.</returns>
	ASPOSE_CELLS_API static CellArea CreateCellArea(const char16_t* startCellName, const char16_t* endCellName);
};

} }

#endif
