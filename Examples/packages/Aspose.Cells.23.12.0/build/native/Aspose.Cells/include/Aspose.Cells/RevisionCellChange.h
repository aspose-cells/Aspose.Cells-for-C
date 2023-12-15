// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONCELLCHANGE_H
#define ASPOSE_CELLS_REVISIONS_REVISIONCELLCHANGE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells {
    class Style;
} }

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionCellChange_Impl;

/// <summary>
/// Represents the revision that changing cells.
/// </summary>
class RevisionCellChange : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionCellChange_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionCellChange(RevisionCellChange_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionCellChange(const RevisionCellChange& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionCellChange(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionCellChange();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionCellChange& operator=(const RevisionCellChange& src);
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
    /// Represents the type of revision.
    /// </summary>
    ASPOSE_CELLS_API RevisionType GetType();
    /// <summary>
    /// Gets the name of the cell.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCellName();
    /// <summary>
    /// Gets the row index of the cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets the column index of the cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Indicates whether this cell is new formatted.
    /// </summary>
    ASPOSE_CELLS_API bool IsNewFormatted();
    /// <summary>
    /// Indicates whether this cell is old formatted.
    /// </summary>
    ASPOSE_CELLS_API bool IsOldFormatted();
    /// <summary>
    /// Gets the old formula.
    /// </summary>
    ASPOSE_CELLS_API U16String GetOldFormula();
    /// <summary>
    /// Gets the old formula.
    /// </summary>
    ASPOSE_CELLS_API U16String GetNewFormula();
    /// <summary>
    /// Gets the new style of the cell.
    /// </summary>
    ASPOSE_CELLS_API Style GetNewStyle();
    /// <summary>
    /// Gets the old style of the cell.
    /// </summary>
    ASPOSE_CELLS_API Style GetOldStyle();
    
};

} } }

#endif
