// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_LINE_H
#define ASPOSE_CELLS_DRAWING_LINE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/ChartLineFormattingType.h"
#include "Aspose.Cells/LineCapType.h"
#include "Aspose.Cells/LineJoinType.h"
#include "Aspose.Cells/LineType.h"
#include "Aspose.Cells/MsoArrowheadLength.h"
#include "Aspose.Cells/MsoArrowheadStyle.h"
#include "Aspose.Cells/MsoArrowheadWidth.h"
#include "Aspose.Cells/MsoLineDashStyle.h"
#include "Aspose.Cells/MsoLineStyle.h"
#include "Aspose.Cells/WeightType.h"

namespace Aspose { namespace Cells {
    class ThemeColor;
} }

namespace Aspose { namespace Cells { namespace Drawing {
    class GradientFill;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Charts;

class Line_Impl;

/// <summary>
/// Encapsulates the object that represents the line format.
/// </summary>
class Line {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Line_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Line(Line_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Line(const Line& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Line();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Line& operator=(const Line& src);
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
    /// Specifies the compound line type
    /// </summary>
    ASPOSE_CELLS_API MsoLineStyle GetCompoundType();
    /// <summary>
    /// Specifies the compound line type
    /// </summary>
    ASPOSE_CELLS_API void SetCompoundType(MsoLineStyle value);
    /// <summary>
    /// Specifies the dash line type
    /// </summary>
    ASPOSE_CELLS_API MsoLineDashStyle GetDashType();
    /// <summary>
    /// Specifies the dash line type
    /// </summary>
    ASPOSE_CELLS_API void SetDashType(MsoLineDashStyle value);
    /// <summary>
    /// Specifies the ending caps.
    /// </summary>
    ASPOSE_CELLS_API LineCapType GetCapType();
    /// <summary>
    /// Specifies the ending caps.
    /// </summary>
    ASPOSE_CELLS_API void SetCapType(LineCapType value);
    /// <summary>
    /// Specifies the joining caps.
    /// </summary>
    ASPOSE_CELLS_API LineJoinType GetJoinType();
    /// <summary>
    /// Specifies the joining caps.
    /// </summary>
    ASPOSE_CELLS_API void SetJoinType(LineJoinType value);
    /// <summary>
    /// Specifies an arrowhead for the begin of a line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadStyle GetBeginType();
    /// <summary>
    /// Specifies an arrowhead for the begin of a line.
    /// </summary>
    ASPOSE_CELLS_API void SetBeginType(MsoArrowheadStyle value);
    /// <summary>
    /// Specifies an arrowhead for the end of a line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadStyle GetEndType();
    /// <summary>
    /// Specifies an arrowhead for the end of a line.
    /// </summary>
    ASPOSE_CELLS_API void SetEndType(MsoArrowheadStyle value);
    /// <summary>
    /// Specifies the length of the arrowhead for the begin of a line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadLength GetBeginArrowLength();
    /// <summary>
    /// Specifies the length of the arrowhead for the begin of a line.
    /// </summary>
    ASPOSE_CELLS_API void SetBeginArrowLength(MsoArrowheadLength value);
    /// <summary>
    /// Specifies the length of the arrowhead for the end of a line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadLength GetEndArrowLength();
    /// <summary>
    /// Specifies the length of the arrowhead for the end of a line.
    /// </summary>
    ASPOSE_CELLS_API void SetEndArrowLength(MsoArrowheadLength value);
    /// <summary>
    /// Specifies the width of the arrowhead for the begin of a line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadWidth GetBeginArrowWidth();
    /// <summary>
    /// Specifies the width of the arrowhead for the begin of a line.
    /// </summary>
    ASPOSE_CELLS_API void SetBeginArrowWidth(MsoArrowheadWidth value);
    /// <summary>
    /// Specifies the width of the arrowhead for the end of a line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadWidth GetEndArrowWidth();
    /// <summary>
    /// Specifies the width of the arrowhead for the end of a line.
    /// </summary>
    ASPOSE_CELLS_API void SetEndArrowWidth(MsoArrowheadWidth value);
    /// <summary>
    /// Gets and sets the theme color.
    /// </summary>
    /// <remarks>
    /// If the foreground color is not a theme color, NULL will be returned.
    /// </remarks>
    ASPOSE_CELLS_API ThemeColor GetThemeColor();
    /// <summary>
    /// Gets and sets the theme color.
    /// </summary>
    /// <remarks>
    /// If the foreground color is not a theme color, NULL will be returned.
    /// </remarks>
    ASPOSE_CELLS_API void SetThemeColor(const ThemeColor& value);
    /// <summary>
    /// Represents the <see cref="System.Drawing.Color"/> of the line.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Represents the <see cref="System.Drawing.Color"/> of the line.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Returns or sets the degree of transparency of the line as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Returns or sets the degree of transparency of the line as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    /// <summary>
    /// Represents the style of the line.
    /// </summary>
    ASPOSE_CELLS_API LineType GetStyle();
    /// <summary>
    /// Represents the style of the line.
    /// </summary>
    ASPOSE_CELLS_API void SetStyle(LineType value);
    /// <summary>
    /// Gets or sets the <see cref="WeightType"/> of the line.
    /// </summary>
    ASPOSE_CELLS_API WeightType GetWeight();
    /// <summary>
    /// Gets or sets the <see cref="WeightType"/> of the line.
    /// </summary>
    ASPOSE_CELLS_API void SetWeight(WeightType value);
    /// <summary>
    /// Gets or sets the weight of the line in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetWeightPt();
    /// <summary>
    /// Gets or sets the weight of the line in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetWeightPt(double value);
    /// <summary>
    /// Gets or sets the weight of the line in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API double GetWeightPx();
    /// <summary>
    /// Gets or sets the weight of the line in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetWeightPx(double value);
    /// <summary>
    /// Gets or sets format type.
    /// </summary>
    ASPOSE_CELLS_API ChartLineFormattingType GetFormattingType();
    /// <summary>
    /// Gets or sets format type.
    /// </summary>
    ASPOSE_CELLS_API void SetFormattingType(ChartLineFormattingType value);
    /// <summary>
    /// Indicates whether the color of line is automatic assigned.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticColor();
    /// <summary>
    /// Represents whether the line is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Represents whether the line is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    /// <summary>
    /// Indicates whether this line style is auto assigned.
    /// </summary>
    ASPOSE_CELLS_API bool IsAuto();
    /// <summary>
    /// Indicates whether this line style is auto assigned.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAuto(bool value);
    /// <summary>
    /// Represents gradient fill.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::GradientFill GetGradientFill();
    
};

} } }

#endif
