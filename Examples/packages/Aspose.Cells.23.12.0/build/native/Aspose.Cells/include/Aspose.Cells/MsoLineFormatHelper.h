// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_MSOLINEFORMATHELPER_H
#define ASPOSE_CELLS_DRAWING_MSOLINEFORMATHELPER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/MsoLineDashStyle.h"
#include "Aspose.Cells/MsoLineStyle.h"

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class MsoLineFormatHelper_Impl;

/// <summary>
/// Represents line and arrowhead formatting.
/// </summary>
class MsoLineFormatHelper {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    MsoLineFormatHelper_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API MsoLineFormatHelper(MsoLineFormatHelper_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API MsoLineFormatHelper(const MsoLineFormatHelper& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~MsoLineFormatHelper();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API MsoLineFormatHelper& operator=(const MsoLineFormatHelper& src);
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
    /// Indicates whether the object is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Indicates whether the object is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    /// <summary>
    /// Returns a Style object that represents the style of the specified range.
    /// </summary>
    ASPOSE_CELLS_API MsoLineStyle GetStyle();
    /// <summary>
    /// Returns a Style object that represents the style of the specified range.
    /// </summary>
    ASPOSE_CELLS_API void SetStyle(MsoLineStyle value);
    /// <summary>
    /// Gets and sets the border line fore color.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetForeColor();
    /// <summary>
    /// Gets and sets the border line fore color.
    /// </summary>
    ASPOSE_CELLS_API void SetForeColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the border line back color.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetBackColor();
    /// <summary>
    /// Gets and sets the border line back color.
    /// </summary>
    ASPOSE_CELLS_API void SetBackColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets or sets the dash style for the specified line.
    /// </summary>
    ASPOSE_CELLS_API MsoLineDashStyle GetDashStyle();
    /// <summary>
    /// Gets or sets the dash style for the specified line.
    /// </summary>
    ASPOSE_CELLS_API void SetDashStyle(MsoLineDashStyle value);
    /// <summary>
    /// Returns or sets the degree of transparency of the specified fill as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Returns or sets the degree of transparency of the specified fill as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    /// <summary>
    /// Returns or sets the weight of the line ,in units of pt.
    /// </summary>
    ASPOSE_CELLS_API double GetWeight();
    /// <summary>
    /// Returns or sets the weight of the line ,in units of pt.
    /// </summary>
    ASPOSE_CELLS_API void SetWeight(double value);
    
};

} } }

#endif
