// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONINSERTSHEET_H
#define ASPOSE_CELLS_REVISIONS_REVISIONINSERTSHEET_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/RevisionActionType.h"
#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionInsertSheet_Impl;

/// <summary>
/// Represents a revision record of a sheet that was inserted.
/// </summary>
class RevisionInsertSheet : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionInsertSheet_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionInsertSheet(RevisionInsertSheet_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionInsertSheet(const RevisionInsertSheet& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionInsertSheet(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionInsertSheet();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionInsertSheet& operator=(const RevisionInsertSheet& src);
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
    /// Gets the action type of the revision.
    /// </summary>
    ASPOSE_CELLS_API RevisionActionType GetActionType();
    /// <summary>
    /// Gets the name of the worksheet.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets the zero based position of the new sheet in the sheet tab bar.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSheetPosition();
    
};

} } }

#endif
