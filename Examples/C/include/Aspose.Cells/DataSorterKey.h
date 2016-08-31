#pragma once
#include "SortOrder.h"
//#include "System/StringHelperPal.h"
//#include "System/Int32Helper.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
//#include "System/Boxing.h"
#include "IconSetType.h"
#include "System/Int32.h"
#include "SortOnType.h"
#include "System/Array1D.h"
#define STATIC_DATASORTERKEY() 

namespace Aspose {
namespace Cells {
class DataSorter;
class Style;
}
}

namespace Aspose {
namespace Cells {
	class DataSorterKey : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::DataSorter* _parent;
			Aspose::Cells::System::Int32 _index;
			Aspose::Cells::SortOrder _order;
			Aspose::Cells::SortOnType _type;
			intrusive_ptr<Aspose::Cells::Style> _style;
			Aspose::Cells::System::Int32 _dxfId;
			Aspose::Cells::IconSetType _iconSet;
			Aspose::Cells::System::Int32 _iconId;
			intrusive_ptr<Aspose::Cells::System::String> _value;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_CustomSortedTable;
	public:

			 DataSorterKey(intrusive_ptr<Aspose::Cells::DataSorter> parent);
			void Copy(intrusive_ptr<Aspose::Cells::DataSorterKey> source);
			bool EqualsWithoutIndex(intrusive_ptr<Aspose::Cells::DataSorterKey> another);
			intrusive_ptr<Aspose::Cells::DataSorter> GetParent();
			Aspose::Cells::SortOrder GetOrder();
			void SetOrder(Aspose::Cells::SortOrder value);
			Aspose::Cells::System::Int32 GetIndex();
			void SetIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::SortOnType GetType();
			void SetType(Aspose::Cells::SortOnType type);
			void SetColorStyle(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 GetDxfId();
			void SetDxfId(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetCustomSortedTable();
			intrusive_ptr<Aspose::Cells::System::String> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::String> value);
			void SetInnerIcon(Aspose::Cells::IconSetType set , Aspose::Cells::System::Int32 iconId);
			void SortOnIcon(Aspose::Cells::IconSetType set , Aspose::Cells::System::Int32 iconId);
			Aspose::Cells::IconSetType GetIconSetType();
			Aspose::Cells::System::Int32 GetIconId();
			intrusive_ptr<Aspose::Cells::Style> GetCellColorStyle();
			void SetCellColorStyle(intrusive_ptr<Aspose::Cells::Style> value);
			intrusive_ptr<Aspose::Cells::Style> GetFontColorStyle();
			void SetFontColorStyle(intrusive_ptr<Aspose::Cells::Style> value);
			 DataSorterKey();
		public:
			virtual ~DataSorterKey();
	};

}

}
