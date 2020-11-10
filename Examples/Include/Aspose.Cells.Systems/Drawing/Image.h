#ifndef _SYSTEM_DRAWING_IMAGE_H_
#define _SYSTEM_DRAWING_IMAGE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Drawing/Size.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageFormat.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageCodecInfo.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/EncoderParameters.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/PixelFormat.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ColorPalette.h"
#include "Aspose.Cells.Systems/Drawing/ComIStreamWrapper.h"///
#include "GdipFuns.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::IO;
using namespace Aspose::Cells::Systems::Drawing::Imaging;

namespace Aspose { 
namespace Cells { 
namespace Systems {
namespace Drawing { 
	class Bitmap;
	class ASPOSE_CELLS_API Image : public Object, public ICloneable, public IDisposable 
	{
	public:
		intrusive_ptr<Stream> _stream;
		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> nativeObject;
		ObjectPtr tag;
		ComIStreamWrapper* _istreamWrapper = NULL;///
		static ComIStreamWrapper* _sStreamWrapper;///
	public:
		Image();
		void InitVars();
		static intrusive_ptr<Image> FromStream(intrusive_ptr<Stream>);
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageCodecInfo> findEncoderForFormat(intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> format);
        void Save(intrusive_ptr<String> filename);
		void Save(intrusive_ptr<String> filename, intrusive_ptr<ImageFormat> format);
		void Save(intrusive_ptr<Stream> filename, intrusive_ptr<ImageFormat> format);
		void Save(StringPtr filename, intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageCodecInfo> encoder, intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::EncoderParameters> encoderParams);
		void Save(Aspose::Cells::Systems::IO::StreamPtr stream, intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageCodecInfo> encoder, intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::EncoderParameters> encoderParams);
		Aspose::Cells::Systems::Drawing::Imaging::PixelFormat GetPixelFormat();
		void SaveAdd(intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::EncoderParameters> encoderParams);
		void SaveAdd(intrusive_ptr<Image> image, intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::EncoderParameters> encoderParams);
		float GetHorizontalResolution();
		float GetVerticalResolution();
		int GetFlags();
		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetNativeObject();
		void SetNativeObject(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> _value);
		static intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> InitFromStream(Aspose::Cells::Systems::IO::StreamPtr stream);
		ObjectPtr Clone();
		ObjectPtr CloneFromStream();
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ColorPalette> GetPalette();
		intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ColorPalette> retrieveGDIPalette();
		intrusive_ptr<ImageFormat> GetRawFormat();
		intrusive_ptr<Size> GetSize();
		int GetHeight();
		int GetWidth();
		static intrusive_ptr<Image> FromFile(StringPtr filename);
		static intrusive_ptr<Image> FromFile(StringPtr filename, bool useEmbeddedColorManagement);
		static intrusive_ptr<Image> CreateFromHandle(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> handle);
		static intrusive_ptr<Aspose::Cells::Systems::Drawing::Bitmap> FromHbitmap(intrusive_ptr<Systems::IntegerPtr> hbitmap);
		static intrusive_ptr<Aspose::Cells::Systems::Drawing::Bitmap> FromHbitmap(intrusive_ptr<Systems::IntegerPtr> hbitmap, intrusive_ptr<Systems::IntegerPtr> hpalette);
		static intrusive_ptr<Image> LoadFromStream(intrusive_ptr<Stream> stream, bool keepAlive);
		static Int32 GetPixelFormatSize(Imaging::PixelFormat pixfmt);
		static bool IsAlphaPixelFormat(Imaging::PixelFormat pixfmt);

		static void GetIStreamFromStream(Aspose::Cells::Systems::IO::StreamPtr stream, IStream*& istream, HGLOBAL& memblock);
		static void FreeIStream(IStream* istream);


		virtual void add_ref() {
			++ref_count_;
		}

		virtual int release_ref() {
			return --ref_count_;
		}

		void Close();
		void Dispose();
		~Image();

	protected:
		virtual void Dispose(bool disposing);

	private:
		Int64 _imgSize;

	};
}

}
}
}
#endif
