// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_PDFBOOKMARKENTRY_H
#define ASPOSE_CELLS_RENDERING_PDFBOOKMARKENTRY_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Cell;
} }

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;

class PdfBookmarkEntry_Impl;

/// <summary>
/// PdfBookmarkEntry is an entry in pdf bookmark.
/// if Text property of current instance is null or "",
/// current instance will be hidden and children will be inserted on current level.
/// </summary>
class PdfBookmarkEntry {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PdfBookmarkEntry_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API PdfBookmarkEntry();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PdfBookmarkEntry(PdfBookmarkEntry_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PdfBookmarkEntry(const PdfBookmarkEntry& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PdfBookmarkEntry();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PdfBookmarkEntry& operator=(const PdfBookmarkEntry& src);
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
    /// Title of a bookmark.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Title of a bookmark.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Title of a bookmark.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// The cell to which the bookmark link.
    /// </summary>
    ASPOSE_CELLS_API Cell GetDestination();
    /// <summary>
    /// The cell to which the bookmark link.
    /// </summary>
    ASPOSE_CELLS_API void SetDestination(const Cell& value);
    /// <summary>
    /// Gets or sets name of destination.
    /// </summary>
    /// <remarks>
    /// If destination name is set, the destination will be defined as a named destination with this name.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetDestinationName();
    /// <summary>
    /// Gets or sets name of destination.
    /// </summary>
    /// <remarks>
    /// If destination name is set, the destination will be defined as a named destination with this name.
    /// </remarks>
    ASPOSE_CELLS_API void SetDestinationName(const U16String& value);
    /// <summary>
    /// Gets or sets name of destination.
    /// </summary>
    /// <remarks>
    /// If destination name is set, the destination will be defined as a named destination with this name.
    /// </remarks>
    ASPOSE_CELLS_API void SetDestinationName(const char16_t* value);
    /// <summary>
    /// When this property is true, the bookmarkentry will expand, otherwise it will collapse.
    /// </summary>
    ASPOSE_CELLS_API bool IsOpen();
    /// <summary>
    /// When this property is true, the bookmarkentry will expand, otherwise it will collapse.
    /// </summary>
    ASPOSE_CELLS_API void SetIsOpen(bool value);
    /// <summary>
    /// When this property is true, the bookmarkentry will collapse, otherwise it will expand.
    /// </summary>
    ASPOSE_CELLS_API bool IsCollapse();
    /// <summary>
    /// When this property is true, the bookmarkentry will collapse, otherwise it will expand.
    /// </summary>
    ASPOSE_CELLS_API void SetIsCollapse(bool value);
    
};

} } }

#endif
