#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_COLUMNHELPER() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
	class ColumnHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Double ToCharacters(intrusive_ptr<Aspose::Cells::Worksheet> sheet , Aspose::Cells::System::Double pixel , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static Aspose::Cells::System::Double ToCharacters(Aspose::Cells::System::Double pixel , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			static Aspose::Cells::System::Int32 ToViewPixels(Aspose::Cells::System::Double width , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			static Aspose::Cells::System::Int32 ToPixels(Aspose::Cells::System::Double width , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 ColumnHelper();
		public:
			virtual ~ColumnHelper();
	};

}

}
