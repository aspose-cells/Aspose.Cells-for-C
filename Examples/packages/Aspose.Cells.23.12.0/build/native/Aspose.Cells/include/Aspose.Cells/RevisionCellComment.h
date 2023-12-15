// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONCELLCOMMENT_H
#define ASPOSE_CELLS_REVISIONS_REVISIONCELLCOMMENT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/RevisionActionType.h"
#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionCellComment_Impl;

/// <summary>
/// Represents a revision record of a cell comment change.
/// </summary>
class RevisionCellComment : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionCellComment_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionCellComment(RevisionCellComment_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionCellComment(const RevisionCellComment& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionCellComment(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionCellComment();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionCellComment& operator=(const RevisionCellComment& src);
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
    /// Gets the row index of the which contains a comment.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets the column index of the which contains a comment.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Gets the name of the cell.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCellName();
    /// <summary>
    /// Gets the name of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetCellName(const U16String& value);
    /// <summary>
    /// Gets the name of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetCellName(const char16_t* value);
    /// <summary>
    /// Gets the action type of the revision.
    /// </summary>
    ASPOSE_CELLS_API RevisionActionType GetActionType();
    /// <summary>
    /// Indicates whether it's an  old comment.
    /// </summary>
    ASPOSE_CELLS_API bool IsOldComment();
    /// <summary>
    /// Gets Length of the comment text added in this revision.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetOldLength();
    /// <summary>
    /// Gets Length of the comment before this revision was made.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetNewLength();
    
};

} } }

#endif
