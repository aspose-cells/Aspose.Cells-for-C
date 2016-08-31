#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "Column.h"
//#include "System/Int16.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Collections/CollectionBase.h"
#include "System/Collections/ArrayList.h"
#define STATIC_COLUMNCOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IColumnWidthModelBuilder;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ColumnCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ColumnCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			bool isStandardWidthSet;
			Aspose::Cells::System::Double width;
			Aspose::Cells::Worksheet* m_Sheet;
	public:

			 ColumnCollection(intrusive_ptr<Aspose::Cells::Worksheet> sheet , Aspose::Cells::System::Double defColWidth);
			intrusive_ptr<Aspose::Cells::Column> m_DefColInfo;
			intrusive_ptr<Aspose::Cells::Column> GetDefColInfo();
			bool IsStandardWidthSet();
			void SetIsStandardWidthSet(bool value);
			Aspose::Cells::System::Double GetWidth();
			void SetWidth(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetDefaultXF(Aspose::Cells::System::Int32 column);
			bool IsDefaultHidden(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Double GetDefaultWidth(Aspose::Cells::System::Int32 column , bool isRaw);
			Aspose::Cells::System::Int32 GetDefaultWidthPixels(Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , bool isRaw , bool isView);
			intrusive_ptr<Aspose::Cells::Column> GetByIndex(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Column> GetColumnByIndex(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Column> GetNullable(Aspose::Cells::System::Int32 columnIndex);
			bool HasStyle(Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Column> GetIndexObject(Aspose::Cells::System::Int32 columnIndex);
			intrusive_ptr<Aspose::Cells::Column> Append(Aspose::Cells::System::Int32 columnIndex);
			intrusive_ptr<Aspose::Cells::Column> Insert(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 position);
			Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			void DeleteColumnInfo(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 number);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CreateColInfoRecordList();
			void Copy(intrusive_ptr<Aspose::Cells::ColumnCollection> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			Aspose::Cells::System::Double GetColumnWidth(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetColumnWidth(Aspose::Cells::System::Int32 startColumnIndex , Aspose::Cells::System::Int32 endColumnIndex , intrusive_ptr<Aspose::Cells::CellsSs::IColumnWidthModelBuilder> builder);
			void GetColumnByWidth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrCW , intrusive_ptr<Aspose::Cells::CellsSs::IColumnWidthModelBuilder> builder);
			 ColumnCollection();
		public:
			virtual ~ColumnCollection();
	};

}

}
