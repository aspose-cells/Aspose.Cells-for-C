// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONQUERYTABLE_H
#define ASPOSE_CELLS_REVISIONS_REVISIONQUERYTABLE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"

#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionQueryTable_Impl;

/// <summary>
/// Represents a revision of a query table field change.
/// </summary>
class RevisionQueryTable : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionQueryTable_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionQueryTable(RevisionQueryTable_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionQueryTable(const RevisionQueryTable& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionQueryTable(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionQueryTable();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionQueryTable& operator=(const RevisionQueryTable& src);
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
    /// Represents the type of the revision.
    /// </summary>
    ASPOSE_CELLS_API RevisionType GetType();
    /// <summary>
    /// Gets the location of the affected query table.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetCellArea();
    /// <summary>
    /// Gets ID of the specific query table field that was removed.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFieldId();
    
};

} } }

#endif
