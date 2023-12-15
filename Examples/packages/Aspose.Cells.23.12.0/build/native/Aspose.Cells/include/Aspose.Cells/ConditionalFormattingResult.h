// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CONDITIONALFORMATTINGRESULT_H
#define ASPOSE_CELLS_CONDITIONALFORMATTINGRESULT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

namespace Aspose { namespace Cells {
    class Style;
    class ConditionalFormattingIcon;
    class DataBar;
    class ColorScale;
} }

namespace Aspose { namespace Cells {

class ConditionalFormattingResult_Impl;

/// <summary>
/// Represents the result of conditional formatting which applies to a cell.
/// </summary>
class ConditionalFormattingResult {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ConditionalFormattingResult_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingResult(ConditionalFormattingResult_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingResult(const ConditionalFormattingResult& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ConditionalFormattingResult();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingResult& operator=(const ConditionalFormattingResult& src);
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
    /// Gets the conditional result style.
    /// </summary>
    ASPOSE_CELLS_API Style GetConditionalStyle();
    /// <summary>
    /// Gets the image of icon set.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingIcon GetConditionalFormattingIcon();
    /// <summary>
    /// Gets the DataBar object.
    /// </summary>
    ASPOSE_CELLS_API DataBar GetConditionalFormattingDataBar();
    /// <summary>
    /// Gets the ColorScale object.
    /// </summary>
    ASPOSE_CELLS_API ColorScale GetConditionalFormattingColorScale();
    /// <summary>
    /// Gets the display color of color scale.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColorScaleResult();
    
};

} }

#endif
