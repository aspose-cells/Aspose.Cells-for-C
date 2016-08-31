#pragma once
#include "System/Object.h"
//#include "System/Char.h"
#include "System/IComparable.h"
//#include "System/Text/StringBuilder.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_CELLAREAS() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
#ifdef WIN32

	class ASPOSE_CELLS_API CellAreas : public Aspose::Cells::System::IComparable , public Aspose::Cells::System::Object
#else	class CellAreas : public Aspose::Cells::System::IComparable , public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 CompareTo(intrusive_ptr<Aspose::Cells::System::Object> obj);
			 CellAreas(intrusive_ptr<Aspose::Cells::CellArea> obj);
			 CellAreas(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn);
			 CellAreas(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			Aspose::Cells::System::Int32 StartRow;
			Aspose::Cells::System::Int32 StartColumn;
			Aspose::Cells::System::Int32 EndRow;
			Aspose::Cells::System::Int32 EndColumn;
			 CellAreas();
		public:
			virtual ~CellAreas();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
