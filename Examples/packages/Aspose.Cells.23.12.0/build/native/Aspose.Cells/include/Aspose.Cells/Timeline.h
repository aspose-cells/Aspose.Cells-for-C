// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TIMELINES_TIMELINE_H
#define ASPOSE_CELLS_TIMELINES_TIMELINE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Timelines {

using namespace Aspose::Cells;

class Timeline_Impl;

/// <summary>
/// Summary description of Timeline View
/// Due to MS Excel, Excel 2003 does not support Timeline
/// </summary>
class Timeline {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Timeline_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Timeline(Timeline_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Timeline(const Timeline& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Timeline();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Timeline& operator=(const Timeline& src);
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
    /// Returns or sets the caption of the specified Timeline.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCaption();
    /// <summary>
    /// Returns or sets the caption of the specified Timeline.
    /// </summary>
    ASPOSE_CELLS_API void SetCaption(const U16String& value);
    /// <summary>
    /// Returns or sets the caption of the specified Timeline.
    /// </summary>
    ASPOSE_CELLS_API void SetCaption(const char16_t* value);
    /// <summary>
    /// Returns or sets the name of the specified Timeline
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Returns or sets the name of the specified Timeline
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Returns or sets the name of the specified Timeline
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Returns or sets the horizontal offset of timeline shape from its left column, in pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLeftPixel();
    /// <summary>
    /// Returns or sets the horizontal offset of timeline shape from its left column, in pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftPixel(int32_t value);
    /// <summary>
    /// Returns or sets the vertical offset of timeline shape from its top row, in pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTopPixel();
    /// <summary>
    /// Returns or sets the vertical offset of timeline shape from its top row, in pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetTopPixel(int32_t value);
    /// <summary>
    /// Returns or sets the width of the specified timeline, in pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetWidthPixel();
    /// <summary>
    /// Returns or sets the width of the specified timeline, in pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetWidthPixel(int32_t value);
    /// <summary>
    /// Returns or sets the height of the specified timeline, in pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHeightPixel();
    /// <summary>
    /// Returns or sets the height of the specified timeline, in pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetHeightPixel(int32_t value);
    
};

} } }

#endif
