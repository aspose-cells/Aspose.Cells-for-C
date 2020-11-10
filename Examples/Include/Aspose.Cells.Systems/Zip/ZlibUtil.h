#pragma once
#include "Aspose.Cells.Systems/Byte.h"
//#include "Aspose.Cells.Systems/Array.h"
//#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Object.h"
//#include "Aspose.Cells.Systems/IO/Stream.h"
//#include "Aspose.Cells.Systems/BitConverter.h"
//#include "Aspose.Cells.Systems/Double.h"
//#include "Aspose.Cells.Systems/UInt32.h"
//#include "Aspose.Cells.Systems/UInt16.h"
//#include "Aspose.Cells.Systems/IO/MemoryStream.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#define STATIC_ZLIBUTIL() 


namespace Aspose {
namespace Cells {
	class ZlibUtil : public Aspose::Cells::Systems::Object
	{
	public:

			static intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> ZipData(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> data);
			static intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> UnzipData(bool isWMF , bool isPict , Aspose::Cells::Systems::Int32 width , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 dpi , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> imageData , Aspose::Cells::Systems::Int32 rawSize);
	private:

			void Init_Vars();
	public:

			 ZlibUtil();
		public:
			virtual ~ZlibUtil();
	};

}

}
