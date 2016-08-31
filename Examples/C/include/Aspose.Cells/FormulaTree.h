#pragma once
#include "System/Byte.h"
#include "System/Array2D.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
//#include "System/Char.h"
#include "NodeType.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_FORMULATREE() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class FormulaTree : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* sheets;
			bool CheckCell(intrusive_ptr<Aspose::Cells::System::String> formula);
			intrusive_ptr<Aspose::Cells::System::String> node;
			Aspose::Cells::FormulaTree* parent;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_Children;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> token;
			Aspose::Cells::NodeType type;
	public:

			 FormulaTree();
			 FormulaTree(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			bool IsMiss();
			void AddChild(intrusive_ptr<Aspose::Cells::FormulaTree> childTree);
			void AddChild(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaTree*>> childTree);
			intrusive_ptr<Aspose::Cells::System::String> oNode;
			intrusive_ptr<Aspose::Cells::System::String> GetNode();
			void SetNode(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::FormulaTree> GetParent();
			void SetParent(intrusive_ptr<Aspose::Cells::FormulaTree> value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetChildren();
			void SetChildren(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			Aspose::Cells::System::Int32 GetIndex();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetToken();
			void SetToken(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			bool IsRangeOperator();
			Aspose::Cells::System::Int32 GetTMemToken();
			Aspose::Cells::NodeType GetType();
			void SetType(Aspose::Cells::NodeType value);
			Aspose::Cells::System::Int32 OperatorLevel;
			Aspose::Cells::System::Int32 GetRC();
			void SetRC(Aspose::Cells::System::Int32 value);
		public:
			virtual ~FormulaTree();
	};

}

}
