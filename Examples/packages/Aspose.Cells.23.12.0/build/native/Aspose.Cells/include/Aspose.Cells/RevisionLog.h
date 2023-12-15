// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONLOG_H
#define ASPOSE_CELLS_REVISIONS_REVISIONLOG_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Revisions {
    class RevisionHeader;
    class RevisionCollection;
} } }

namespace Aspose { namespace Cells { namespace Revisions {

class RevisionLog_Impl;

/// <summary>
/// Represents the revision log.
/// </summary>
class RevisionLog {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionLog_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionLog(RevisionLog_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionLog(const RevisionLog& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionLog();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionLog& operator=(const RevisionLog& src);
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
    /// Gets table that contains metadata about a list of specific changes that have taken place
    /// for this workbook.
    /// </summary>
    ASPOSE_CELLS_API RevisionHeader GetMetadataTable();
    /// <summary>
    /// Gets all revisions in this log.
    /// </summary>
    ASPOSE_CELLS_API RevisionCollection GetRevisions();
    
};

} } }

#endif
