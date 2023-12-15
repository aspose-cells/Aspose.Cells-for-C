// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_TITLE_H
#define ASPOSE_CELLS_CHARTS_TITLE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ChartTextFrame.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells {
    class FontSetting;
} }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class Title_Impl;

/// <summary>
/// Encapsulates the object that represents the title of chart or axis.
/// </summary>
class Title : public ChartTextFrame {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Title_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Title(Title_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Title(const Title& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API Title(const ChartTextFrame& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Title();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Title& operator=(const Title& src);
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
    /// Represents whether the title is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Represents whether the title is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    /// <summary>
    /// Gets or sets the x coordinate of the upper left corner in units of 1/4000 of the chart area.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetX();
    /// <summary>
    /// Gets or sets the x coordinate of the upper left corner in units of 1/4000 of the chart area.
    /// </summary>
    ASPOSE_CELLS_API void SetX(int32_t value);
    /// <summary>
    /// Gets or sets the y coordinate of the upper left corner in units of 1/4000 of the chart area.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetY();
    /// <summary>
    /// Gets or sets the y coordinate of the upper left corner in units of 1/4000 of the chart area.
    /// </summary>
    ASPOSE_CELLS_API void SetY(int32_t value);
    /// <summary>
    /// Represents overlay centered title on chart without resizing chart.
    /// </summary>
    ASPOSE_CELLS_API bool GetOverLay();
    /// <summary>
    /// Represents overlay centered title on chart without resizing chart.
    /// </summary>
    ASPOSE_CELLS_API void SetOverLay(bool value);
    /// <summary>
    /// Gets rich text formatting of this Title.
    /// </summary>
    /// <returns>returns FontSetting array</returns>
    ASPOSE_CELLS_API Vector<FontSetting> Characters();
    
};

} } }

#endif
