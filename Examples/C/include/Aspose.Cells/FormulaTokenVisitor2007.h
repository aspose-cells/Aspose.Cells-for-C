#pragma once
//#include "System/Exception.h"
//#include "System/UInt16.h"
//#include "System/ByteHelper.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
#include "FormulaTokenVisitor.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Text/Encoding.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_FORMULATOKENVISITOR2007() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
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
	class FormulaTokenVisitor2007 : public Aspose::Cells::FormulaModel::FormulaTokenVisitor
	{
	private:

			void Init_Vars();
			void SkipArrayData();
	protected:

			 virtual Aspose::Cells::System::Int32 GetNameIndex(Aspose::Cells::System::Int32 pos);
	public:

			 virtual void ResetFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 endPos);
			 virtual bool ToNextToken();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> ReadReference(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ReadString();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> ReadErrorRef(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetArgsCountOfFuncVar();
			 virtual intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> ReadArray();
			 FormulaTokenVisitor2007();
		public:
			virtual ~FormulaTokenVisitor2007();
	};

}

}

}
