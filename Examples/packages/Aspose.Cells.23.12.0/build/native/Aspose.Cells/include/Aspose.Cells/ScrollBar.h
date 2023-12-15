// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SCROLLBAR_H
#define ASPOSE_CELLS_DRAWING_SCROLLBAR_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells { namespace Drawing {

class ScrollBar_Impl;

/// <summary>
/// Represents a scroll bar object.
/// </summary>
/// <remarks>Scroll value must be between 0 and 30000.</remarks>
class ScrollBar : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ScrollBar_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ScrollBar(ScrollBar_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ScrollBar(const ScrollBar& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ScrollBar(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ScrollBar();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ScrollBar& operator=(const ScrollBar& src);
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
    /// Gets or sets the current value.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCurrentValue();
    /// <summary>
    /// Gets or sets the current value.
    /// </summary>
    ASPOSE_CELLS_API void SetCurrentValue(int32_t value);
    /// <summary>
    /// Gets or sets the minimum value of a scroll bar or spinner range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMin();
    /// <summary>
    /// Gets or sets the minimum value of a scroll bar or spinner range.
    /// </summary>
    ASPOSE_CELLS_API void SetMin(int32_t value);
    /// <summary>
    /// Gets or sets the maximum value of a scroll bar or spinner range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetMax();
    /// <summary>
    /// Gets or sets the maximum value of a scroll bar or spinner range.
    /// </summary>
    ASPOSE_CELLS_API void SetMax(int32_t value);
    /// <summary>
    /// Gets or sets the amount that the scroll bar or spinner is incremented a line scroll.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetIncrementalChange();
    /// <summary>
    /// Gets or sets the amount that the scroll bar or spinner is incremented a line scroll.
    /// </summary>
    ASPOSE_CELLS_API void SetIncrementalChange(int32_t value);
    /// <summary>
    /// Gets or sets page change
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPageChange();
    /// <summary>
    /// Gets or sets page change
    /// </summary>
    ASPOSE_CELLS_API void SetPageChange(int32_t value);
    /// <summary>
    /// Indicates whether the shape has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// Indicates whether the shape has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    /// <summary>
    /// Indicates whether this is a horizontal scroll bar.
    /// </summary>
    ASPOSE_CELLS_API bool IsHorizontal();
    /// <summary>
    /// Indicates whether this is a horizontal scroll bar.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHorizontal(bool value);
    
};

} } }

#endif
