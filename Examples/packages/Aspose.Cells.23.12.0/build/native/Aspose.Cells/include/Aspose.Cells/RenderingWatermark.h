// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_RENDERINGWATERMARK_H
#define ASPOSE_CELLS_RENDERING_RENDERINGWATERMARK_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/TextAlignmentType.h"

namespace Aspose { namespace Cells { namespace Rendering {
    class RenderingFont;
} } }

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;

class RenderingWatermark_Impl;

/// <summary>
/// Watermark for rendering.
/// </summary>
class RenderingWatermark {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RenderingWatermark_Impl* _impl;
    
public:
    /// <summary>
    /// Creates instance of text watermark.
    /// </summary>
    /// <param name="text">watermark text</param>
    /// <param name="renderingFont">watermark font</param>
    ASPOSE_CELLS_API RenderingWatermark(const U16String& text, const RenderingFont& renderingFont);
    /// <summary>
    /// Creates instance of text watermark.
    /// </summary>
    /// <param name="text">watermark text</param>
    /// <param name="renderingFont">watermark font</param>
    ASPOSE_CELLS_API RenderingWatermark(const char16_t* text, const RenderingFont& renderingFont);
    /// <summary>
    /// Creates instance of image watermark.
    /// </summary>
    /// <param name="imageData"></param>
    ASPOSE_CELLS_API explicit RenderingWatermark(const Vector<uint8_t>& imageData);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RenderingWatermark(RenderingWatermark_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RenderingWatermark(const RenderingWatermark& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RenderingWatermark();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RenderingWatermark& operator=(const RenderingWatermark& src);
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
    /// Gets or sets roation of the watermark in degrees.
    /// </summary>
    ASPOSE_CELLS_API float GetRotation();
    /// <summary>
    /// Gets or sets roation of the watermark in degrees.
    /// </summary>
    ASPOSE_CELLS_API void SetRotation(float value);
    /// <summary>
    /// Gets or sets scale relative to target page in percent.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetScaleToPagePercent();
    /// <summary>
    /// Gets or sets scale relative to target page in percent.
    /// </summary>
    ASPOSE_CELLS_API void SetScaleToPagePercent(int32_t value);
    /// <summary>
    /// Gets or sets opacity of the watermark in range [0, 1].
    /// </summary>
    ASPOSE_CELLS_API float GetOpacity();
    /// <summary>
    /// Gets or sets opacity of the watermark in range [0, 1].
    /// </summary>
    ASPOSE_CELLS_API void SetOpacity(float value);
    /// <summary>
    /// Indicates whether the watermark is placed behind page contents.
    /// </summary>
    ASPOSE_CELLS_API bool IsBackground();
    /// <summary>
    /// Indicates whether the watermark is placed behind page contents.
    /// </summary>
    ASPOSE_CELLS_API void SetIsBackground(bool value);
    /// <summary>
    /// Gets text of the watermark.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Gets font of the watermark.
    /// </summary>
    ASPOSE_CELLS_API RenderingFont GetFont();
    /// <summary>
    /// Gets image of the watermark.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetImage();
    /// <summary>
    /// Gets or sets horizontal alignment of the watermark to the page.
    /// </summary>
    /// <remarks>
    /// Only Left, Center, Right is valid. Default is Left.
    /// </remarks>
    ASPOSE_CELLS_API TextAlignmentType GetHAlignment();
    /// <summary>
    /// Gets or sets horizontal alignment of the watermark to the page.
    /// </summary>
    /// <remarks>
    /// Only Left, Center, Right is valid. Default is Left.
    /// </remarks>
    ASPOSE_CELLS_API void SetHAlignment(TextAlignmentType value);
    /// <summary>
    /// Gets or sets vertical alignment of the watermark to the page.
    /// </summary>
    /// <remarks>
    /// Only Top, Center, Bottom is valid. Default is Top.
    /// </remarks>
    ASPOSE_CELLS_API TextAlignmentType GetVAlignment();
    /// <summary>
    /// Gets or sets vertical alignment of the watermark to the page.
    /// </summary>
    /// <remarks>
    /// Only Top, Center, Bottom is valid. Default is Top.
    /// </remarks>
    ASPOSE_CELLS_API void SetVAlignment(TextAlignmentType value);
    /// <summary>
    /// Gets or sets offset value to <see cref="HAlignment"/>
    /// </summary>
    ASPOSE_CELLS_API float GetOffsetX();
    /// <summary>
    /// Gets or sets offset value to <see cref="HAlignment"/>
    /// </summary>
    ASPOSE_CELLS_API void SetOffsetX(float value);
    /// <summary>
    /// Gets or sets offset value to <see cref="VAlignment"/>
    /// </summary>
    ASPOSE_CELLS_API float GetOffsetY();
    /// <summary>
    /// Gets or sets offset value to <see cref="VAlignment"/>
    /// </summary>
    ASPOSE_CELLS_API void SetOffsetY(float value);
    
};

} } }

#endif
