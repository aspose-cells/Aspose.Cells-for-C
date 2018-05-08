#ifndef _SYSTEM_DRAWING_IMAGING_IMAGECODECFLAGS_H_
#define _SYSTEM_DRAWING_IMAGING_IMAGECODECFLAGS_H_

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					enum ImageCodecFlags
					{
						/// <summary>The codec supports encoding (saving).</summary>
						ImageCodecFlags_Encoder = 1,
						/// <summary>The codec supports decoding (reading).</summary>
						ImageCodecFlags_Decoder = 2,
						/// <summary>The codec supports raster images (bitmaps).</summary>
						ImageCodecFlags_SupportBitmap = 4,
						/// <summary>The codec supports vector images (metafiles).</summary>
						ImageCodecFlags_SupportVector = 8,
						/// <summary>The encoder requires a seekable output stream.</summary>
						ImageCodecFlags_SeekableEncode = 16,
						/// <summary>The decoder has blocking behavior during the decoding process.</summary>
						ImageCodecFlags_BlockingDecode = 32,
						/// <summary>The codec is built into GDI+.</summary>
						ImageCodecFlags_Builtin = 65536,
						/// <summary>Not used.</summary>
						ImageCodecFlags_System = 131072,
						/// <summary>Not used.</summary>
						ImageCodecFlags_User = 262144
					};
				}
			}
		}
	}
}
#endif