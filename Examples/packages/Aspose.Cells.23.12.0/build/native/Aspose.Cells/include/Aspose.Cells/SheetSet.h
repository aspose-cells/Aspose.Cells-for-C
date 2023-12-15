// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_SHEETSET_H
#define ASPOSE_CELLS_RENDERING_SHEETSET_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;

class SheetSet_Impl;

/// <summary>
/// Describes a set of sheets.
/// </summary>
class SheetSet {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SheetSet_Impl* _impl;
    
public:
    /// <summary>
    /// Creates a sheet set based on exact sheet indexes.
    /// </summary>
    /// <param name="sheets">zero based sheet indexes.</param>
    /// <remarks>
    /// If a sheet is encountered that is not in the workbook, an exception will be thrown during rendering.
    /// </remarks>
    ASPOSE_CELLS_API explicit SheetSet(const Vector<int32_t>& sheets);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SheetSet(SheetSet_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SheetSet(const SheetSet& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SheetSet();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SheetSet& operator=(const SheetSet& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets a set with active sheet of the workbook.
    /// </summary>
    ASPOSE_CELLS_API static SheetSet GetActive();
    /// <summary>
    /// Gets a set with visible sheets of the workbook in their original order.
    /// </summary>
    ASPOSE_CELLS_API static SheetSet GetVisible();
    /// <summary>
    /// Gets a set with all sheets of the workbook in their original order.
    /// </summary>
    ASPOSE_CELLS_API static SheetSet GetAll();
    
};

} } }

#endif
