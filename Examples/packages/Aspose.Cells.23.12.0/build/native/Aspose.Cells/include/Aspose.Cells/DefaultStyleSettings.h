// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DEFAULTSTYLESETTINGS_H
#define ASPOSE_CELLS_DEFAULTSTYLESETTINGS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/TextAlignmentType.h"

namespace Aspose { namespace Cells {

class DefaultStyleSettings_Impl;

/// <summary>
/// Settings for the default values of workbook's style properties.
/// </summary>
class DefaultStyleSettings {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DefaultStyleSettings_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DefaultStyleSettings(DefaultStyleSettings_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DefaultStyleSettings(const DefaultStyleSettings& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DefaultStyleSettings();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DefaultStyleSettings& operator=(const DefaultStyleSettings& src);
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
    /// Gets/Sets the default font name for the workbook
    /// </summary>
    ASPOSE_CELLS_API U16String GetFontName();
    /// <summary>
    /// Gets/Sets the default font name for the workbook
    /// </summary>
    ASPOSE_CELLS_API void SetFontName(const U16String& value);
    /// <summary>
    /// Gets/Sets the default font name for the workbook
    /// </summary>
    ASPOSE_CELLS_API void SetFontName(const char16_t* value);
    /// <summary>
    /// Gets/Sets the default standard font size for the workbook.
    /// </summary>
    ASPOSE_CELLS_API double GetFontSize();
    /// <summary>
    /// Gets/Sets the default standard font size for the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetFontSize(double value);
    /// <summary>
    /// Gets/Sets the default value for horizontal alignment
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetHorizontalAlignment();
    /// <summary>
    /// Gets/Sets the default value for horizontal alignment
    /// </summary>
    ASPOSE_CELLS_API void SetHorizontalAlignment(TextAlignmentType value);
    /// <summary>
    /// Gets/Sets the default value for vertical alignment
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetVerticalAlignment();
    /// <summary>
    /// Gets/Sets the default value for vertical alignment
    /// </summary>
    ASPOSE_CELLS_API void SetVerticalAlignment(TextAlignmentType value);
    
};

} }

#endif
