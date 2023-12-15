// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTTABLEFORMAT_H
#define ASPOSE_CELLS_PIVOT_PIVOTTABLEFORMAT_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotArea;
} } }

namespace Aspose { namespace Cells {
    class Style;
} }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotTableFormat_Impl;

/// <summary>
/// Represents the format defined in the PivotTable.
/// </summary>
class PivotTableFormat {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotTableFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotTableFormat(PivotTableFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotTableFormat(const PivotTableFormat& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotTableFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotTableFormat& operator=(const PivotTableFormat& src);
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
    /// Gets the pivot area.
    /// </summary>
    ASPOSE_CELLS_API PivotArea GetPivotArea();
    /// <summary>
    /// Gets the formatted style.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Style GetStyle();
    /// <summary>
    /// Sets the style of the pivot area.
    /// </summary>
    /// <param name="style"></param>
    ASPOSE_CELLS_API void SetStyle(const Style& style);
    
};

} } }

#endif
