// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONMERGECONFLICT_H
#define ASPOSE_CELLS_REVISIONS_REVISIONMERGECONFLICT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"

#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells { namespace Revisions {

class RevisionMergeConflict_Impl;

/// <summary>
/// Represents a revision record which indicates that there was a merge conflict.
/// </summary>
class RevisionMergeConflict : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionMergeConflict_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionMergeConflict(RevisionMergeConflict_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionMergeConflict(const RevisionMergeConflict& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionMergeConflict(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionMergeConflict();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionMergeConflict& operator=(const RevisionMergeConflict& src);
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
    
};

} } }

#endif
