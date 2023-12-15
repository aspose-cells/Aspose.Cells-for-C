// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_DISPLAYUNITLABEL_H
#define ASPOSE_CELLS_CHARTS_DISPLAYUNITLABEL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ChartTextFrame.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Font;
} }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class DisplayUnitLabel_Impl;

/// <summary>
/// Represents the display unit label.
/// </summary>
class DisplayUnitLabel : public ChartTextFrame {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DisplayUnitLabel_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DisplayUnitLabel(DisplayUnitLabel_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DisplayUnitLabel(const DisplayUnitLabel& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DisplayUnitLabel(const ChartTextFrame& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DisplayUnitLabel();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DisplayUnitLabel& operator=(const DisplayUnitLabel& src);
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
    /// Gets or sets the text of display unit label.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Gets or sets the text of display unit label.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Gets or sets the text of display unit label.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// Gets a <see cref="Font"/> object of the specified ChartFrame object.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// True if the text in the object changes font size when the object size changes. The default value is True.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoScaleFont();
    /// <summary>
    /// True if the text in the object changes font size when the object size changes. The default value is True.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoScaleFont(bool value);
    
};

} } }

#endif
