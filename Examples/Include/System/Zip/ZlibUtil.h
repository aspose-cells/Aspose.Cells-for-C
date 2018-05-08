#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Single.h"
#include "System/Object.h"
//#include "System/IO/Stream.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/UInt32.h"
//#include "System/UInt16.h"
//#include "System/IO/MemoryStream.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_ZLIBUTIL() 


namespace Aspose {
namespace Cells {
	class ZlibUtil : public Aspose::Cells::System::Object
	{
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ZipData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> UnzipData(bool isWMF , bool isPict , Aspose::Cells::System::Int32 width , Aspose::Cells::System::Int32 height , Aspose::Cells::System::Int32 dpi , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageData , Aspose::Cells::System::Int32 rawSize);
	private:

			void Init_Vars();
	public:

			 ZlibUtil();
		public:
			virtual ~ZlibUtil();
	};

}

}
