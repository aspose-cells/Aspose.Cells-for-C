// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHARTAREA_H
#define ASPOSE_CELLS_CHARTS_CHARTAREA_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ChartFrame.h"

namespace Aspose { namespace Cells {
    class Font;
} }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class ChartArea_Impl;

/// <summary>
/// Encapsulates the object that represents the chart area in the worksheet.
/// </summary>
class ChartArea : public ChartFrame {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ChartArea_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ChartArea(ChartArea_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ChartArea(const ChartArea& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ChartArea(const ChartFrame& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ChartArea();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ChartArea& operator=(const ChartArea& src);
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
    /// Gets or gets the horizontal offset from its upper left corner column.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetX();
    /// <summary>
    /// Gets or gets the horizontal offset from its upper left corner column.
    /// </summary>
    ASPOSE_CELLS_API void SetX(int32_t value);
    /// <summary>
    /// Gets or gets the vertical offset from its upper left corner row.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetY();
    /// <summary>
    /// Gets or gets the vertical offset from its upper left corner row.
    /// </summary>
    ASPOSE_CELLS_API void SetY(int32_t value);
    /// <summary>
    /// Gets or sets the vertical offset from its lower right corner row.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHeight();
    /// <summary>
    /// Gets or sets the vertical offset from its lower right corner row.
    /// </summary>
    ASPOSE_CELLS_API void SetHeight(int32_t value);
    /// <summary>
    /// Gets or sets the horizontal offset from its lower right corner column.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetWidth();
    /// <summary>
    /// Gets or sets the horizontal offset from its lower right corner column.
    /// </summary>
    ASPOSE_CELLS_API void SetWidth(int32_t value);
    /// <summary>
    /// Gets a <see cref="Font"/> object of the specified chartarea object.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    
};

} } }

#endif
