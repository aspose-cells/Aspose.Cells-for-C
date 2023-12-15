// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATABAR_H
#define ASPOSE_CELLS_DATABAR_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/DataBarAxisPosition.h"
#include "Aspose.Cells/DataBarFillType.h"
#include "Aspose.Cells/TextDirectionType.h"

namespace Aspose { namespace Cells {
    class DataBarBorder;
    class NegativeBarFormat;
    class ConditionalFormattingValue;
    class Cell;
} }

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Rendering;

class DataBar_Impl;

/// <summary>
/// Describe the DataBar conditional formatting rule.
/// This conditional formatting rule displays a gradated
/// data bar in the range of cells.
/// </summary>
class DataBar {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataBar_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataBar(DataBar_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataBar(const DataBar& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataBar();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataBar& operator=(const DataBar& src);
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
    /// Gets the color of the axis for cells with conditional formatting as data bars.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetAxisColor();
    /// <summary>
    /// Gets the color of the axis for cells with conditional formatting as data bars.
    /// </summary>
    ASPOSE_CELLS_API void SetAxisColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets or sets the position of the axis of the data bars specified by a conditional formatting rule.
    /// </summary>
    ASPOSE_CELLS_API DataBarAxisPosition GetAxisPosition();
    /// <summary>
    /// Gets or sets the position of the axis of the data bars specified by a conditional formatting rule.
    /// </summary>
    ASPOSE_CELLS_API void SetAxisPosition(DataBarAxisPosition value);
    /// <summary>
    /// Gets or sets how a data bar is filled with color.
    /// </summary>
    ASPOSE_CELLS_API DataBarFillType GetBarFillType();
    /// <summary>
    /// Gets or sets how a data bar is filled with color.
    /// </summary>
    ASPOSE_CELLS_API void SetBarFillType(DataBarFillType value);
    /// <summary>
    /// Gets or sets the direction the databar is displayed.
    /// </summary>
    ASPOSE_CELLS_API TextDirectionType GetDirection();
    /// <summary>
    /// Gets or sets the direction the databar is displayed.
    /// </summary>
    ASPOSE_CELLS_API void SetDirection(TextDirectionType value);
    /// <summary>
    /// Gets an object that specifies the border of a data bar.
    /// </summary>
    ASPOSE_CELLS_API DataBarBorder GetBarBorder();
    /// <summary>
    /// Gets the NegativeBarFormat object associated with a data bar conditional formatting rule.
    /// </summary>
    ASPOSE_CELLS_API NegativeBarFormat GetNegativeBarFormat();
    /// <summary>
    /// Get or set this DataBar's min value object.
    /// Cannot set null or CFValueObject with type FormatConditionValueType.Max to it.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValue GetMinCfvo();
    /// <summary>
    /// Get or set this DataBar's max value object.
    /// Cannot set null or CFValueObject with type FormatConditionValueType.Min to it.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValue GetMaxCfvo();
    /// <summary>
    /// Get or set this DataBar's Color.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Get or set this DataBar's Color.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Represents the min length of data bar .
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMinLength();
    /// <summary>
    /// Represents the min length of data bar .
    /// </summary>
    ASPOSE_CELLS_API void SetMinLength(int32_t value);
    /// <summary>
    /// Represents the max length of data bar .
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMaxLength();
    /// <summary>
    /// Represents the max length of data bar .
    /// </summary>
    ASPOSE_CELLS_API void SetMaxLength(int32_t value);
    /// <summary>
    /// Get or set the flag indicating whether to show the values of the cells on which this data bar is applied.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowValue();
    /// <summary>
    /// Get or set the flag indicating whether to show the values of the cells on which this data bar is applied.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetShowValue(bool value);
    /// <summary>
    /// Render data bar in cell to image byte array.
    /// </summary>
    /// <param name="cell">Indicate the data bar in which cell to be rendered</param>
    /// <param name="imgOpts">ImageOrPrintOptions contains some property of output image</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Vector<uint8_t> ToImage(const Cell& cell, const ImageOrPrintOptions& imgOpts);
    
};

} }

#endif
