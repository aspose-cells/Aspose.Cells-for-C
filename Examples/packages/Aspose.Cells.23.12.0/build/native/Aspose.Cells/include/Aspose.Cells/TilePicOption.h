// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TILEPICOPTION_H
#define ASPOSE_CELLS_DRAWING_TILEPICOPTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/MirrorType.h"
#include "Aspose.Cells/RectangleAlignmentType.h"

namespace Aspose { namespace Cells { namespace Drawing {

class TilePicOption_Impl;

/// <summary>
/// Represents tile picture as texture.
/// </summary>
class TilePicOption {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TilePicOption_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API TilePicOption();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TilePicOption(TilePicOption_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TilePicOption(const TilePicOption& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TilePicOption();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TilePicOption& operator=(const TilePicOption& src);
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
    /// Gets or sets the X offset for tiling picture.
    /// </summary>
    ASPOSE_CELLS_API double GetOffsetX();
    /// <summary>
    /// Gets or sets the X offset for tiling picture.
    /// </summary>
    ASPOSE_CELLS_API void SetOffsetX(double value);
    /// <summary>
    /// Gets or sets the Y offset for tiling picture.
    /// </summary>
    ASPOSE_CELLS_API double GetOffsetY();
    /// <summary>
    /// Gets or sets the Y offset for tiling picture.
    /// </summary>
    ASPOSE_CELLS_API void SetOffsetY(double value);
    /// <summary>
    /// Gets or sets the X scale for tiling picture.
    /// </summary>
    ASPOSE_CELLS_API double GetScaleX();
    /// <summary>
    /// Gets or sets the X scale for tiling picture.
    /// </summary>
    ASPOSE_CELLS_API void SetScaleX(double value);
    /// <summary>
    /// Gets or sets the Y scale for tiling picture.
    /// </summary>
    ASPOSE_CELLS_API double GetScaleY();
    /// <summary>
    /// Gets or sets the Y scale for tiling picture.
    /// </summary>
    ASPOSE_CELLS_API void SetScaleY(double value);
    /// <summary>
    /// Gets or sets the mirror type for tiling.
    /// </summary>
    ASPOSE_CELLS_API MirrorType GetMirrorType();
    /// <summary>
    /// Gets or sets the mirror type for tiling.
    /// </summary>
    ASPOSE_CELLS_API void SetMirrorType(MirrorType value);
    /// <summary>
    /// Gets or sets the alignment for tiling.
    /// </summary>
    ASPOSE_CELLS_API RectangleAlignmentType GetAlignmentType();
    /// <summary>
    /// Gets or sets the alignment for tiling.
    /// </summary>
    ASPOSE_CELLS_API void SetAlignmentType(RectangleAlignmentType value);
    
};

} } }

#endif
