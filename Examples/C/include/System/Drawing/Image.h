#ifndef _SYSTEM_DRAWING_IMAGE_H_
#define _SYSTEM_DRAWING_IMAGE_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Single.h"
#include "System/Exception.h"
//#include "System/Drawing/Imaging/EncoderParameters.h"
//#include "System/Drawing/Imaging/ImageCodecInfo.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/IO/Stream.h"
#include "System/Drawing/Imaging/ImageFormat.h"
//#include "System/Runtime/Serialization/ISerializable.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::IO;
//using namespace Aspose::Cells::System::Drawing::Imaging ;
//using namespace Aspose::Cells::System::Runtime::Serialization ;
namespace Aspose { 
namespace Cells { 
namespace System {
namespace Drawing { 
	class ASPOSE_CELLS_API Image : public Object, public ICloneable, public IDisposable //ISerializable
	{
	private:

	public:
		ObjectPtr Clone()
		{
			throw Exception("Image.Clone NotSupport");
		}
		void Dispose()
		{
			throw Exception("Image.Dispose NotSupport");
		}
		virtual void add_ref() {
			++ref_count_;
		}

		virtual int release_ref() {
			return --ref_count_;
		}

		/*
		static Image* FromFile(String  filename);
		static Image* FromFile(String  filename, bool useEmbeddedColorManagement);
		static Image* FromStream(Stream* stream);
		static Image* FromStream(Stream* stream, bool useEmbeddedColorManagement);
		static Image* FromStream(Stream* stream, bool useEmbeddedColorManagement,
				bool validateImageData);

		Int32 GetHeight();
		Int32 GetWidth();
		Int32 GetFlags();
		Single GetHorizontalResolution();
		Single GetVerticalResolution();

		ImageFormat* GetRawFormat();
		void Save(String filename);
		void Save(Stream* stream, ImageFormat* format);
		void Save(String  filename, ImageFormat* format);
		void Save(String  filename, ImageCodecInfo* encoder,
				EncoderParameters* encoderParams);
		void Save(Stream* stream, ImageCodecInfo* encoder,
				EncoderParameters* encoderParams);
		*/
		
	};
}

}
}
}
#endif
