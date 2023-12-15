// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_PICTURE_H
#define ASPOSE_CELLS_DRAWING_PICTURE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"
#include "Aspose.Cells/Color.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ImageType.h"

namespace Aspose { namespace Cells {
    class CopyOptions;
} }

namespace Aspose { namespace Cells { namespace Drawing {
    class SignatureLine;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class Picture_Impl;

/// <summary>
/// Encapsulates the object that represents a single picture in a spreadsheet.
/// </summary>
class Picture : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Picture_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Picture(Picture_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Picture(const Aspose::Cells::Drawing::Picture& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API Picture(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Picture();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture& operator=(const Aspose::Cells::Drawing::Picture& src);
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
    /// Copy the picture.
    /// </summary>
    /// <param name="source">The source picture.</param>
    /// <param name="options">The copy options.</param>
    ASPOSE_CELLS_API void Copy(const Aspose::Cells::Drawing::Picture& source, const CopyOptions& options);
    /// <summary>
    /// Moves the picture to a specified location.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    ASPOSE_CELLS_API void Move(int32_t upperLeftRow, int32_t upperLeftColumn);
    /// <summary>
    /// Gets the original height of the picture.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetOriginalHeight();
    /// <summary>
    /// Gets the original width of the picture.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetOriginalWidth();
    /// <summary>
    /// Represents the <see cref="System.Drawing.Color"/> of the border line of a picture.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetBorderLineColor();
    /// <summary>
    /// Represents the <see cref="System.Drawing.Color"/> of the border line of a picture.
    /// </summary>
    ASPOSE_CELLS_API void SetBorderLineColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets or sets the weight of the border line of a picture in units of pt.
    /// </summary>
    ASPOSE_CELLS_API double GetBorderWeight();
    /// <summary>
    /// Gets or sets the weight of the border line of a picture in units of pt.
    /// </summary>
    ASPOSE_CELLS_API void SetBorderWeight(double value);
    /// <summary>
    /// Gets the data of the picture.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetData();
    /// <summary>
    /// Gets the data of the picture.
    /// </summary>
    ASPOSE_CELLS_API void SetData(const Vector<uint8_t>& value);
    /// <summary>
    /// Gets or sets the path and name of the source file for the linked image.
    /// </summary>
    /// <remarks>
    /// The default value is an empty string.
    /// If SourceFullName is not an empty string, the image is linked.
    /// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetSourceFullName();
    /// <summary>
    /// Gets or sets the path and name of the source file for the linked image.
    /// </summary>
    /// <remarks>
    /// The default value is an empty string.
    /// If SourceFullName is not an empty string, the image is linked.
    /// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
    /// </remarks>
    ASPOSE_CELLS_API void SetSourceFullName(const U16String& value);
    /// <summary>
    /// Gets or sets the path and name of the source file for the linked image.
    /// </summary>
    /// <remarks>
    /// The default value is an empty string.
    /// If SourceFullName is not an empty string, the image is linked.
    /// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
    /// </remarks>
    ASPOSE_CELLS_API void SetSourceFullName(const char16_t* value);
    /// <summary>
    /// Gets and sets the data of the formula.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFormula();
    /// <summary>
    /// Gets and sets the data of the formula.
    /// </summary>
    ASPOSE_CELLS_API void SetFormula(const U16String& value);
    /// <summary>
    /// Gets and sets the data of the formula.
    /// </summary>
    ASPOSE_CELLS_API void SetFormula(const char16_t* value);
    /// <summary>
    /// True indicates that the size of the ole object will be auto changed as the size of snapshot of the embedded content
    /// when the ole object is activated.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoSize();
    /// <summary>
    /// True indicates that the size of the ole object will be auto changed as the size of snapshot of the embedded content
    /// when the ole object is activated.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoSize(bool value);
    /// <summary>
    /// Returns true if the picture is linked to a file.
    /// </summary>
    ASPOSE_CELLS_API bool IsLink();
    /// <summary>
    /// Returns true if the picture is linked to a file.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLink(bool value);
    /// <summary>
    /// Gets or sets whether dynamic data exchange
    /// </summary>
    ASPOSE_CELLS_API bool IsDynamicDataExchange();
    /// <summary>
    /// Gets or sets whether dynamic data exchange
    /// </summary>
    ASPOSE_CELLS_API void SetIsDynamicDataExchange(bool value);
    /// <summary>
    /// True if the specified object is displayed as an icon
    /// and the image will not be auto changed.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayAsIcon();
    /// <summary>
    /// True if the specified object is displayed as an icon
    /// and the image will not be auto changed.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayAsIcon(bool value);
    /// <summary>
    /// Gets the image format of the picture.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::ImageType GetImageType();
    /// <summary>
    /// Gets the original height of picture, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetOriginalHeightCM();
    /// <summary>
    /// Gets the original width of picture, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetOriginalWidthCM();
    /// <summary>
    /// Gets the original height of picture, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetOriginalHeightInch();
    /// <summary>
    /// Gets the original width of picture, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetOriginalWidthInch();
    /// <summary>
    /// Gets and sets the signature line
    /// </summary>
    ASPOSE_CELLS_API SignatureLine GetSignatureLine();
    /// <summary>
    /// Gets and sets the signature line
    /// </summary>
    ASPOSE_CELLS_API void SetSignatureLine(const SignatureLine& value);
    
};

} } }

#endif
