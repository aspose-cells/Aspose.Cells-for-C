// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISION_H
#define ASPOSE_CELLS_REVISIONS_REVISION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells {
    class Worksheet;
} }

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class Revision_Impl;

/// <summary>
/// Represents the revision.
/// </summary>
class Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Revision_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Revision(Revision_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Revision(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Revision();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Revision& operator=(const Revision& src);
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
    /// Gets the worksheet.
    /// </summary>
    ASPOSE_CELLS_API Worksheet GetWorksheet();
    /// <summary>
    /// Gets the number of this revision.
    /// </summary>
    /// <remarks>
    /// Zero means this revision does not contains id.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetId();
    /// <summary>
    /// Represents the type of revision.
    /// </summary>
    ASPOSE_CELLS_API RevisionType GetType();
    
};

} } }

#endif
