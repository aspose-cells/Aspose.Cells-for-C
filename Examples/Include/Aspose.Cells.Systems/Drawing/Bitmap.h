#ifndef _SYSTEM_DRAWING_BITMAP_H_
#define _SYSTEM_DRAWING_BITMAP_H_

#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Drawing/Rectangle.h"
#include "Aspose.Cells.Systems/Drawing/Image.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/BitmapData.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageLockMode.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/PixelFormat.h"
#include "GdipFuns.h"

using namespace Aspose::Cells::Systems::IO;

namespace Aspose { 
	namespace Cells { 
		namespace Systems{
			namespace Drawing {
				class ASPOSE_CELLS_API Bitmap : public Aspose::Cells::Systems::Drawing::Image
				{
				public:
					Bitmap(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> ptr);
					Bitmap(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> ptr, intrusive_ptr<Stream> stream);
					Bitmap(int width, int height);
					Bitmap(int width, int height, Aspose::Cells::Systems::Drawing::Imaging::PixelFormat pFormat);
					Bitmap(Aspose::Cells::Systems::IO::StreamPtr stream);
					Bitmap(Aspose::Cells::Systems::IO::StreamPtr stream, bool useIcm);
					Bitmap(intrusive_ptr<Aspose::Cells::Systems::Drawing::Image> original);
					Bitmap(intrusive_ptr<Aspose::Cells::Systems::Drawing::Image> original, int width, int height);

					intrusive_ptr<Color> GetPixel(int x, int y);
					void SetPixel(int x, int y, intrusive_ptr<Color> color);
					void SetResolution(float xDpi, float yDpi);
					intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::BitmapData> LockBits(intrusive_ptr<Rectangle> rect,
						Aspose::Cells::Systems::Drawing::Imaging::ImageLockMode flags, Aspose::Cells::Systems::Drawing::Imaging::PixelFormat format);
					intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::BitmapData> LockBits(intrusive_ptr<Rectangle> rect, Aspose::Cells::Systems::Drawing::Imaging::ImageLockMode flags,
						Aspose::Cells::Systems::Drawing::Imaging::PixelFormat format,
						intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::BitmapData> bitmapData);
					void UnlockBits(intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::BitmapData>  bitmapdata);
					void MakeTransparent();
					void MakeTransparent(intrusive_ptr<Color> transparentColor);
					~Bitmap();
				};
			}
		}
	}
}
#endif