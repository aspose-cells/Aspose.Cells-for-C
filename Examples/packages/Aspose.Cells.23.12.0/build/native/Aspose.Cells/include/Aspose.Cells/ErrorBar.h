// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_ERRORBAR_H
#define ASPOSE_CELLS_CHARTS_ERRORBAR_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Line.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ErrorBarDisplayType.h"
#include "Aspose.Cells/ErrorBarType.h"

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class ErrorBar_Impl;

/// <summary>
/// Represents error bar of data series.
/// </summary>
class ErrorBar : public Line {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ErrorBar_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ErrorBar(ErrorBar_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ErrorBar(const ErrorBar& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ErrorBar(const Line& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ErrorBar();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ErrorBar& operator=(const ErrorBar& src);
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
    /// Represents error bar amount type.
    /// </summary>
    ASPOSE_CELLS_API ErrorBarType GetType();
    /// <summary>
    /// Represents error bar amount type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(ErrorBarType value);
    /// <summary>
    /// Represents error bar display type.
    /// </summary>
    ASPOSE_CELLS_API ErrorBarDisplayType GetDisplayType();
    /// <summary>
    /// Represents error bar display type.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayType(ErrorBarDisplayType value);
    /// <summary>
    /// Represents amount of error bar.
    /// <remarks> The amount must be greater than or equal to zero.</remarks>
    /// </summary>
    ASPOSE_CELLS_API double GetAmount();
    /// <summary>
    /// Represents amount of error bar.
    /// <remarks> The amount must be greater than or equal to zero.</remarks>
    /// </summary>
    ASPOSE_CELLS_API void SetAmount(double value);
    /// <summary>
    /// Indicates if formatting error bars with a T-top.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowMarkerTTop();
    /// <summary>
    /// Indicates if formatting error bars with a T-top.
    /// </summary>
    ASPOSE_CELLS_API void SetShowMarkerTTop(bool value);
    /// <summary>
    /// Represents positive error amount when error bar type is Custom.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPlusValue();
    /// <summary>
    /// Represents positive error amount when error bar type is Custom.
    /// </summary>
    ASPOSE_CELLS_API void SetPlusValue(const U16String& value);
    /// <summary>
    /// Represents positive error amount when error bar type is Custom.
    /// </summary>
    ASPOSE_CELLS_API void SetPlusValue(const char16_t* value);
    /// <summary>
    /// Represents negative error amount when error bar type is Custom.
    /// </summary>
    ASPOSE_CELLS_API U16String GetMinusValue();
    /// <summary>
    /// Represents negative error amount when error bar type is Custom.
    /// </summary>
    ASPOSE_CELLS_API void SetMinusValue(const U16String& value);
    /// <summary>
    /// Represents negative error amount when error bar type is Custom.
    /// </summary>
    ASPOSE_CELLS_API void SetMinusValue(const char16_t* value);
    
};

} } }

#endif
