// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_IMAGESAVEOPTIONS_H
#define ASPOSE_CELLS_IMAGESAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"

#include "Aspose.Cells/SaveFormat.h"

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Rendering;

class ImageSaveOptions_Impl;

/// <summary>
/// Represents image save options.
/// For advanced usage, please use <see cref="WorkbookRender"/> or <see cref="SheetRender"/>.
/// </summary>
class ImageSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ImageSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates the options for saving image file.
    /// </summary>
    /// <remarks>
    /// The default type is Tiff.
    /// </remarks>
    ASPOSE_CELLS_API ImageSaveOptions();
    /// <summary>
    /// Creates the options for saving image file.
    /// </summary>
    /// <param name="saveFormat">The file format.
    /// It should be one of following types: <see cref="SaveFormat.Tiff"/>, <see cref="SaveFormat.Svg"/>,
    /// <see cref="SaveFormat.Bmp"/>, <see cref="SaveFormat.Png"/>, <see cref="SaveFormat.Jpg"/>,
    /// <see cref="SaveFormat.Emf"/> or <see cref="SaveFormat.Gif"/>,
    /// otherwise the saved format will be set as <see cref="SaveFormat.Tiff"/> automatically.</param>
    ASPOSE_CELLS_API explicit ImageSaveOptions(SaveFormat saveFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ImageSaveOptions(ImageSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ImageSaveOptions(const ImageSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ImageSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ImageSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ImageSaveOptions& operator=(const ImageSaveOptions& src);
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
    /// Additional image creation options.
    /// </summary>
    /// <remarks>
    /// For advanced usage, please use <see cref="WorkbookRender"/> or <see cref="SheetRender"/>.
    /// </remarks>
    ASPOSE_CELLS_API ImageOrPrintOptions GetImageOrPrintOptions();
    
};

} }

#endif
