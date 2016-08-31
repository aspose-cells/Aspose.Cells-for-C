#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_HORIZONTALPAGEBREAK() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API HorizontalPageBreak : public Aspose::Cells::System::Object
#else	class HorizontalPageBreak : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 row;
			Aspose::Cells::System::Int32 m_StartColumn;
			Aspose::Cells::System::Int32 m_EndColumn;
	public:

			 HorizontalPageBreak(Aspose::Cells::System::Int32 row);
			Aspose::Cells::System::Int32 GetStartColumn();
			Aspose::Cells::System::Int32 GetEndColumn();
			void SetStartColumn(Aspose::Cells::System::Int32 startColumn);
			void SetEndColumn(Aspose::Cells::System::Int32 endColumn);
			Aspose::Cells::System::Int32 GetRow();
			void SetRow(Aspose::Cells::System::Int32 row);
			 HorizontalPageBreak();
		public:
			virtual ~HorizontalPageBreak();
	};

}

}
