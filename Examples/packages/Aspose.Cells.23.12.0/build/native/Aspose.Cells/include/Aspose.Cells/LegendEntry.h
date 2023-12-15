// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_LEGENDENTRY_H
#define ASPOSE_CELLS_CHARTS_LEGENDENTRY_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/BackgroundMode.h"

namespace Aspose { namespace Cells {
    class Font;
} }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;

class LegendEntry_Impl;

/// <summary>
/// Represents a legend entry in a chart legend.
/// </summary>
class LegendEntry {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    LegendEntry_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API LegendEntry(LegendEntry_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API LegendEntry(const LegendEntry& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~LegendEntry();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API LegendEntry& operator=(const LegendEntry& src);
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
    /// Gets and sets whether the legend entry is deleted.
    /// </summary>
    ASPOSE_CELLS_API bool IsDeleted();
    /// <summary>
    /// Gets and sets whether the legend entry is deleted.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDeleted(bool value);
    /// <summary>
    /// Gets a <see cref="Font"/> object of the specified ChartFrame object.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// Gets or sets no fill of the text.
    /// </summary>
    ASPOSE_CELLS_API bool IsTextNoFill();
    /// <summary>
    /// Gets or sets no fill of the text.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTextNoFill(bool value);
    /// <summary>
    /// True if the text in the object changes font size when the object size changes.
    /// The default value is True.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoScaleFont();
    /// <summary>
    /// True if the text in the object changes font size when the object size changes.
    /// The default value is True.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoScaleFont(bool value);
    /// <summary>
    /// Gets and sets the display mode of the background
    /// </summary>
    ASPOSE_CELLS_API BackgroundMode GetBackgroundMode();
    /// <summary>
    /// Gets and sets the display mode of the background
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundMode(BackgroundMode value);
    
};

} } }

#endif
