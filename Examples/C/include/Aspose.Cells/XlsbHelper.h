#pragma once
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Byte.h"
//#include "System/Int16.h"
#include "System/DateTime.h"
#include "System/IO/BinaryReader.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_XLSBHELPER() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::CellArea> ReadRef(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadSQREFs(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			static void WriteSQREFS(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0);
			static void WriteRef(intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static intrusive_ptr<Aspose::Cells::System::String> GetString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32& offset);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetDateTime(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 WriteString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset0 , intrusive_ptr<Aspose::Cells::System::String> stringValue);
			static intrusive_ptr<Aspose::Cells::System::String> ReadString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static intrusive_ptr<Aspose::Cells::System::String> ReadString16(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 GetRecordId(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32& offset);
			static Aspose::Cells::System::Int32 GetRecordId(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			static void WriteRecordId(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32& offset , Aspose::Cells::System::Int32 recordId);
			static Aspose::Cells::System::Int32 GetRecordSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32& offset);
			static Aspose::Cells::System::Int32 GetRecordSize(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			 XlsbHelper();
		public:
			virtual ~XlsbHelper();
	};

}

}

}
