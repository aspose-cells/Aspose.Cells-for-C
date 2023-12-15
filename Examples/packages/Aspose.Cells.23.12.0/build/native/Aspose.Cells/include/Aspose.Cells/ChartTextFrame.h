// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHARTTEXTFRAME_H
#define ASPOSE_CELLS_CHARTS_CHARTTEXTFRAME_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ChartFrame.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ChartTextDirectionType.h"
#include "Aspose.Cells/TextAlignmentType.h"
#include "Aspose.Cells/TextDirectionType.h"

namespace Aspose { namespace Cells {
    class FontSetting;
} }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class ChartTextFrame_Impl;

/// <summary>
/// Encapsulates the object that represents the frame object which contains text.
/// </summary>
class ChartTextFrame : public ChartFrame {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ChartTextFrame_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ChartTextFrame(ChartTextFrame_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ChartTextFrame(const ChartTextFrame& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ChartTextFrame(const ChartFrame& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ChartTextFrame();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ChartTextFrame& operator=(const ChartTextFrame& src);
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
    /// Indicates whether this data labels is deleted.
    /// </summary>
    ASPOSE_CELLS_API bool IsDeleted();
    /// <summary>
    /// Indicates whether this data labels is deleted.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDeleted(bool value);
    /// <summary>
    /// Gets and sets the text horizontal alignment.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetTextHorizontalAlignment();
    /// <summary>
    /// Gets and sets the text horizontal alignment.
    /// </summary>
    ASPOSE_CELLS_API void SetTextHorizontalAlignment(TextAlignmentType value);
    /// <summary>
    /// Gets or sets the text vertical alignment of text.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetTextVerticalAlignment();
    /// <summary>
    /// Gets or sets the text vertical alignment of text.
    /// </summary>
    ASPOSE_CELLS_API void SetTextVerticalAlignment(TextAlignmentType value);
    /// <summary>
    /// Represents text rotation angle.
    /// </summary>
    /// <remarks><br>0: Not rotated.</br>
    /// <br>255: Top to Bottom.</br>
    /// <br>-90: Downward.</br>
    /// <br>90: Upward.</br></remarks>
    ASPOSE_CELLS_API int32_t GetRotationAngle();
    /// <summary>
    /// Represents text rotation angle.
    /// </summary>
    /// <remarks><br>0: Not rotated.</br>
    /// <br>255: Top to Bottom.</br>
    /// <br>-90: Downward.</br>
    /// <br>90: Upward.</br></remarks>
    ASPOSE_CELLS_API void SetRotationAngle(int32_t value);
    /// <summary>
    /// Indicates whether the text of the chart is automatically rotated.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticRotation();
    /// <summary>
    /// Returns a Characters object that represents a range of characters within the text.
    /// </summary>
    /// <param name="startIndex">The index of the start of the character.</param>
    /// <param name="length">The number of characters.</param>
    /// <returns>Characters object.</returns>
    ASPOSE_CELLS_API FontSetting Characters(int32_t startIndex, int32_t length);
    /// <summary>
    /// Represents text reading order.
    /// </summary>
    ASPOSE_CELLS_API TextDirectionType GetReadingOrder();
    /// <summary>
    /// Represents text reading order.
    /// </summary>
    ASPOSE_CELLS_API void SetReadingOrder(TextDirectionType value);
    /// <summary>
    /// Gets or sets whether a shape should be auto-fit to fully contain the text described within it. Auto-fitting is
    /// when text within a shape is scaled in order to contain all the text inside.
    /// </summary>
    ASPOSE_CELLS_API bool IsResizeShapeToFitText();
    /// <summary>
    /// Gets or sets whether a shape should be auto-fit to fully contain the text described within it. Auto-fitting is
    /// when text within a shape is scaled in order to contain all the text inside.
    /// </summary>
    ASPOSE_CELLS_API void SetIsResizeShapeToFitText(bool value);
    /// <summary>
    /// Indicates the text is auto generated.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoText();
    /// <summary>
    /// Indicates the text is auto generated.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoText(bool value);
    /// <summary>
    /// Gets or sets the text of a frame's title.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Gets or sets the text of a frame's title.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Gets or sets the text of a frame's title.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// Gets and sets a reference to the worksheet.
    /// </summary>
    ASPOSE_CELLS_API U16String GetLinkedSource();
    /// <summary>
    /// Gets and sets a reference to the worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetLinkedSource(const U16String& value);
    /// <summary>
    /// Gets and sets a reference to the worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetLinkedSource(const char16_t* value);
    /// <summary>
    /// Gets and sets the direction of text.
    /// </summary>
    ASPOSE_CELLS_API ChartTextDirectionType GetDirectionType();
    /// <summary>
    /// Gets and sets the direction of text.
    /// </summary>
    ASPOSE_CELLS_API void SetDirectionType(ChartTextDirectionType value);
    /// <summary>
    /// Gets or sets a value indicating whether the text is wrapped.
    /// </summary>
    ASPOSE_CELLS_API bool IsTextWrapped();
    /// <summary>
    /// Gets or sets a value indicating whether the text is wrapped.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTextWrapped(bool value);
    
};

} } }

#endif
