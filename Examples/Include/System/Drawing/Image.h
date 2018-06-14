#ifndef _SYSTEM_DRAWING_IMAGE_H_
#define _SYSTEM_DRAWING_IMAGE_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Single.h"
#include "System/Exception.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/IntPtr.h"
#include "System/IO/Stream.h"
#include "System/Drawing/Size.h"
#include "System/Drawing/Imaging/ImageFormat.h"
#include "System/Drawing/Imaging/ImageCodecInfo.h"
#include "System/Drawing/Imaging/EncoderParameters.h"
#include "System/Drawing/Imaging/PixelFormat.h"
#include "System/Drawing/Imaging/ColorPalette.h"
#include "System/Drawing/ComIStreamWrapper.h"///
#include "GdipFuns.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::IO;
using namespace Aspose::Cells::System::Drawing::Imaging;

namespace Aspose { 
namespace Cells { 
namespace System {
namespace Drawing { 
	class Bitmap;
	class ASPOSE_CELLS_API Image : public Object, public ICloneable, public IDisposable 
	{
	public:
		intrusive_ptr<Stream> _stream;
		intrusive_ptr<IntPtr> nativeObject;
		ObjectPtr tag;
		ComIStreamWrapper* _istreamWrapper = NULL;///
		static ComIStreamWrapper* _sStreamWrapper;///
	public:
		Image();
		void InitVars();
		static intrusive_ptr<Image> FromStream(intrusive_ptr<Stream>);
		intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageCodecInfo> findEncoderForFormat(intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageFormat> format);
        void Save(intrusive_ptr<String> filename);
		void Save(intrusive_ptr<String> filename, intrusive_ptr<ImageFormat> format);
		void Save(intrusive_ptr<Stream> filename, intrusive_ptr<ImageFormat> format);
		void Save(StringPtr filename, intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageCodecInfo> encoder, intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::EncoderParameters> encoderParams);
		void Save(StreamPtr stream, intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageCodecInfo> encoder, intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::EncoderParameters> encoderParams);
		Aspose::Cells::System::Drawing::Imaging::PixelFormat GetPixelFormat();
		void SaveAdd(intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::EncoderParameters> encoderParams);
		void SaveAdd(intrusive_ptr<Image> image, intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::EncoderParameters> encoderParams);
		float GetHorizontalResolution();
		float GetVerticalResolution();
		int GetFlags();
		intrusive_ptr<IntPtr> GetNativeObject();
		void SetNativeObject(intrusive_ptr<IntPtr> _value);
		static intrusive_ptr<IntPtr> InitFromStream(StreamPtr stream);
		ObjectPtr Clone();
		ObjectPtr CloneFromStream();
		intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ColorPalette> GetPalette();
		intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ColorPalette> retrieveGDIPalette();
		intrusive_ptr<ImageFormat> GetRawFormat();
		intrusive_ptr<Size> GetSize();
		int GetHeight();
		int GetWidth();
		static intrusive_ptr<Image> FromFile(StringPtr filename);
		static intrusive_ptr<Image> FromFile(StringPtr filename, bool useEmbeddedColorManagement);
		static intrusive_ptr<Image> CreateFromHandle(intrusive_ptr<IntPtr> handle);
		static intrusive_ptr<Aspose::Cells::System::Drawing::Bitmap> FromHbitmap(intrusive_ptr<System::IntPtr> hbitmap);
		static intrusive_ptr<Aspose::Cells::System::Drawing::Bitmap> FromHbitmap(intrusive_ptr<System::IntPtr> hbitmap, intrusive_ptr<System::IntPtr> hpalette);
		static intrusive_ptr<Image> LoadFromStream(intrusive_ptr<Stream> stream, bool keepAlive);
		static Int32 GetPixelFormatSize(Imaging::PixelFormat pixfmt);
		static bool IsAlphaPixelFormat(Imaging::PixelFormat pixfmt);

		static void GetIStreamFromStream(StreamPtr stream, IStream*& istream, HGLOBAL& memblock);
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
