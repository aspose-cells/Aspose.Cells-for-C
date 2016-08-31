#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "RawCellValueType.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
//#include "System/Double.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_FORMULARECORD() 


namespace Aspose {
namespace Cells {
namespace Record {
	class FormulaRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 FormulaRecord(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula);
			void SetInfo(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::Byte column , Aspose::Cells::System::UInt16 xfIndex , Aspose::Cells::CellsSs::RawCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> result , bool isInSharedFormula , Aspose::Cells::System::Byte option);
			 FormulaRecord();
		public:
			virtual ~FormulaRecord();
	};

}

}

}
