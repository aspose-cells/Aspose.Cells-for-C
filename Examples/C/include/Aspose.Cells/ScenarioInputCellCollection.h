#pragma once
#include "ScenarioInputCell.h"
//#include "System/StringHelperPal.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_SCENARIOINPUTCELLCOLLECTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ScenarioInputCellCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ScenarioInputCellCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			 ScenarioInputCellCollection();
			void Add(intrusive_ptr<Aspose::Cells::ScenarioInputCell> inputCell);
			intrusive_ptr<Aspose::Cells::ScenarioInputCell> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> value);
		public:
			virtual ~ScenarioInputCellCollection();
	};

}

}
