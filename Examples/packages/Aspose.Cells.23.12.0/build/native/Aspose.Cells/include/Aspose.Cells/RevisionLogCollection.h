// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONLOGCOLLECTION_H
#define ASPOSE_CELLS_REVISIONS_REVISIONLOGCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Revisions {
    class RevisionLog;
    class HighlightChangesOptions;
} } }

namespace Aspose { namespace Cells { namespace Revisions {

class RevisionLogCollection_Impl;

/// <summary>
/// Represents all revision logs.
/// </summary>
class RevisionLogCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionLogCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionLogCollection(RevisionLogCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionLogCollection(const RevisionLogCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionLogCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionLogCollection& operator=(const RevisionLogCollection& src);
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
    /// Gets and sets the number of days the spreadsheet application will keep the change history for this workbook.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDaysPreservingHistory();
    /// <summary>
    /// Gets and sets the number of days the spreadsheet application will keep the change history for this workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetDaysPreservingHistory(int32_t value);
    /// <summary>
    /// Gets <see cref="RevisionLog"/> by index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>Returns <see cref="RevisionLog"/> object.</returns>
    ASPOSE_CELLS_API RevisionLog Get(int32_t index);
    /// <summary>
    /// Highlights changes of shared workbook.
    /// </summary>
    /// <param name="options">Set the options for filtering which changes should be tracked.</param>
    ASPOSE_CELLS_API void HighlightChanges(const HighlightChangesOptions& options);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
