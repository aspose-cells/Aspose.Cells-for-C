#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_VERTICALPAGEBREAK() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API VerticalPageBreak : public Aspose::Cells::System::Object
#else	class VerticalPageBreak : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 column;
			Aspose::Cells::System::Int32 m_StartRow;
			Aspose::Cells::System::Int32 m_EndRow;
	public:

			 VerticalPageBreak(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetStartRow();
			Aspose::Cells::System::Int32 GetEndRow();
			void SetStartRow(Aspose::Cells::System::Int32 startRow);
			void SetEndRow(Aspose::Cells::System::Int32 endRow);
			Aspose::Cells::System::Int32 GetColumn();
			void SetColumn(Aspose::Cells::System::Int32 column);
			 VerticalPageBreak();
		public:
			virtual ~VerticalPageBreak();
	};

}

}
