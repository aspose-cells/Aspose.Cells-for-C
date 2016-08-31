#pragma once
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
#include "System/Byte.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/BitConverter.h"
#include "Constants.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
//#include "System/Array.h"
#include "System/String.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#define STATIC_DVRECORD() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Validation;
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class DVRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_StartRow;
			Aspose::Cells::System::Int32 m_StartColumn;
			Aspose::Cells::Worksheet* m_Sheet;
			Aspose::Cells::System::Int32 StartAreaDataPos;
			intrusive_ptr<Aspose::Cells::Validation> Dv;
			Aspose::Cells::System::Int32 areaIndex;
			Aspose::Cells::System::Int32 GetCount(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			intrusive_ptr<Aspose::Cells::CellArea> GetRange(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			intrusive_ptr<Aspose::Cells::System::String> GetText(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& pos);
	public:

			 DVRecord(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			Aspose::Cells::System::Int32 GetStartRow();
			Aspose::Cells::System::Int32 GetStartColumn();
			Aspose::Cells::System::Int32 MaxAreaCount;
			Aspose::Cells::System::Int32 AreaCount;
			bool CreateData(intrusive_ptr<Aspose::Cells::Validation> dv);
			bool SetAreas();
			intrusive_ptr<Aspose::Cells::Validation> CreateValidation(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			 DVRecord();
		public:
			virtual ~DVRecord();
	};

}

}

}
