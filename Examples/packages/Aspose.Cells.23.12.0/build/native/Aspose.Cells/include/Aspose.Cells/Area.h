// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_AREA_H
#define ASPOSE_CELLS_DRAWING_AREA_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/FormattingType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class FillFormat;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Charts;

class Area_Impl;

/// <summary>
/// Encapsulates the object that represents an area format.
/// </summary>
class Area {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Area_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Area(Area_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Area(const Area& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Area();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Area& operator=(const Area& src);
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
    /// Gets or sets the background <see cref="System.Drawing.Color"/> of the <see cref="Area"/>.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetBackgroundColor();
    /// <summary>
    /// Gets or sets the background <see cref="System.Drawing.Color"/> of the <see cref="Area"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets or sets the foreground <see cref="System.Drawing.Color"/>.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetForegroundColor();
    /// <summary>
    /// Gets or sets the foreground <see cref="System.Drawing.Color"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetForegroundColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Represents the formatting of the area.
    /// </summary>
    ASPOSE_CELLS_API FormattingType GetFormatting();
    /// <summary>
    /// Represents the formatting of the area.
    /// </summary>
    ASPOSE_CELLS_API void SetFormatting(FormattingType value);
    /// <summary>
    /// If the property is true and the value of chart point is a negative number,
    /// the foreground color and background color will be exchanged.
    /// </summary>
    ASPOSE_CELLS_API bool GetInvertIfNegative();
    /// <summary>
    /// If the property is true and the value of chart point is a negative number,
    /// the foreground color and background color will be exchanged.
    /// </summary>
    ASPOSE_CELLS_API void SetInvertIfNegative(bool value);
    /// <summary>
    /// Represents a <see cref="FillFormat"/> object that contains fill formatting properties for the specified chart or shape.
    /// </summary>
    ASPOSE_CELLS_API FillFormat GetFillFormat();
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    
};

} } }

#endif
