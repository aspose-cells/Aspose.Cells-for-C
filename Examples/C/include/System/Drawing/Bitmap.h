#ifndef _SYSTEM_DRAWING_BITMAP_H_
#define _SYSTEM_DRAWING_BITMAP_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Type.h"
#include "System/Single.h"
#include "System/IO/Stream.h"
#include "System/Drawing/Size.h"
#include "System/Drawing/Color.h"
#include "System/Drawing/Image.h"
//#include "System/Drawing/Graphics.h"
//#include "System/Drawing/Imaging/PixelFormat.h"
#include "System/Drawing/Imaging/ImageFormat.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Drawing;
using namespace Aspose::Cells::System::Drawing::Imaging;
using namespace Aspose::Cells::System::IO;

namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API Bitmap : public Image
	{
		/*
		private:

		public:
			Bitmap(Image *original);
			Bitmap(Stream *stream);
			Bitmap(String filename);
			Bitmap(Image *original, Size *newSize);
			Bitmap(Int32 width, Int32 height);
			Bitmap(Stream *stream, bool useIcm);
			Bitmap(String filename, bool useIcm);
			Bitmap(Type *type, String resource);
			Bitmap(Image *original, Int32 width, Int32 height);
			Bitmap(Int32 width, Int32 height, Graphics *g);
			Bitmap(Int32 width, Int32 height, PixelFormat format);
			Bitmap(Int32 width, Int32 height, Int32 stride, PixelFormat format, IntPtr *scan0);

			Color* GetPixel(Int32 x, Int32 y);
			void Dispose();
			static Image* FromStream(Stream* stream);
			void SetPixel(Int32 x, Int32 y, Color* color);
			Int32 GetHeight();
			Int32 GetWidth();
			 void Save(Stream* stream, ImageFormat* format);
			 void SetResolution(Single xDpi, Single yDpi);
			 */
	};
}

}
}
}
#endif