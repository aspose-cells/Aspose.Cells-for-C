#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_ICELLSDATATABLE() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ICellsDataTable : public Aspose::Cells::System::Object
#else	class ICellsDataTable : public Aspose::Cells::System::Object
#endif


	{
	public:

			virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetColumns() = 0;
			virtual Aspose::Cells::System::Int32 GetCount() = 0;
			virtual void BeforeFirst() = 0;
			virtual intrusive_ptr<Aspose::Cells::System::Object> Get(Aspose::Cells::System::Int32 columnIndex) = 0;
			virtual intrusive_ptr<Aspose::Cells::System::Object> Get(intrusive_ptr<Aspose::Cells::System::String> columnName) = 0;
			virtual bool Next() = 0;
		public:
	};

}

}
