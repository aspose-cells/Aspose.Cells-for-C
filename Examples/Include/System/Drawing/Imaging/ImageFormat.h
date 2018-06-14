#ifndef _SYSTEM_DRAWING_IMAGING_IMAGEFORMAT_H_
#define _SYSTEM_DRAWING_IMAGING_IMAGEFORMAT_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Guid.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					class ASPOSE_CELLS_API ImageFormat : public Object
					{
					private:
						GuidPtr guid;
						StringPtr name;
						static intrusive_ptr<ImageFormat> memoryBMP;
						static intrusive_ptr<ImageFormat> bmp;
						static intrusive_ptr<ImageFormat> emf;
						static intrusive_ptr<ImageFormat> wmf;
						static intrusive_ptr<ImageFormat> jpeg;
						static intrusive_ptr<ImageFormat> png;
						static intrusive_ptr<ImageFormat> gif;
						static intrusive_ptr<ImageFormat> tiff;
						static intrusive_ptr<ImageFormat> exif;
						static intrusive_ptr<ImageFormat> photoCD;
						static intrusive_ptr<ImageFormat> flashPIX;
						static intrusive_ptr<ImageFormat> icon;
						
					public:
						ImageFormat(GuidPtr gui);
						ImageFormat(StringPtr name, StringPtr guid);
						virtual ~ImageFormat();

					public:
						GuidPtr GetGuid();

						static intrusive_ptr<ImageFormat> GetBmp();
						static intrusive_ptr<ImageFormat> GetEmf();
						static intrusive_ptr<ImageFormat> GetExif();
						static intrusive_ptr<ImageFormat> GetGif();
						static intrusive_ptr<ImageFormat> GetIcon();
						static intrusive_ptr<ImageFormat> GetJpeg();
						static intrusive_ptr<ImageFormat> GetMemoryBmp();
						static intrusive_ptr<ImageFormat> GetPng();
						static intrusive_ptr<ImageFormat> GetTiff();
						static intrusive_ptr<ImageFormat> GetWmf();

						bool Equals(ObjectPtr obj);
						int GetHashCode();
						StringPtr ToString();
						
					};
					typedef intrusive_ptr<ImageFormat> ImageFormatPtr;
				}
			}
		}
	}
}

#endif//_SYSTEM_DRAWING_IMAGING_IMAGEFORMAT_H_





