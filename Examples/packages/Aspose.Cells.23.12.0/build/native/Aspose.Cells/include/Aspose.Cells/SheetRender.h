// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_SHEETRENDER_H
#define ASPOSE_CELLS_RENDERING_SHEETRENDER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Worksheet;
} }

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;

class SheetRender_Impl;

/// <summary>
/// Represents a worksheet render which can render worksheet to various images such as (BMP, PNG, JPEG, TIFF..)
/// The constructor of this class , must be used after modification of pagesetup, cell style.
/// </summary>
class SheetRender {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SheetRender_Impl* _impl;
    
public:
    /// <summary>
    /// the construct of SheetRender, need worksheet and ImageOrPrintOptions as params
    /// </summary>
    /// <param name="worksheet">Indicate which spreadsheet to be rendered.</param>
    /// <param name="options">ImageOrPrintOptions contains some property of output image</param>
    ASPOSE_CELLS_API SheetRender(const Worksheet& worksheet, const ImageOrPrintOptions& options);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SheetRender(SheetRender_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SheetRender(const SheetRender& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SheetRender();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SheetRender& operator=(const SheetRender& src);
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
    /// Gets the total page count of current worksheet.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPageCount();
    /// <summary>
    /// Gets calculated page scale of the sheet.
    /// Returns the set scale if <see cref="PageSetup.Zoom"/> is set. Otherwise, returns the calculated scale according to <see cref="PageSetup.FitToPagesWide"/> and <see cref="PageSetup.FitToPagesTall"/>.
    /// </summary>
    ASPOSE_CELLS_API double GetPageScale();
    /// <summary>
    /// Get page size in inch of output image.
    /// </summary>
    /// <param name="pageIndex">The page index is based on zero.</param>
    /// <returns>Page size of image, [0] for width and [1] for height</returns>
    ASPOSE_CELLS_API Vector<float> GetPageSizeInch(int32_t pageIndex);
    /// <summary>
    /// Render certain page to a file.
    /// </summary>
    /// <param name="pageIndex">indicate which page is to be converted</param>
    /// <param name="fileName">filename of the output image</param>
    ASPOSE_CELLS_API void ToImage(int32_t pageIndex, const U16String& fileName);
    /// <summary>
    /// Render certain page to a file.
    /// </summary>
    /// <param name="pageIndex">indicate which page is to be converted</param>
    /// <param name="fileName">filename of the output image</param>
    ASPOSE_CELLS_API void ToImage(int32_t pageIndex, const char16_t* fileName);
    /// <summary>
    /// Render certain page to a stream.
    /// </summary>
    /// <param name="pageIndex">indicate which page is to be converted</param>
    /// <param name="stream">the stream of the output image</param>
    ASPOSE_CELLS_API Vector<uint8_t> ToImage(int32_t pageIndex);
    /// <summary>
    /// Releases resources created and used for rendering.
    /// </summary>
    ASPOSE_CELLS_API void Dispose();
    
};

} } }

#endif
