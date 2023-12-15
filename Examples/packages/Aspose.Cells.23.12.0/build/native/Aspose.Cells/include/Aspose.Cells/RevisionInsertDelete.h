// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONINSERTDELETE_H
#define ASPOSE_CELLS_REVISIONS_REVISIONINSERTDELETE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"

#include "Aspose.Cells/RevisionActionType.h"
#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells { namespace Revisions {
    class RevisionCollection;
} } }

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionInsertDelete_Impl;

/// <summary>
/// Represents a revision record of a row/column insert/delete action.
/// </summary>
class RevisionInsertDelete : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionInsertDelete_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionInsertDelete(RevisionInsertDelete_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionInsertDelete(const RevisionInsertDelete& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionInsertDelete(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionInsertDelete();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionInsertDelete& operator=(const RevisionInsertDelete& src);
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
    /// Gets the inserting/deleting range.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetCellArea();
    /// <summary>
    /// Gets the action type of this revision.
    /// </summary>
    ASPOSE_CELLS_API RevisionActionType GetActionType();
    /// <summary>
    /// Gets revision list by this operation.
    /// </summary>
    ASPOSE_CELLS_API RevisionCollection GetRevisions();
    
};

} } }

#endif
