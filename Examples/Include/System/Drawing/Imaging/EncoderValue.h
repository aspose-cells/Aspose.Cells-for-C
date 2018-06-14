#ifndef _SYSTEM_DRAWING_IMAGING_ENCODERVALUE_H_
#define _SYSTEM_DRAWING_IMAGING_ENCODERVALUE_H_
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					enum EncoderValue
					{
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.ColorTypeCMYK"]/*' />
						/// <devdoc>
						///    Specifies the CMYK color space.
						/// </devdoc>
						EncoderValue_ColorTypeCMYK,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.ColorTypeYCCK"]/*' />
						/// <devdoc>
						///    Specifies the YCCK color space.
						/// </devdoc>
						EncoderValue_ColorTypeYCCK,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.CompressionLZW"]/*' />
						/// <devdoc>
						///    Specifies the LZW compression method.
						/// </devdoc>
						EncoderValue_CompressionLZW,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.CompressionCCITT3"]/*' />
						/// <devdoc>
						///    For a TIFF image, specifies the CCITT3 compression method.
						/// </devdoc>
						EncoderValue_CompressionCCITT3,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.CompressionCCITT4"]/*' />
						/// <devdoc>
						///    For a TIFF image, specifies the CCITT4 compression method.
						/// </devdoc>
						EncoderValue_CompressionCCITT4,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.CompressionRle"]/*' />
						/// <devdoc>
						///    For a TIFF image, specifies the RLE compression method.
						/// </devdoc>
						EncoderValue_CompressionRle,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.CompressionNone"]/*' />
						/// <devdoc>
						///    For a TIFF image, specifies no compression.
						/// </devdoc>
						EncoderValue_CompressionNone,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.ScanMethodInterlaced"]/*' />
						/// <devdoc>
						///    Specifies interlaced mode.
						/// </devdoc>
						EncoderValue_ScanMethodInterlaced,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.ScanMethodNonInterlaced"]/*' />
						/// <devdoc>
						///    Specifies non-interlaced mode.
						/// </devdoc>
						EncoderValue_ScanMethodNonInterlaced,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.VersionGif87"]/*' />
						/// <devdoc>
						///    For a GIF image, specifies version 87.
						/// </devdoc>
						EncoderValue_VersionGif87,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.VersionGif89"]/*' />
						/// <devdoc>
						///    For a GIF images, specifies version 89a.
						/// </devdoc>
						EncoderValue_VersionGif89,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.RenderProgressive"]/*' />
						/// <devdoc>
						///    Specifies progressive mode.
						/// </devdoc>
						EncoderValue_RenderProgressive,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.RenderNonProgressive"]/*' />
						/// <devdoc>
						///    Specifies non-progressive mode.
						/// </devdoc>
						EncoderValue_RenderNonProgressive,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.TransformRotate90"]/*' />
						/// <devdoc>
						///    For a JPEG image, specifies lossless 90-degree clockwise rotation.
						/// </devdoc>
						EncoderValue_TransformRotate90,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.TransformRotate180"]/*' />
						/// <devdoc>
						///    For a JPEG image, specifies lossless 180-degree rotation.
						/// </devdoc>
						EncoderValue_TransformRotate180,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.TransformRotate270"]/*' />
						/// <devdoc>
						///    For a JPEG image, specifies lossless 270-degree clockwise rotation.
						/// </devdoc>
						EncoderValue_TransformRotate270,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.TransformFlipHorizontal"]/*' />
						/// <devdoc>
						///    For a JPEG image, specifies a lossless horizontal flip.
						/// </devdoc>
						EncoderValue_TransformFlipHorizontal,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.TransformFlipVertical"]/*' />
						/// <devdoc>
						///    For a JPEG image, specifies a lossless vertical flip.
						/// </devdoc>
						EncoderValue_TransformFlipVertical,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.MultiFrame"]/*' />
						/// <devdoc>
						///    Specifies multiframe encoding.
						/// </devdoc>
						EncoderValue_MultiFrame,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.LastFrame"]/*' />
						/// <devdoc>
						///    Specifies the last frame of a multi-frame image.
						/// </devdoc>
						EncoderValue_LastFrame,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.Flush"]/*' />
						/// <devdoc>
						///    Specifies that the encoder object is to be closed. 
						/// </devdoc>
						EncoderValue_Flush,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.FrameDimensionTime"]/*' />
						/// <devdoc>
						///    For a GIF image, specifies the time frame dimension.
						/// </devdoc>
						EncoderValue_FrameDimensionTime,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.FrameDimensionResolution"]/*' />
						/// <devdoc>
						///    Specifies the resolution frame dimension.
						/// </devdoc>
						EncoderValue_FrameDimensionResolution,
						/// <include file='doc\EncoderValue.uex' path='docs/doc[@for="EncoderValue.FrameDimensionPage"]/*' />
						/// <devdoc>
						///    For a TIFF image, specifies the page frame dimension
						/// </devdoc>
						EncoderValue_FrameDimensionPage
					};
				}
			}
		}
	}
}
#endif