#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "ScenarioInputCellCollection.h"
#define STATIC_SCENARIO() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Scenario : public Aspose::Cells::System::Object
#else	class Scenario : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			 Scenario();
			intrusive_ptr<Aspose::Cells::System::String> m_Comment;
			intrusive_ptr<Aspose::Cells::System::String> GetComment();
			void SetComment(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> m_Name;
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> m_User;
			intrusive_ptr<Aspose::Cells::System::String> GetUser();
			bool m_IsHidden;
			bool IsHidden();
			void SetIsHidden(bool value);
			bool m_IsLocked;
			bool IsLocked();
			void SetIsLocked(bool value);
			intrusive_ptr<Aspose::Cells::ScenarioInputCellCollection> m_InputCells;
			intrusive_ptr<Aspose::Cells::ScenarioInputCellCollection> GetInputCells();
		public:
			virtual ~Scenario();
	};

}

}
