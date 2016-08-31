#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_SCENARIOINPUTCELL() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ScenarioInputCell : public Aspose::Cells::System::Object
#else	class ScenarioInputCell : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			 ScenarioInputCell();
			Aspose::Cells::System::Int32 m_Row;
			Aspose::Cells::System::Int32 GetRow();
			Aspose::Cells::System::Int32 m_Column;
			Aspose::Cells::System::Int32 GetColumn();
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			intrusive_ptr<Aspose::Cells::System::String> GetInternalName();
			void SetInternalName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> m_Value;
			intrusive_ptr<Aspose::Cells::System::String> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 NumFmtId;
			bool m_IsDeleted;
			bool IsDeleted();
			void SetIsDeleted(bool value);
			bool Undone;
		public:
			virtual ~ScenarioInputCell();
	};

}

}
