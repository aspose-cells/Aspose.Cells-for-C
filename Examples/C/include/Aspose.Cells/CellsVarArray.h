#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "ICellsDataTable.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_CELLSVARARRAY() 


namespace Aspose {
namespace Cells {
	class CellsVarArray : public Aspose::Cells::ICellsDataTable
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_Y;
	public:

			 CellsVarArray(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> dt);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> m_Columns;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> m_DataSource;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetColumns();
			Aspose::Cells::System::Int32 GetCount();
			void BeforeFirst();
			intrusive_ptr<Aspose::Cells::System::Object> Get(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::System::Object> Get(intrusive_ptr<Aspose::Cells::System::String> columnName);
			bool Next();
			 CellsVarArray();
		public:
			virtual ~CellsVarArray();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
