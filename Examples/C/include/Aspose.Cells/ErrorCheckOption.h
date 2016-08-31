#pragma once
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "ErrorCheckType.h"
#define STATIC_ERRORCHECKOPTION() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ErrorCheckOption : public Aspose::Cells::System::Object
#else	class ErrorCheckOption : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			 ErrorCheckOption();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _alRange;
			Aspose::Cells::System::Int32 _bits;
			bool IsErrorCheck(Aspose::Cells::ErrorCheckType errorCheckType);
			void SetErrorCheck(Aspose::Cells::ErrorCheckType errorCheckType , bool isCheck);
			Aspose::Cells::System::Int32 GetCountOfRange();
			Aspose::Cells::System::Int32 AddRange(intrusive_ptr<Aspose::Cells::CellArea> ca);
			intrusive_ptr<Aspose::Cells::CellArea> GetRange(Aspose::Cells::System::Int32 index);
			void RemoveRange(Aspose::Cells::System::Int32 index);
		public:
			virtual ~ErrorCheckOption();
	};

}

}
