// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_PICFORMATOPTION_H
#define ASPOSE_CELLS_DRAWING_PICFORMATOPTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/FillPictureType.h"

namespace Aspose { namespace Cells { namespace Drawing {

class PicFormatOption_Impl;

/// <summary>
/// Represents picture format option
/// </summary>
class PicFormatOption {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PicFormatOption_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API PicFormatOption();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PicFormatOption(PicFormatOption_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PicFormatOption(const PicFormatOption& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PicFormatOption();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PicFormatOption& operator=(const PicFormatOption& src);
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
    /// Gets or sets the picture fill type.
    /// </summary>
    ASPOSE_CELLS_API FillPictureType GetType();
    /// <summary>
    /// Gets or sets the picture fill type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(FillPictureType value);
    /// <summary>
    /// Gets or sets how many the picture stack and scale with.
    /// </summary>
    ASPOSE_CELLS_API double GetScale();
    /// <summary>
    /// Gets or sets how many the picture stack and scale with.
    /// </summary>
    ASPOSE_CELLS_API void SetScale(double value);
    /// <summary>
    /// Gets or sets the left offset for stretching picture.
    /// </summary>
    ASPOSE_CELLS_API double GetLeft();
    /// <summary>
    /// Gets or sets the left offset for stretching picture.
    /// </summary>
    ASPOSE_CELLS_API void SetLeft(double value);
    /// <summary>
    /// Gets or sets the top offset for stretching picture.
    /// </summary>
    ASPOSE_CELLS_API double GetTop();
    /// <summary>
    /// Gets or sets the top offset for stretching picture.
    /// </summary>
    ASPOSE_CELLS_API void SetTop(double value);
    /// <summary>
    /// Gets or sets the bottom offset for stretching picture.
    /// </summary>
    ASPOSE_CELLS_API double GetBottom();
    /// <summary>
    /// Gets or sets the bottom offset for stretching picture.
    /// </summary>
    ASPOSE_CELLS_API void SetBottom(double value);
    /// <summary>
    /// Gets or sets the right offset for stretching picture.
    /// </summary>
    ASPOSE_CELLS_API double GetRight();
    /// <summary>
    /// Gets or sets the right offset for stretching picture.
    /// </summary>
    ASPOSE_CELLS_API void SetRight(double value);
    
};

} } }

#endif
