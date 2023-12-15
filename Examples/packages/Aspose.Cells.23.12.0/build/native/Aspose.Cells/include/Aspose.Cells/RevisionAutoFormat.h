// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONAUTOFORMAT_H
#define ASPOSE_CELLS_REVISIONS_REVISIONAUTOFORMAT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"

#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionAutoFormat_Impl;

/// <summary>
/// represents a revision record of information about a formatting change.
/// </summary>
class RevisionAutoFormat : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionAutoFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionAutoFormat(RevisionAutoFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionAutoFormat(const RevisionAutoFormat& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionAutoFormat(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionAutoFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionAutoFormat& operator=(const RevisionAutoFormat& src);
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
    /// Gets the type of the revision.
    /// </summary>
    ASPOSE_CELLS_API RevisionType GetType();
    /// <summary>
    /// Gets the location where the formatting was applied.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetCellArea();
    
};

} } }

#endif
