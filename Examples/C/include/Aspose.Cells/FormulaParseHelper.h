#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "AddressPosType.h"
#include "System/Char.h"
#include "System/Int32.h"
#define STATIC_FORMULAPARSEHELPER() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class RangeReference;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaParseHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static void ToDefaultRowOfStartAddress(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ret);
			static void ToDefaultColumnOfStartAddress(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ret);
			static void ToDefaultRowOfEndAddress(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ret , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static void ToDefaultColumnOfEndAddress(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ret , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ParseAddress(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::FormulaModel::AddressPosType posType);
			static intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ParseA1Address(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::FormulaModel::AddressPosType posType);
			static intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ParseA1Address(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ParseRCAddress(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::FormulaModel::AddressPosType posType);
			static intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ParseRCAddress(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			 FormulaParseHelper();
		public:
			virtual ~FormulaParseHelper();
	};

}

}

}
