// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONFORMAT_H
#define ASPOSE_CELLS_REVISIONS_REVISIONFORMAT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells {
    class CellArea;
    class Style;
} }

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionFormat_Impl;

/// <summary>
/// Represents a revision record of information about a formatting change.
/// </summary>
class RevisionFormat : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionFormat(RevisionFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionFormat(const RevisionFormat& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionFormat(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionFormat& operator=(const RevisionFormat& src);
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
    /// Gets the type of revision.
    /// </summary>
    ASPOSE_CELLS_API RevisionType GetType();
    /// <summary>
    /// The range to which this formatting was applied.
    /// </summary>
    ASPOSE_CELLS_API Vector<CellArea> GetAreas();
    /// <summary>
    /// Gets the applied style.
    /// </summary>
    ASPOSE_CELLS_API Style GetStyle();
    
};

} } }

#endif
