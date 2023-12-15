// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_MSOFORMATPICTURE_H
#define ASPOSE_CELLS_DRAWING_MSOFORMATPICTURE_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class MsoFormatPicture_Impl;

/// <summary>
/// Represents the picture format.
/// </summary>
class MsoFormatPicture {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    MsoFormatPicture_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API MsoFormatPicture(MsoFormatPicture_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API MsoFormatPicture(const MsoFormatPicture& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~MsoFormatPicture();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API MsoFormatPicture& operator=(const MsoFormatPicture& src);
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
    /// Represents the location of the top of the crop rectangle expressed, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetTopCropInch();
    /// <summary>
    /// Represents the location of the top of the crop rectangle expressed, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetTopCropInch(double value);
    /// <summary>
    /// Represents the location of the bottom of the crop rectangle expressed, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetBottomCropInch();
    /// <summary>
    /// Represents the location of the bottom of the crop rectangle expressed, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetBottomCropInch(double value);
    /// <summary>
    /// Represents the location of the left of the crop rectangle expressed, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetLeftCropInch();
    /// <summary>
    /// Represents the location of the left of the crop rectangle expressed, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftCropInch(double value);
    /// <summary>
    /// Represents the location of the right of the crop rectangle expressed, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetRightCropInch();
    /// <summary>
    /// Represents the location of the right of the crop rectangle expressed, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetRightCropInch(double value);
    /// <summary>
    /// Represents the location of the top of the crop rectangle expressed, expressed as a ratio of the image's height.
    /// </summary>
    ASPOSE_CELLS_API double GetTopCrop();
    /// <summary>
    /// Represents the location of the top of the crop rectangle expressed, expressed as a ratio of the image's height.
    /// </summary>
    ASPOSE_CELLS_API void SetTopCrop(double value);
    /// <summary>
    /// Represents the location of the bottom of the crop rectangle expressed, expressed as a ratio of the image's height.
    /// </summary>
    ASPOSE_CELLS_API double GetBottomCrop();
    /// <summary>
    /// Represents the location of the bottom of the crop rectangle expressed, expressed as a ratio of the image's height.
    /// </summary>
    ASPOSE_CELLS_API void SetBottomCrop(double value);
    /// <summary>
    /// Represents the location of the left of the crop rectangle expressed, expressed as a ratio of the image's width.
    /// </summary>
    ASPOSE_CELLS_API double GetLeftCrop();
    /// <summary>
    /// Represents the location of the left of the crop rectangle expressed, expressed as a ratio of the image's width.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftCrop(double value);
    /// <summary>
    /// Represents the location of the right of the crop rectangle expressed, expressed as a ratio of the image's width.
    /// </summary>
    ASPOSE_CELLS_API double GetRightCrop();
    /// <summary>
    /// Represents the location of the right of the crop rectangle expressed, expressed as a ratio of the image's width.
    /// </summary>
    ASPOSE_CELLS_API void SetRightCrop(double value);
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    /// <summary>
    /// Gets and sets the transparent color of the picture.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetTransparentColor();
    /// <summary>
    /// Gets and sets the transparent color of the picture.
    /// </summary>
    ASPOSE_CELLS_API void SetTransparentColor(const CellsColor& value);
    /// <summary>
    /// Represents the contrast modification for the picture.in unit of percentage.
    /// </summary>
    /// <remarks>
    /// It is between -100% and 100%. It works same as Excel 2007 or above version.
    /// </remarks>
    ASPOSE_CELLS_API double GetContrast();
    /// <summary>
    /// Represents the contrast modification for the picture.in unit of percentage.
    /// </summary>
    /// <remarks>
    /// It is between -100% and 100%. It works same as Excel 2007 or above version.
    /// </remarks>
    ASPOSE_CELLS_API void SetContrast(double value);
    /// <summary>
    /// Represents the brightness modification for the picture in unit of percentage.
    /// </summary>
    /// <remarks>
    /// It is between -100% and 100%. It works same as Excel 2007 or above version.
    /// </remarks>
    ASPOSE_CELLS_API double GetBrightness();
    /// <summary>
    /// Represents the brightness modification for the picture in unit of percentage.
    /// </summary>
    /// <remarks>
    /// It is between -100% and 100%. It works same as Excel 2007 or above version.
    /// </remarks>
    ASPOSE_CELLS_API void SetBrightness(double value);
    /// <summary>
    /// Represents gamma of the picture.
    /// </summary>
    ASPOSE_CELLS_API double GetGamma();
    /// <summary>
    /// Represents gamma of the picture.
    /// </summary>
    ASPOSE_CELLS_API void SetGamma(double value);
    /// <summary>
    /// Indicates whether this picture should display in two-color black and white.
    /// </summary>
    ASPOSE_CELLS_API bool IsBiLevel();
    /// <summary>
    /// Indicates whether this picture should display in two-color black and white.
    /// </summary>
    ASPOSE_CELLS_API void SetIsBiLevel(bool value);
    /// <summary>
    /// Indicates whether this picture should display in grayscale.
    /// </summary>
    ASPOSE_CELLS_API bool IsGray();
    /// <summary>
    /// Indicates whether this picture should display in grayscale.
    /// </summary>
    ASPOSE_CELLS_API void SetIsGray(bool value);
    /// <summary>
    /// Gets the hash code.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t GetHashCode();
    
};

} } }

#endif
