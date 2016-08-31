#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_QUERYTABLEFIELD() 


namespace Aspose {
namespace Cells {
	class QueryTableField : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 _Id;
			intrusive_ptr<Aspose::Cells::System::String> _Name;
			Aspose::Cells::System::Int32 _TableColumnId;
			Aspose::Cells::System::Int32 Options;
			 QueryTableField();
			bool IsUserdefined();
			void SetIsUserdefined(bool value);
			bool GetFillFormulas();
			void SetFillFormulas(bool value);
			bool GetRowNumbers();
			void SetRowNumbers(bool value);
			bool IsClipped();
			void SetIsClipped(bool value);
		public:
			virtual ~QueryTableField();
	};

}

}
