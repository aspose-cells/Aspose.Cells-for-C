// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CONDITIONALFORMATTINGVALUE_H
#define ASPOSE_CELLS_CONDITIONALFORMATTINGVALUE_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/FormatConditionValueType.h"

namespace Aspose { namespace Cells {

class ConditionalFormattingValue_Impl;

/// <summary>
/// Describes the values of the interpolation points in a gradient scale, dataBar or iconSet.
/// </summary>
class ConditionalFormattingValue {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ConditionalFormattingValue_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValue(ConditionalFormattingValue_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValue(const ConditionalFormattingValue& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ConditionalFormattingValue();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingValue& operator=(const ConditionalFormattingValue& src);
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
    /// Get or set the type of this conditional formatting value object.
    /// Setting the type to FormatConditionValueType.Min or FormatConditionValueType.Max
    /// will auto set "Value" to null.
    /// </summary>
    ASPOSE_CELLS_API FormatConditionValueType GetType();
    /// <summary>
    /// Get or set the type of this conditional formatting value object.
    /// Setting the type to FormatConditionValueType.Min or FormatConditionValueType.Max
    /// will auto set "Value" to null.
    /// </summary>
    ASPOSE_CELLS_API void SetType(FormatConditionValueType value);
    /// <summary>
    /// Get or set the Greater Than Or Equal flag.
    /// Use only for icon sets, determines whether this threshold value uses
    /// the greater than or equal to operator.
    /// 'false' indicates 'greater than' is used instead of 'greater than or equal to'.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsGTE();
    /// <summary>
    /// Get or set the Greater Than Or Equal flag.
    /// Use only for icon sets, determines whether this threshold value uses
    /// the greater than or equal to operator.
    /// 'false' indicates 'greater than' is used instead of 'greater than or equal to'.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsGTE(bool value);
    
};

} }

#endif
