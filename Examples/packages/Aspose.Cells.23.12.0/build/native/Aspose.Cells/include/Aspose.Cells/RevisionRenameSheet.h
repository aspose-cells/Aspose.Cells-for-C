// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONRENAMESHEET_H
#define ASPOSE_CELLS_REVISIONS_REVISIONRENAMESHEET_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionRenameSheet_Impl;

/// <summary>
/// Represents a revision of renaming sheet.
/// </summary>
class RevisionRenameSheet : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionRenameSheet_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionRenameSheet(RevisionRenameSheet_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionRenameSheet(const RevisionRenameSheet& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionRenameSheet(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionRenameSheet();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionRenameSheet& operator=(const RevisionRenameSheet& src);
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
    /// Gets the old name of the worksheet.
    /// </summary>
    ASPOSE_CELLS_API U16String GetOldName();
    /// <summary>
    /// Gets the new name of the worksheet.
    /// </summary>
    ASPOSE_CELLS_API U16String GetNewName();
    
};

} } }

#endif
