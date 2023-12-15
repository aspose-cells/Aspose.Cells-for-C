// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONCELLMOVE_H
#define ASPOSE_CELLS_REVISIONS_REVISIONCELLMOVE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"

#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells {
    class CellArea;
    class Worksheet;
} }

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionCellMove_Impl;

/// <summary>
/// Represents a revision record on a cell(s) that moved.
/// </summary>
class RevisionCellMove : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionCellMove_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionCellMove(RevisionCellMove_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionCellMove(const RevisionCellMove& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionCellMove(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionCellMove();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionCellMove& operator=(const RevisionCellMove& src);
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
    /// Gets the source area.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetSourceArea();
    /// <summary>
    /// Gets the destination area.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetDestinationArea();
    /// <summary>
    /// Gets the source worksheet.
    /// </summary>
    ASPOSE_CELLS_API Worksheet GetSourceWorksheet();
    
};

} } }

#endif
