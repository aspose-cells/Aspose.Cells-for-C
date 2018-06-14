#ifndef _SYSTEM_DRAWING_BITMAP_H_
#define _SYSTEM_DRAWING_BITMAP_H_

#include "System/IO/Stream.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/Image.h"
#include "System/Drawing/Imaging/BitmapData.h"
#include "System/Drawing/Imaging/ImageLockMode.h"
#include "System/Drawing/Imaging/PixelFormat.h"
#include "GdipFuns.h"

using namespace Aspose::Cells::System::IO;

namespace Aspose { 
	namespace Cells { 
		namespace System{
			namespace Drawing {
				class ASPOSE_CELLS_API Bitmap : public Aspose::Cells::System::Drawing::Image
				{
				public:
					Bitmap(intrusive_ptr<IntPtr> ptr);
					Bitmap(intrusive_ptr<IntPtr> ptr, intrusive_ptr<Stream> stream);
					Bitmap(int width, int height);
					Bitmap(int width, int height, Aspose::Cells::System::Drawing::Imaging::PixelFormat pFormat);
					Bitmap(StreamPtr stream);
					Bitmap(StreamPtr stream, bool useIcm);
					Bitmap(intrusive_ptr<Aspose::Cells::System::Drawing::Image> original);
					Bitmap(intrusive_ptr<Aspose::Cells::System::Drawing::Image> original, int width, int height);

					intrusive_ptr<Color> GetPixel(int x, int y);
					void SetPixel(int x, int y, intrusive_ptr<Color> color);
					void SetResolution(float xDpi, float yDpi);
					intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::BitmapData> LockBits(intrusive_ptr<Rectangle> rect,
						Aspose::Cells::System::Drawing::Imaging::ImageLockMode flags, Aspose::Cells::System::Drawing::Imaging::PixelFormat format);
					intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::BitmapData> LockBits(intrusive_ptr<Rectangle> rect, Aspose::Cells::System::Drawing::Imaging::ImageLockMode flags,
						Aspose::Cells::System::Drawing::Imaging::PixelFormat format,
						intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::BitmapData> bitmapData);
					void UnlockBits(intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::BitmapData>  bitmapdata);
					void MakeTransparent();
					void MakeTransparent(intrusive_ptr<Color> transparentColor);
					~Bitmap();
				};
			}
		}
	}
}
#endif