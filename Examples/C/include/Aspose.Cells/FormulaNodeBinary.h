#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
#include "FormulaNodeType.h"
//#include "System/BitConverter.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#include "FormulaNodeAbstract.h"
#define STATIC_FORMULANODEBINARY() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeValuesCache;
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeBinary : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> _cachedValue;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _formula;
			Aspose::Cells::System::Int32 _tokenPos;
			Aspose::Cells::System::Int32 _length;
	public:

			 FormulaNodeBinary(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> formula , Aspose::Cells::System::Int32 tokenPos , Aspose::Cells::System::Int32 length);
			 virtual void Cache(bool recursive);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> GetValuesCache();
			 virtual void SetValuesCache(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> value);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetNodeValue();
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual bool GetSimpleValue();
			 virtual bool NeedRecursiveCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetSingleValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another);
			 FormulaNodeBinary();
		public:
			virtual ~FormulaNodeBinary();
	};

}

}

}
