// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_COLORSCALE_H
#define ASPOSE_CELLS_COLORSCALE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

namespace Aspose { namespace Cells {
    class ConditionalFormattingValue;
} }

namespace Aspose { namespace Cells {

class ColorScale_Impl;

/// <summary>
/// Describe the ColorScale conditional formatting rule.
/// This conditional formatting rule creates a gradated color scale on the cells.
/// </summary>
class ColorScale {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ColorScale_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ColorScale(ColorScale_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ColorScale(const ColorScale& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ColorScale();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ColorScale& operator=(const ColorScale& src);
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
    /// Indicates whether conditional formatting is 3 color scale.
    /// </summary>
    ASPOSE_CELLS_API bool GetIs3ColorScale();
    /// <summary>
    /// Indicates whether conditional formatting is 3 color scale.
    /// </summary>
    ASPOSE_CELLS_API void SetIs3ColorScale(bool value);
    /// <summary>
    /// Get or set this ColorScale's min value object.
    /// Cannot set null or CFValueObject with type FormatConditionValueType.Max to it.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValue GetMinCfvo();
    /// <summary>
    /// Get or set this ColorScale's mid value object.
    /// Cannot set CFValueObject with type FormatConditionValueType.Max or FormatConditionValueType.Min to it.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValue GetMidCfvo();
    /// <summary>
    /// Get or set this ColorScale's max value object.
    /// Cannot set null or CFValueObject with type FormatConditionValueType.Min to it.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValue GetMaxCfvo();
    /// <summary>
    /// Get or set the gradient color for the minimum value in the range.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetMinColor();
    /// <summary>
    /// Get or set the gradient color for the minimum value in the range.
    /// </summary>
    ASPOSE_CELLS_API void SetMinColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Get or set the gradient color for the middle value in the range.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetMidColor();
    /// <summary>
    /// Get or set the gradient color for the middle value in the range.
    /// </summary>
    ASPOSE_CELLS_API void SetMidColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Get or set the gradient color for the maximum value in the range.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetMaxColor();
    /// <summary>
    /// Get or set the gradient color for the maximum value in the range.
    /// </summary>
    ASPOSE_CELLS_API void SetMaxColor(const Aspose::Cells::Color& value);
    
};

} }

#endif
