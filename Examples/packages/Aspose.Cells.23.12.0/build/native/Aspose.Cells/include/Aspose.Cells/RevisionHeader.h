// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONHEADER_H
#define ASPOSE_CELLS_REVISIONS_REVISIONHEADER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionHeader_Impl;

/// <summary>
/// Represents a list of specific changes that have taken place for this workbook.
/// </summary>
class RevisionHeader {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionHeader_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionHeader();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionHeader(RevisionHeader_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionHeader(const RevisionHeader& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionHeader();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionHeader& operator=(const RevisionHeader& src);
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
    /// Gets and sets rhe date and time when this set of revisions was saved.
    /// </summary>
    ASPOSE_CELLS_API Date GetSavedTime();
    /// <summary>
    /// Gets and sets rhe date and time when this set of revisions was saved.
    /// </summary>
    ASPOSE_CELLS_API void SetSavedTime(const Date& value);
    /// <summary>
    /// Gets and sets the name of the user making the revision.
    /// </summary>
    ASPOSE_CELLS_API U16String Get_UserName();
    /// <summary>
    /// Gets and sets the name of the user making the revision.
    /// </summary>
    ASPOSE_CELLS_API void SetUserName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the user making the revision.
    /// </summary>
    ASPOSE_CELLS_API void SetUserName(const char16_t* value);
    
};

} } }

#endif
