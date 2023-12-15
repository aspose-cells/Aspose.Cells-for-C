// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_LINEFORMAT_H
#define ASPOSE_CELLS_DRAWING_LINEFORMAT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/FillFormat.h"

#include "Aspose.Cells/LineCapType.h"
#include "Aspose.Cells/LineJoinType.h"
#include "Aspose.Cells/MsoArrowheadLength.h"
#include "Aspose.Cells/MsoArrowheadStyle.h"
#include "Aspose.Cells/MsoArrowheadWidth.h"
#include "Aspose.Cells/MsoLineDashStyle.h"
#include "Aspose.Cells/MsoLineStyle.h"

namespace Aspose { namespace Cells { namespace Drawing {

class LineFormat_Impl;

/// <summary>
/// Represents all setting of the line.
/// </summary>
class LineFormat : public FillFormat {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    LineFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API LineFormat(LineFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API LineFormat(const LineFormat& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API LineFormat(const FillFormat& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~LineFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API LineFormat& operator=(const LineFormat& src);
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
    /// Gets the hash code.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t GetHashCode();
    /// <summary>
    /// Specifies the line compound type.
    /// </summary>
    ASPOSE_CELLS_API MsoLineStyle GetCompoundType();
    /// <summary>
    /// Specifies the line compound type.
    /// </summary>
    ASPOSE_CELLS_API void SetCompoundType(MsoLineStyle value);
    /// <summary>
    /// Specifies the line dash type.
    /// </summary>
    ASPOSE_CELLS_API MsoLineDashStyle GetDashStyle();
    /// <summary>
    /// Specifies the line dash type.
    /// </summary>
    ASPOSE_CELLS_API void SetDashStyle(MsoLineDashStyle value);
    /// <summary>
    /// Specifies the ending caps.
    /// </summary>
    ASPOSE_CELLS_API LineCapType GetCapType();
    /// <summary>
    /// Specifies the ending caps.
    /// </summary>
    ASPOSE_CELLS_API void SetCapType(LineCapType value);
    /// <summary>
    /// Specifies the line join type.
    /// </summary>
    ASPOSE_CELLS_API LineJoinType GetJoinType();
    /// <summary>
    /// Specifies the line join type.
    /// </summary>
    ASPOSE_CELLS_API void SetJoinType(LineJoinType value);
    /// <summary>
    /// Gets and sets the begin arrow type of the line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadStyle GetBeginArrowheadStyle();
    /// <summary>
    /// Gets and sets the begin arrow type of the line.
    /// </summary>
    ASPOSE_CELLS_API void SetBeginArrowheadStyle(MsoArrowheadStyle value);
    /// <summary>
    /// Gets and sets the begin arrow width type of the line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadWidth GetBeginArrowheadWidth();
    /// <summary>
    /// Gets and sets the begin arrow width type of the line.
    /// </summary>
    ASPOSE_CELLS_API void SetBeginArrowheadWidth(MsoArrowheadWidth value);
    /// <summary>
    /// Gets and sets the begin arrow length type of the line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadLength GetBeginArrowheadLength();
    /// <summary>
    /// Gets and sets the begin arrow length type of the line.
    /// </summary>
    ASPOSE_CELLS_API void SetBeginArrowheadLength(MsoArrowheadLength value);
    /// <summary>
    /// Gets and sets the end arrow type of the line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadStyle GetEndArrowheadStyle();
    /// <summary>
    /// Gets and sets the end arrow type of the line.
    /// </summary>
    ASPOSE_CELLS_API void SetEndArrowheadStyle(MsoArrowheadStyle value);
    /// <summary>
    /// Gets and sets the end arrow width type of the line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadWidth GetEndArrowheadWidth();
    /// <summary>
    /// Gets and sets the end arrow width type of the line.
    /// </summary>
    ASPOSE_CELLS_API void SetEndArrowheadWidth(MsoArrowheadWidth value);
    /// <summary>
    /// Gets and sets the end arrow length type of the line.
    /// </summary>
    ASPOSE_CELLS_API MsoArrowheadLength GetEndArrowheadLength();
    /// <summary>
    /// Gets and sets the end arrow length type of the line.
    /// </summary>
    ASPOSE_CELLS_API void SetEndArrowheadLength(MsoArrowheadLength value);
    /// <summary>
    /// Gets or sets the weight of the line in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetWeight();
    /// <summary>
    /// Gets or sets the weight of the line in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetWeight(double value);
    
};

} } }

#endif
