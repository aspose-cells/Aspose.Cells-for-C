// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_SHAPETEXTALIGNMENT_H
#define ASPOSE_CELLS_DRAWING_TEXTS_SHAPETEXTALIGNMENT_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/AutoShapeType.h"
#include "Aspose.Cells/TextOverflowType.h"
#include "Aspose.Cells/TextVerticalType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

using namespace Aspose::Cells::Drawing;

class ShapeTextAlignment_Impl;

/// <summary>
/// Represents the setting of shape's text alignment;
/// </summary>
class ShapeTextAlignment {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapeTextAlignment_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapeTextAlignment(ShapeTextAlignment_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapeTextAlignment(const ShapeTextAlignment& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapeTextAlignment();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapeTextAlignment& operator=(const ShapeTextAlignment& src);
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
    /// Gets and sets the text wrapped type of the shape which contains text.
    /// </summary>
    ASPOSE_CELLS_API bool IsTextWrapped();
    /// <summary>
    /// Gets and sets the text wrapped type of the shape which contains text.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTextWrapped(bool value);
    /// <summary>
    /// Indicates whether rotating text with shape.
    /// </summary>
    ASPOSE_CELLS_API bool GetRotateTextWithShape();
    /// <summary>
    /// Indicates whether rotating text with shape.
    /// </summary>
    ASPOSE_CELLS_API void SetRotateTextWithShape(bool value);
    /// <summary>
    /// Gets and sets the text vertical overflow type of the text box.
    /// </summary>
    ASPOSE_CELLS_API TextOverflowType GetTextVerticalOverflow();
    /// <summary>
    /// Gets and sets the text vertical overflow type of the text box.
    /// </summary>
    ASPOSE_CELLS_API void SetTextVerticalOverflow(TextOverflowType value);
    /// <summary>
    /// Gets and sets the text horizontal overflow type of the text box.
    /// </summary>
    ASPOSE_CELLS_API TextOverflowType GetTextHorizontalOverflow();
    /// <summary>
    /// Gets and sets the text horizontal overflow type of the text box.
    /// </summary>
    ASPOSE_CELLS_API void SetTextHorizontalOverflow(TextOverflowType value);
    /// <summary>
    /// Gets and sets the rotation of the shape.
    /// </summary>
    ASPOSE_CELLS_API double GetRotationAngle();
    /// <summary>
    /// Gets and sets the rotation of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetRotationAngle(double value);
    /// <summary>
    /// Gets and sets the text direction.
    /// </summary>
    ASPOSE_CELLS_API TextVerticalType GetTextVerticalType();
    /// <summary>
    /// Gets and sets the text direction.
    /// </summary>
    ASPOSE_CELLS_API void SetTextVerticalType(TextVerticalType value);
    /// <summary>
    /// Indicates whether the shape is locked when worksheet is protected.
    /// </summary>
    /// <remarks>
    /// Only works when worksheet is protected.
    /// </remarks>
    ASPOSE_CELLS_API bool IsLockedText();
    /// <summary>
    /// Indicates whether the shape is locked when worksheet is protected.
    /// </summary>
    /// <remarks>
    /// Only works when worksheet is protected.
    /// </remarks>
    ASPOSE_CELLS_API void SetIsLockedText(bool value);
    /// <summary>
    /// Indicates if size of shape is adjusted automatically according to its content.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoSize();
    /// <summary>
    /// Indicates if size of shape is adjusted automatically according to its content.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoSize(bool value);
    /// <summary>
    /// Gets and set the transform type of text.
    /// </summary>
    ASPOSE_CELLS_API AutoShapeType GetTextShapeType();
    /// <summary>
    /// Gets and set the transform type of text.
    /// </summary>
    ASPOSE_CELLS_API void SetTextShapeType(AutoShapeType value);
    /// <summary>
    /// Returns the top margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API double GetTopMarginPt();
    /// <summary>
    /// Returns the top margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API void SetTopMarginPt(double value);
    /// <summary>
    /// Returns the bottom margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API double GetBottomMarginPt();
    /// <summary>
    /// Returns the bottom margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API void SetBottomMarginPt(double value);
    /// <summary>
    /// Returns the left margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API double GetLeftMarginPt();
    /// <summary>
    /// Returns the left margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API void SetLeftMarginPt(double value);
    /// <summary>
    /// Returns the right margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API double GetRightMarginPt();
    /// <summary>
    /// Returns the right margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API void SetRightMarginPt(double value);
    /// <summary>
    /// Indicates whether the margin of the text frame is automatic.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoMargin();
    /// <summary>
    /// Indicates whether the margin of the text frame is automatic.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoMargin(bool value);
    /// <summary>
    /// Gets and sets the number of columns of text in the bounding rectangle.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetNumberOfColumns();
    /// <summary>
    /// Gets and sets the number of columns of text in the bounding rectangle.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberOfColumns(int32_t value);
    /// <summary>
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t GetHashCode();
    
};

} } } }

#endif
