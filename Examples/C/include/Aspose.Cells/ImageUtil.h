#pragma once
#include "System/IO/Stream.h"
#include "System/Drawing/Imaging/ImageFormat.h"
#include "System/Int64.h"
//#include "System/Exception.h"
//#include "System/IO/SeekOrigin.h"
#include "System/UInt16.h"
//#include "System/IO/File.h"
//#include "System/Int16.h"
//#include "System/InvalidOperationException.h"
#include "System/UInt32.h"
//#include "System/Math.h"
//#include "System/Char.h"
//#include "System/IO/MemoryStream.h"
#include "ImageTypeCore.h"
#include "System/Double.h"
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/Diagnostics/Debug.h"
//#include "System/Drawing/RectangleF.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
//#include "System/IO/BinaryWriter.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/IO/BinaryReader.h"
#include "System/Int32.h"
//#include "System/IO/FileStream.h"
#include "System/Single.h"
#define STATIC_IMAGEUTIL() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class ImageSizeCore;
class BigEndianBinaryReader;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class ImageUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 ImageUtil();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> PrependBmpHeader(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader , Aspose::Cells::System::Int32 dibLength);
			static bool ReadJpegResolution(Aspose::Cells::System::UInt16 marker , intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> size);
			static void ReadResolutionJfif(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> size);
			static void ReadResolutionExif(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> size);
			static Aspose::Cells::System::Double ReadExifValueRational(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , Aspose::Cells::System::Int64 offset , bool isBigEndian);
			static Aspose::Cells::System::UInt16 ReadTiffInt16(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , bool isBigEndian);
			static Aspose::Cells::System::UInt32 ReadTiffInt32(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader , bool isBigEndian);
			 static const Aspose::Cells::System::Double InchesPerMeter;
	public:

			static Aspose::Cells::Internal::Rendering::ImageTypeCore GetImageType(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static Aspose::Cells::Internal::Rendering::ImageTypeCore GetImageType(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static intrusive_ptr<Aspose::Cells::System::String> ImageFormatToString(intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageFormat> imageFormat);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageFormat> StringToImageFormat(intrusive_ptr<Aspose::Cells::System::String> value);
			static intrusive_ptr<Aspose::Cells::System::String> ImageTypeToString(Aspose::Cells::Internal::Rendering::ImageTypeCore imageType);
			static Aspose::Cells::Internal::Rendering::ImageTypeCore StringToImageType(intrusive_ptr<Aspose::Cells::System::String> value);
			static Aspose::Cells::Internal::Rendering::ImageTypeCore ImageFormatToImageType(intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageFormat> imageFormat);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Imaging::ImageFormat> ImageTypeToImageFormat(Aspose::Cells::Internal::Rendering::ImageTypeCore imageType);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> GetImageSize(intrusive_ptr<Aspose::Cells::System::String> fileName);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> GetImageSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> GetImageSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes , Aspose::Cells::Internal::Rendering::ImageTypeCore imageType);
			static bool IsTiff(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool IsJpeg(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool IsPng(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool IsBmp(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool IsGif(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool IsPict(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool IsDib(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static bool IsStandardMetafile(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static bool IsPlaceableMetafile(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static bool IsWmf(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static bool IsEmf(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> PrependBmpHeader(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> dibBytes);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> PrependBmpHeader(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader , Aspose::Cells::System::Int32 headerLength , Aspose::Cells::System::Int32 bmpLength);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> PrependBmpHeader(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader , Aspose::Cells::System::Int64 headerPostion , Aspose::Cells::System::Int64 headerLength , Aspose::Cells::System::Int64 bmpPostion , Aspose::Cells::System::Int64 bmpLength);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> RemoveBmpHeader(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> bmpBytes);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> DdbToBmp(Aspose::Cells::System::Int32 width , Aspose::Cells::System::Int32 height , Aspose::Cells::System::Int32 pixelsPerMeterX , Aspose::Cells::System::Int32 pixelsPerMeterY , Aspose::Cells::System::Int32 planes , Aspose::Cells::System::Int32 bitsPerPixel , Aspose::Cells::System::Int32 ddbWidthData , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ddbData);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> GetBmpSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> GetGifSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> GetPngSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> GetJpegSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> GetEmfSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> GetPictSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> PrependWmfPlaceableHeader(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes , intrusive_ptr<Aspose::Cells::Internal::Rendering::ImageSizeCore> imageSize);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> RemoveWmfPlaceableHeader(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageBytes);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BmpToWmf(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> bmpBytes);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetEmptyWmf(Aspose::Cells::System::Int32 width , Aspose::Cells::System::Int32 height);
			static Aspose::Cells::System::Single StandardResolution;
		public:
			virtual ~ImageUtil();
	};

}

}

}

}
