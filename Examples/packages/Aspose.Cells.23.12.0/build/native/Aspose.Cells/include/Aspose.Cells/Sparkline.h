// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_SPARKLINE_H
#define ASPOSE_CELLS_CHARTS_SPARKLINE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Rendering;

class Sparkline_Impl;

/// <summary>
/// A sparkline represents a tiny chart or graphic in a worksheet cell that provides a visual representation of data.
/// </summary>
class Sparkline {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Sparkline_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Sparkline(Sparkline_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Sparkline(const Sparkline& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Sparkline();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Sparkline& operator=(const Sparkline& src);
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
    /// Represents the data range of the sparkline.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDataRange();
    /// <summary>
    /// Represents the data range of the sparkline.
    /// </summary>
    ASPOSE_CELLS_API void SetDataRange(const U16String& value);
    /// <summary>
    /// Represents the data range of the sparkline.
    /// </summary>
    ASPOSE_CELLS_API void SetDataRange(const char16_t* value);
    /// <summary>
    /// Gets the row index of the sparkline.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets the column index of the sparkline.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Converts a sparkline to an image.
    /// </summary>
    /// <param name="fileName">The image file name.</param>
    /// <param name="options">The image options</param>
    ASPOSE_CELLS_API void ToImage(const U16String& fileName, const ImageOrPrintOptions& options);
    /// <summary>
    /// Converts a sparkline to an image.
    /// </summary>
    /// <param name="fileName">The image file name.</param>
    /// <param name="options">The image options</param>
    ASPOSE_CELLS_API void ToImage(const char16_t* fileName, const ImageOrPrintOptions& options);
    /// <summary>
    /// Converts a sparkline to an image.
    /// </summary>
    /// <param name="stream">The image stream.</param>
    /// <param name="options">The image options.</param>
    ASPOSE_CELLS_API Vector<uint8_t> ToImage(const ImageOrPrintOptions& options);
    
};

} } }

#endif
