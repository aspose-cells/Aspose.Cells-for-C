#ifndef _SYSTEM_DRAWING_IMAGING_METAFILE_H_
#define _SYSTEM_DRAWING_IMAGING_METAFILE_H_

#include <windows.h>
#include <gdiplus.h>

#include "System/Drawing/Image.h"
#include "System/Drawing/Rectangle.h"
#include "System/Drawing/RectangleF.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/IO/Stream.h"
#include "System/Drawing/Imaging/MetafileFrameUnit.h"
#include "System/IntPtr.h"
#include "System/Drawing/Imaging/EmfType.h"
#include "System/Drawing/ComIStreamWrapper.h"
using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Drawing;
using namespace Aspose::Cells::System::IO;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					class ASPOSE_CELLS_API Metafile : public Image
					{
					private:
						//void* nativeObject;				// should be removed when added in Image class
						//intrusive_ptr<Stream> stream;	// should be removed when added in Image class
						 
						/*
						  Can not define IStream * _istreamWrapper = NULL
						  cause if do this the ~ComIStreamWrapper can not be called
						  (the destructor of IStream is not virtual  )
						 */

						ComIStreamWrapper* _istreamWrapper = NULL;
					public:
						virtual ~Metafile();
						Metafile(intrusive_ptr<IntPtr> ptr, intrusive_ptr<Stream> stream);
						Metafile(intrusive_ptr<Stream> stream);
						Metafile(StringPtr filename);
						Metafile(HENHMETAFILE henhmetafile, bool deleteEmf);
						Metafile(HDC referenceHdc, Gdiplus::EmfType emfType);
						Metafile(HDC referenceHdc, intrusive_ptr<Rectangle> frameRect);
						Metafile(HDC referenceHdc, intrusive_ptr<RectangleF> frameRect);
						Metafile(HENHMETAFILE hmetafile, Gdiplus::WmfPlaceableFileHeader wmfHeader);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc);
						Metafile(StringPtr fileName, HDC referenceHdc);
						Metafile(HDC referenceHdc, Gdiplus::EmfType emfType, StringPtr description);
						Metafile(HDC referenceHdc, intrusive_ptr<Rectangle> frameRect, Imaging::MetafileFrameUnit frameUnit);
						Metafile(HDC referenceHdc, intrusive_ptr<RectangleF> frameRect, Imaging::MetafileFrameUnit frameUnit);
						Metafile(HENHMETAFILE hmetafile, Gdiplus::WmfPlaceableFileHeader wmfHeader, bool deleteWmf);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, Gdiplus::EmfType type);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, intrusive_ptr<Rectangle> frameRect);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, intrusive_ptr<RectangleF> frameRect);
						Metafile(StringPtr fileName, HDC referenceHdc, Gdiplus::EmfType type);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<Rectangle> frameRect);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<RectangleF> frameRect);
						Metafile(HDC referenceHdc, intrusive_ptr<Rectangle> frameRect, Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type);
						Metafile(HDC referenceHdc, intrusive_ptr<RectangleF> frameRect, Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, Gdiplus::EmfType type, StringPtr description);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, intrusive_ptr<Rectangle> frameRect, Imaging::MetafileFrameUnit frameUnit);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, intrusive_ptr<RectangleF> frameRect, Imaging::MetafileFrameUnit frameUnit);
						Metafile(StringPtr fileName, HDC referenceHdc, Gdiplus::EmfType type, StringPtr description);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<Rectangle> frameRect, Imaging::MetafileFrameUnit frameUnit);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<RectangleF> frameRect,
							Imaging::MetafileFrameUnit frameUnit);
						Metafile(HDC referenceHdc, intrusive_ptr<Rectangle> frameRect,
							Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type, StringPtr description);
						Metafile(HDC referenceHdc, intrusive_ptr<RectangleF> frameRect,
							Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type, StringPtr description);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, intrusive_ptr<Rectangle> frameRect, Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, intrusive_ptr<RectangleF> frameRect, Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<Rectangle> frameRect, Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<Rectangle> frameRect, Imaging::MetafileFrameUnit frameUnit, StringPtr description);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<RectangleF> frameRect, Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<RectangleF> frameRect, Imaging::MetafileFrameUnit frameUnit, StringPtr description);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, intrusive_ptr<Rectangle> frameRect,
							Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type, StringPtr description);
						Metafile(intrusive_ptr<Stream> stream, HDC referenceHdc, intrusive_ptr<RectangleF> frameRect,
							Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type, StringPtr description);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<Rectangle> frameRect,
							Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type, StringPtr description);
						Metafile(StringPtr fileName, HDC referenceHdc, intrusive_ptr<RectangleF> frameRect,
							Imaging::MetafileFrameUnit frameUnit, Gdiplus::EmfType type, StringPtr description);

						Metafile(intrusive_ptr<Stream> stream, intrusive_ptr<IntPtr> referenceHdc, intrusive_ptr<Rectangle> frameRect,
							Imaging::MetafileFrameUnit frameUnit, System::Drawing::Imaging::EmfType type);
						Metafile(intrusive_ptr<Stream> stream, intrusive_ptr<IntPtr> referenceHdc, intrusive_ptr<RectangleF> frameRect,
							Imaging::MetafileFrameUnit frameUnit, Imaging::EmfType type);
						Metafile(intrusive_ptr<Stream> stream, intrusive_ptr<IntPtr> referenceHdc, intrusive_ptr<Rectangle> frameRect,
							Imaging::MetafileFrameUnit frameUnit, Imaging::EmfType type, StringPtr description);
						Metafile(intrusive_ptr<Stream> stream, intrusive_ptr<IntPtr> referenceHdc, intrusive_ptr<RectangleF> frameRect,
							Imaging::MetafileFrameUnit frameUnit, Imaging::EmfType type, StringPtr description);

						intrusive_ptr<IntPtr> GetHenhmetafile();
						Gdiplus::MetafileHeader Aspose::Cells::System::Drawing::Imaging::Metafile::GetMetafileHeader();
						/*static*/ Gdiplus::MetafileHeader GetMetafileHeader(HENHMETAFILE henhmetafile);
						/*static*/ Gdiplus::MetafileHeader GetMetafileHeader(intrusive_ptr<Stream> stream);
						/*static*/ Gdiplus::MetafileHeader GetMetafileHeader(StringPtr fileName);
						/*static*/ Gdiplus::MetafileHeader GetMetafileHeader(HENHMETAFILE henhmetafile, Gdiplus::WmfPlaceableFileHeader wmfHeader);
						void PlayRecord(Gdiplus::EmfPlusRecordType recordType, int flags, int dataSize, byte* data);

					public://private before
						Metafile(intrusive_ptr<IntPtr> ptr);
					};
				}
			}
		}
	}
}
#endif

