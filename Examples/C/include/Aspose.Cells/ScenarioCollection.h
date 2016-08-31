#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "Scenario.h"
#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_SCENARIOCOLLECTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ScenarioCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ScenarioCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			 ScenarioCollection();
			Aspose::Cells::System::Int32 Current;
			Aspose::Cells::System::Int32 GetActiveIndex();
			void SetActiveIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 Show;
			Aspose::Cells::System::Int32 GetLastSelected();
			void SetLastSelected(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Sqref;
			intrusive_ptr<Aspose::Cells::Scenario> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Scenario> v);
		public:
			virtual ~ScenarioCollection();
	};

}

}
