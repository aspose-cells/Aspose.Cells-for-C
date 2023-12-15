// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONCOLLECTION_H
#define ASPOSE_CELLS_REVISIONS_REVISIONCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Revisions {
    class Revision;
} } }

namespace Aspose { namespace Cells { namespace Revisions {

class RevisionCollection_Impl;

/// <summary>
/// Represents all revision logs.
/// </summary>
class RevisionCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionCollection(RevisionCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionCollection(const RevisionCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionCollection& operator=(const RevisionCollection& src);
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
    /// Gets <see cref="Revision"/> by the index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API Revision Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
