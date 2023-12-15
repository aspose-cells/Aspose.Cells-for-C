// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HYPERLINK_H
#define ASPOSE_CELLS_HYPERLINK_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/TargetModeType.h"

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells {

class Hyperlink_Impl;

/// <summary>
/// Encapsulates the object that represents a hyperlink.
/// </summary>
class ASPOSE_CELLS_API2 Hyperlink {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Hyperlink_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Hyperlink(Hyperlink_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Hyperlink(const Hyperlink& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Hyperlink();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Hyperlink& operator=(const Hyperlink& src);
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
    /// Represents the address of a hyperlink.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAddress();
    /// <summary>
    /// Represents the address of a hyperlink.
    /// </summary>
    ASPOSE_CELLS_API void SetAddress(const U16String& value);
    /// <summary>
    /// Represents the address of a hyperlink.
    /// </summary>
    ASPOSE_CELLS_API void SetAddress(const char16_t* value);
    /// <summary>
    /// Represents the text to be displayed for the specified hyperlink. The default value is the address of the hyperlink.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTextToDisplay();
    /// <summary>
    /// Represents the text to be displayed for the specified hyperlink. The default value is the address of the hyperlink.
    /// </summary>
    ASPOSE_CELLS_API void SetTextToDisplay(const U16String& value);
    /// <summary>
    /// Represents the text to be displayed for the specified hyperlink. The default value is the address of the hyperlink.
    /// </summary>
    ASPOSE_CELLS_API void SetTextToDisplay(const char16_t* value);
    /// <summary>
    /// Gets the range of hyperlink.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetArea();
    /// <summary>
    /// Returns or sets the ScreenTip text for the specified hyperlink.
    /// </summary>
    ASPOSE_CELLS_API U16String GetScreenTip();
    /// <summary>
    /// Returns or sets the ScreenTip text for the specified hyperlink.
    /// </summary>
    ASPOSE_CELLS_API void SetScreenTip(const U16String& value);
    /// <summary>
    /// Returns or sets the ScreenTip text for the specified hyperlink.
    /// </summary>
    ASPOSE_CELLS_API void SetScreenTip(const char16_t* value);
    /// <summary>
    /// Gets the link type.
    /// </summary>
    ASPOSE_CELLS_API TargetModeType GetLinkType();
    /// <summary>
    /// Deletes this hyperlink
    /// </summary>
    ASPOSE_CELLS_API void Delete();
    
};

} }

#endif
