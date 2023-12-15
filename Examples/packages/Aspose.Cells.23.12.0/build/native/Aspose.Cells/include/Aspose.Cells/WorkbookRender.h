// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_WORKBOOKRENDER_H
#define ASPOSE_CELLS_RENDERING_WORKBOOKRENDER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Workbook;
} }

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;

class WorkbookRender_Impl;

/// <summary>
/// Represents a Workbook render.
/// The constructor of this class , must be used after modification of pagesetup, cell style.
/// </summary>
/// <remarks>
/// </remarks>
class WorkbookRender {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WorkbookRender_Impl* _impl;
    
public:
    /// <summary>
    /// The construct of WorkbookRender
    /// </summary>
    /// <param name="workbook">Indicate which workbook to be rendered.</param>
    /// <param name="options">ImageOrPrintOptions contains some property of output image</param>
    ASPOSE_CELLS_API WorkbookRender(const Workbook& workbook, const ImageOrPrintOptions& options);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WorkbookRender(WorkbookRender_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WorkbookRender(const WorkbookRender& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WorkbookRender();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WorkbookRender& operator=(const WorkbookRender& src);
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
    /// Gets the total page count of workbook.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPageCount();
    /// <summary>
    /// Get page size in inch of output image.
    /// </summary>
    /// <param name="pageIndex">The page index is based on zero.</param>
    /// <returns>Page size of image, [0] for width and [1] for height</returns>
    ASPOSE_CELLS_API Vector<float> GetPageSizeInch(int32_t pageIndex);
    /// <summary>
    /// Render whole workbook as Tiff Image to stream.
    /// </summary>
    /// <param name="stream">the stream of the output image</param>
    ASPOSE_CELLS_API Vector<uint8_t> ToImage();
    /// <summary>
    /// Render whole workbook as Tiff Image to a file.
    /// </summary>
    /// <param name="filename">the filename of the output image</param>
    ASPOSE_CELLS_API void ToImage(const U16String& filename);
    /// <summary>
    /// Render whole workbook as Tiff Image to a file.
    /// </summary>
    /// <param name="filename">the filename of the output image</param>
    ASPOSE_CELLS_API void ToImage(const char16_t* filename);
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
