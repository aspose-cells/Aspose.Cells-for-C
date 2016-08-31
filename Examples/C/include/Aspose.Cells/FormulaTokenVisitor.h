#pragma once
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/ByteHelper.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
#include "System/Byte.h"
#include "System/Int32.h"
#define STATIC_FORMULATOKENVISITOR() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeName;
class RangeReference;
class FormulaNodeError;
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaTokenVisitor : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::System::Int32 _startPos;
			Aspose::Cells::System::Int32 _endPos;
			Aspose::Cells::System::Int32 _additionalDataPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _formula;
			 virtual Aspose::Cells::System::Int32 GetNameIndex(Aspose::Cells::System::Int32 pos);
	public:

			 virtual void ResetFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ReadReference(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> ReadArray();
			 virtual intrusive_ptr<Aspose::Cells::System::String> ReadString();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> ReadErrorRef(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetArgsCountOfFuncVar();
			Aspose::Cells::System::Int32 GetTokenPosition();
			void SetTokenPosition(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetAdditionalDataPosition();
			void SetAdditionalDataPosition(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetEndPosition();
			void SetEndPosition(Aspose::Cells::System::Int32 value);
			bool HasToken();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetFormulaData();
			Aspose::Cells::System::Byte GetCurrent();
			 virtual bool ToNextToken();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeName> ReadName(intrusive_ptr<Aspose::Cells::Workbook> wb);
			bool IsCellAddress();
			bool IsCellRange();
			bool IsName();
			 FormulaTokenVisitor();
		public:
			virtual ~FormulaTokenVisitor();
	};

}

}

}
