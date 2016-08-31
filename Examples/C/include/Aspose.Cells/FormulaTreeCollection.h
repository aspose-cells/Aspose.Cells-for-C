#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
#include "FormulaTree.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_FORMULATREECOLLECTION() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class FormulaTreeCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::FormulaTree> GetIndexObject(Aspose::Cells::System::Int32 index);
			bool AddPercent(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			void AddTAdd(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::String> op , bool add);
			bool AddOperator(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::String> op , Aspose::Cells::System::Int32 level , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> token);
			bool AddOperator(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::String> op , Aspose::Cells::System::Int32 level , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> token);
			void AddFunc(intrusive_ptr<Aspose::Cells::FormulaTree> node);
			void AddMiss();
			void AddOperand(intrusive_ptr<Aspose::Cells::System::String> text);
			void AddOperand(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			 FormulaTreeCollection();
		public:
			virtual ~FormulaTreeCollection();
	};

}

}

}
