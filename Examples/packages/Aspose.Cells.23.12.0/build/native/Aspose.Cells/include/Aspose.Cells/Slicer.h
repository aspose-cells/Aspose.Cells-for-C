// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SLICERS_SLICER_H
#define ASPOSE_CELLS_SLICERS_SLICER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PlacementType.h"
#include "Aspose.Cells/SlicerStyleType.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotTable;
} } }

namespace Aspose { namespace Cells { namespace Slicers {
    class SlicerCache;
} } }

namespace Aspose { namespace Cells {
    class Worksheet;
} }

namespace Aspose { namespace Cells { namespace Slicers {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;
using namespace Aspose::Cells::Pivot;

class Slicer_Impl;

/// <summary>
/// summary description of Slicer View
/// </summary>
class Slicer {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Slicer_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Slicer(Slicer_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Slicer(const Slicer& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Slicer();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Slicer& operator=(const Slicer& src);
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
    /// Adds PivotTable connection.
    /// </summary>
    /// <param name="pivot">The PivotTable object</param>
    ASPOSE_CELLS_API void AddPivotConnection(const PivotTable& pivot);
    /// <summary>
    /// Removes PivotTable connection.
    /// </summary>
    /// <param name="pivot">The PivotTable object</param>
    ASPOSE_CELLS_API void RemovePivotConnection(const PivotTable& pivot);
    /// <summary>
    /// Specifies the title of the current Slicer object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTitle();
    /// <summary>
    /// Specifies the title of the current Slicer object.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const U16String& value);
    /// <summary>
    /// Specifies the title of the current Slicer object.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const char16_t* value);
    /// <summary>
    /// Returns or sets the descriptive (alternative) text string of the Slicer object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAlternativeText();
    /// <summary>
    /// Returns or sets the descriptive (alternative) text string of the Slicer object.
    /// </summary>
    ASPOSE_CELLS_API void SetAlternativeText(const U16String& value);
    /// <summary>
    /// Returns or sets the descriptive (alternative) text string of the Slicer object.
    /// </summary>
    ASPOSE_CELLS_API void SetAlternativeText(const char16_t* value);
    /// <summary>
    /// Indicates whether the slicer object is printable.
    /// </summary>
    ASPOSE_CELLS_API bool IsPrintable();
    /// <summary>
    /// Indicates whether the slicer object is printable.
    /// </summary>
    ASPOSE_CELLS_API void SetIsPrintable(bool value);
    /// <summary>
    /// Indicates whether the slicer shape is locked.
    /// </summary>
    ASPOSE_CELLS_API bool IsLocked();
    /// <summary>
    /// Indicates whether the slicer shape is locked.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLocked(bool value);
    /// <summary>
    /// Represents the way the drawing object is attached to the cells below it.
    /// The property controls the placement of an object on a worksheet.
    /// </summary>
    ASPOSE_CELLS_API PlacementType GetPlacement();
    /// <summary>
    /// Represents the way the drawing object is attached to the cells below it.
    /// The property controls the placement of an object on a worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetPlacement(PlacementType value);
    /// <summary>
    /// Indicates whether locking aspect ratio.
    /// </summary>
    ASPOSE_CELLS_API bool GetLockedAspectRatio();
    /// <summary>
    /// Indicates whether locking aspect ratio.
    /// </summary>
    ASPOSE_CELLS_API void SetLockedAspectRatio(bool value);
    /// <summary>
    /// Indicates whether the specified slicer can be moved or resized by using the user interface.
    /// </summary>
    ASPOSE_CELLS_API bool GetLockedPosition();
    /// <summary>
    /// Indicates whether the specified slicer can be moved or resized by using the user interface.
    /// </summary>
    ASPOSE_CELLS_API void SetLockedPosition(bool value);
    /// <summary>
    /// Refreshing the slicer.Meanwhile, Refreshing and Calculating  relative PivotTables.
    /// </summary>
    ASPOSE_CELLS_API void Refresh();
    /// <summary>
    /// Returns the SlicerCache object associated with the slicer. Read-only.
    /// </summary>
    ASPOSE_CELLS_API SlicerCache GetSlicerCache();
    /// <summary>
    /// Returns the Worksheet object that represents the sheet that contains the slicer. Read-only.
    /// </summary>
    ASPOSE_CELLS_API Worksheet GetParent();
    /// <summary>
    /// Specify the type of Built-in slicer style
    /// the default type is SlicerStyleLight1
    /// </summary>
    ASPOSE_CELLS_API SlicerStyleType GetStyleType();
    /// <summary>
    /// Specify the type of Built-in slicer style
    /// the default type is SlicerStyleLight1
    /// </summary>
    ASPOSE_CELLS_API void SetStyleType(SlicerStyleType value);
    /// <summary>
    /// Returns or sets the name of the specified slicer
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Returns or sets the name of the specified slicer
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Returns or sets the name of the specified slicer
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Returns or sets the caption of the specified slicer.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCaption();
    /// <summary>
    /// Returns or sets the caption of the specified slicer.
    /// </summary>
    ASPOSE_CELLS_API void SetCaption(const U16String& value);
    /// <summary>
    /// Returns or sets the caption of the specified slicer.
    /// </summary>
    ASPOSE_CELLS_API void SetCaption(const char16_t* value);
    /// <summary>
    /// Returns or sets whether the header that displays the slicer Caption is visible
    /// the default value is true
    /// </summary>
    ASPOSE_CELLS_API bool GetCaptionVisible();
    /// <summary>
    /// Returns or sets whether the header that displays the slicer Caption is visible
    /// the default value is true
    /// </summary>
    ASPOSE_CELLS_API void SetCaptionVisible(bool value);
    /// <summary>
    /// Returns or sets the number of columns in the specified slicer.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetNumberOfColumns();
    /// <summary>
    /// Returns or sets the number of columns in the specified slicer.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberOfColumns(int32_t value);
    /// <summary>
    /// Returns or sets the horizontal offset of slicer shape from its left column, in pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLeftPixel();
    /// <summary>
    /// Returns or sets the horizontal offset of slicer shape from its left column, in pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftPixel(int32_t value);
    /// <summary>
    /// Returns or sets the vertical offset of slicer shape from its top row, in pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTopPixel();
    /// <summary>
    /// Returns or sets the vertical offset of slicer shape from its top row, in pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetTopPixel(int32_t value);
    /// <summary>
    /// Returns or sets the width of the specified slicer, in points.
    /// </summary>
    ASPOSE_CELLS_API double GetWidth();
    /// <summary>
    /// Returns or sets the width of the specified slicer, in points.
    /// </summary>
    ASPOSE_CELLS_API void SetWidth(double value);
    /// <summary>
    /// Returns or sets the width of the specified slicer, in pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetWidthPixel();
    /// <summary>
    /// Returns or sets the width of the specified slicer, in pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetWidthPixel(int32_t value);
    /// <summary>
    /// Returns or sets the height of the specified slicer, in points.
    /// </summary>
    ASPOSE_CELLS_API double GetHeight();
    /// <summary>
    /// Returns or sets the height of the specified slicer, in points.
    /// </summary>
    ASPOSE_CELLS_API void SetHeight(double value);
    /// <summary>
    /// Returns or sets the height of the specified slicer, in pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHeightPixel();
    /// <summary>
    /// Returns or sets the height of the specified slicer, in pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetHeightPixel(int32_t value);
    /// <summary>
    /// Gets or sets the width in unit of pixels for each column of the slicer. 
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumnWidthPixel();
    /// <summary>
    /// Gets or sets the width in unit of pixels for each column of the slicer. 
    /// </summary>
    ASPOSE_CELLS_API void SetColumnWidthPixel(int32_t value);
    /// <summary>
    /// Returns or sets the width, in points, of each column in the slicer.
    /// </summary>
    ASPOSE_CELLS_API double GetColumnWidth();
    /// <summary>
    /// Returns or sets the width, in points, of each column in the slicer.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnWidth(double value);
    /// <summary>
    /// Returns or sets the height, in pixels, of each row in the specified slicer.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRowHeightPixel();
    /// <summary>
    /// Returns or sets the height, in pixels, of each row in the specified slicer.
    /// </summary>
    ASPOSE_CELLS_API void SetRowHeightPixel(int32_t value);
    /// <summary>
    /// Returns or sets the height, in points, of each row in the specified slicer.
    /// </summary>
    ASPOSE_CELLS_API double GetRowHeight();
    /// <summary>
    /// Returns or sets the height, in points, of each row in the specified slicer.
    /// </summary>
    ASPOSE_CELLS_API void SetRowHeight(double value);
    
};

} } }

#endif
