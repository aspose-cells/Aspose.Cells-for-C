#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "RawCellValueType.h"
#include "System/Byte.h"
#define STATIC_FORMULACELLBACKUPDATA() 

namespace Aspose {
namespace Cells {
class FormulaCell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaCellBackupData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte CalculationFlag;
			Aspose::Cells::CellsSs::RawCellValueType RawType;
			intrusive_ptr<Aspose::Cells::System::Object> Value;
	public:

			Aspose::Cells::System::Int16 SN;
			 FormulaCellBackupData(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 FormulaCellBackupData(intrusive_ptr<Aspose::Cells::FormulaCell> fc , Aspose::Cells::System::Int16 sn);
			void InitData(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			void Recover(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 FormulaCellBackupData();
		public:
			virtual ~FormulaCellBackupData();
	};

}

}

}
