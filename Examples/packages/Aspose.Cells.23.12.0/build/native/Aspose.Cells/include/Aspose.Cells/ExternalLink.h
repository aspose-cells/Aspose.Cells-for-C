// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALLINK_H
#define ASPOSE_CELLS_EXTERNALLINK_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ExternalLinkType.h"

namespace Aspose { namespace Cells {

class ExternalLink_Impl;

/// <summary>
/// Represents an external link in a workbook.
/// </summary>
class ASPOSE_CELLS_API2 ExternalLink {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ExternalLink_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ExternalLink(ExternalLink_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ExternalLink(const ExternalLink& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ExternalLink();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ExternalLink& operator=(const ExternalLink& src);
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
    /// Gets the type of external link.
    /// </summary>
    ASPOSE_CELLS_API ExternalLinkType GetType();
    /// <summary>
    /// Represents stored data source of the external link.
    /// </summary>
    ASPOSE_CELLS_API U16String GetOriginalDataSource();
    /// <summary>
    /// Represents stored data source of the external link.
    /// </summary>
    ASPOSE_CELLS_API void SetOriginalDataSource(const U16String& value);
    /// <summary>
    /// Represents stored data source of the external link.
    /// </summary>
    ASPOSE_CELLS_API void SetOriginalDataSource(const char16_t* value);
    /// <summary>
    /// Represents data source of the external link.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDataSource();
    /// <summary>
    /// Represents data source of the external link.
    /// </summary>
    ASPOSE_CELLS_API void SetDataSource(const U16String& value);
    /// <summary>
    /// Represents data source of the external link.
    /// </summary>
    ASPOSE_CELLS_API void SetDataSource(const char16_t* value);
    /// <summary>
    /// Adds an external name.
    /// </summary>
    /// <param name="text">The text of the external name.
    /// If the external name belongs to a worksheet, the text should be as Sheet1!Text.
    /// </param>
    /// <param name="referTo">The referTo of the external name. It must be a cell or the range.</param>
    ASPOSE_CELLS_API void AddExternalName(const U16String& text, const U16String& referTo);
    /// <summary>
    /// Adds an external name.
    /// </summary>
    /// <param name="text">The text of the external name.
    /// If the external name belongs to a worksheet, the text should be as Sheet1!Text.
    /// </param>
    /// <param name="referTo">The referTo of the external name. It must be a cell or the range.</param>
    ASPOSE_CELLS_API void AddExternalName(const char16_t* text, const char16_t* referTo);
    /// <summary>
    /// Indicates whether this external link is referenced by others.
    /// </summary>
    ASPOSE_CELLS_API bool IsReferred();
    /// <summary>
    /// Indicates whether this external link is visible in MS Excel.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    
};

} }

#endif
