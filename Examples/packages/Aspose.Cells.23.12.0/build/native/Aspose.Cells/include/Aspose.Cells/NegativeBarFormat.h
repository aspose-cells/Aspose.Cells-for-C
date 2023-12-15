// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_NEGATIVEBARFORMAT_H
#define ASPOSE_CELLS_NEGATIVEBARFORMAT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/DataBarNegativeColorType.h"

namespace Aspose { namespace Cells {

class NegativeBarFormat_Impl;

/// <summary>
/// Represents the color settings of the data bars for negative values that are defined by a data bar conditional formatting rule.
/// </summary>
class NegativeBarFormat {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    NegativeBarFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API NegativeBarFormat(NegativeBarFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API NegativeBarFormat(const NegativeBarFormat& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~NegativeBarFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API NegativeBarFormat& operator=(const NegativeBarFormat& src);
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
    /// Gets or sets a FormatColor object that you can use to specify the border color for negative data bars.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetBorderColor();
    /// <summary>
    /// Gets or sets a FormatColor object that you can use to specify the border color for negative data bars.
    /// </summary>
    ASPOSE_CELLS_API void SetBorderColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets whether to use the same border color as positive data bars.
    /// </summary>
    ASPOSE_CELLS_API DataBarNegativeColorType GetBorderColorType();
    /// <summary>
    /// Gets whether to use the same border color as positive data bars.
    /// </summary>
    ASPOSE_CELLS_API void SetBorderColorType(DataBarNegativeColorType value);
    /// <summary>
    /// Gets or sets a FormatColor object that you can use to specify the fill color for negative data bars.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Gets or sets a FormatColor object that you can use to specify the fill color for negative data bars.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets or sets whether to use the same fill color as positive data bars.
    /// </summary>
    ASPOSE_CELLS_API DataBarNegativeColorType GetColorType();
    /// <summary>
    /// Gets or sets whether to use the same fill color as positive data bars.
    /// </summary>
    ASPOSE_CELLS_API void SetColorType(DataBarNegativeColorType value);
    
};

} }

#endif
