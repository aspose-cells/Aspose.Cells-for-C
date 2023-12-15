// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_MSOTEXTFRAME_H
#define ASPOSE_CELLS_DRAWING_MSOTEXTFRAME_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {

class MsoTextFrame_Impl;

/// <summary>
/// Represents the text frame in a Shape object.
/// </summary>
class MsoTextFrame {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    MsoTextFrame_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API MsoTextFrame(MsoTextFrame_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API MsoTextFrame(const MsoTextFrame& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~MsoTextFrame();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API MsoTextFrame& operator=(const MsoTextFrame& src);
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
    /// Indicates if size of shape is adjusted automatically according to its content.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoSize();
    /// <summary>
    /// Indicates if size of shape is adjusted automatically according to its content.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoSize(bool value);
    /// <summary>
    /// Indicates whether the margin is auto calculated.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoMargin();
    /// <summary>
    /// Indicates whether the margin is auto calculated.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoMargin(bool value);
    /// <summary>
    /// Indicates whether rotating text with shape.
    /// </summary>
    ASPOSE_CELLS_API bool GetRotateTextWithShape();
    /// <summary>
    /// Indicates whether rotating text with shape.
    /// </summary>
    ASPOSE_CELLS_API void SetRotateTextWithShape(bool value);
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
    
};

} } }

#endif
