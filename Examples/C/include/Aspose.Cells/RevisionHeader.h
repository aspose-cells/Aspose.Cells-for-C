#pragma once
#include "System/DateTime.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_REVISIONHEADER() 


namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionHeader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::DateTime> m_DateTime;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> m_Guid;
			Aspose::Cells::System::Int32 m_MaxRevisionId;
			Aspose::Cells::System::Int32 m_MinRevisionId;
			Aspose::Cells::System::Int32 m_MaxTabId;
			intrusive_ptr<Aspose::Cells::System::String> m_UserName;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_TabIdMap;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_ReviewedList;
			intrusive_ptr<Aspose::Cells::System::String> m_ExtLst;
			intrusive_ptr<Aspose::Cells::System::String> RId;
			 RevisionHeader();
		public:
			virtual ~RevisionHeader();
	};

}

}

}
