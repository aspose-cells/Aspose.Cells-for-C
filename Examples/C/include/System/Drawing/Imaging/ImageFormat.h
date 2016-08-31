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
						static intrusive_ptr<ImageFormat> memoryBMP;// = new ImageFormat(new Guid("{b96b3caa-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> bmp;// = new ImageFormat(new Guid("{b96b3cab-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> emf;// = new ImageFormat(new Guid("{b96b3cac-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> wmf;// = new ImageFormat(new Guid("{b96b3cad-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> jpeg;// = new ImageFormat(new Guid("{b96b3cae-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> png;// = new ImageFormat(new Guid("{b96b3caf-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> gif;// = new ImageFormat(new Guid("{b96b3cb0-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> tiff;// = new ImageFormat(new Guid("{b96b3cb1-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> exif;// = new ImageFormat(new Guid("{b96b3cb2-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> photoCD;// = new ImageFormat(new Guid("{b96b3cb3-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> flashPIX;// = new ImageFormat(new Guid("{b96b3cb4-0728-11d3-9d7b-0000f81ef32e}"));
						static intrusive_ptr<ImageFormat> icon;// = new ImageFormat(new Guid("{b96b3cb5-0728-11d3-9d7b-0000f81ef32e}"));
						
					public:
						ImageFormat(GuidPtr gui);

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





