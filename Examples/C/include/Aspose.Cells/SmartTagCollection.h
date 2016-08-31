#pragma once
#include "SmartTag.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_SMARTTAGCOLLECTION() 

namespace Aspose {
namespace Cells {
namespace Markup {
class SmartTagSetting;
}
}
}

namespace Aspose {
namespace Cells {
namespace Markup {
#ifdef WIN32

	class ASPOSE_CELLS_API SmartTagCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class SmartTagCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> m_tagsCollection;
			Aspose::Cells::System::Int32 m_Row;
			Aspose::Cells::System::Int32 m_Column;
	public:

			intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> GetSmartTagsCollection();
			 SmartTagCollection(intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> tagsCollection , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetRow();
			void SetRow(Aspose::Cells::System::Int32 row);
			Aspose::Cells::System::Int32 GetColumn();
			void SetColumn(Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Markup::SmartTag> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> uri , intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Markup::SmartTag> smartTag);
			void Copy(intrusive_ptr<Aspose::Cells::Markup::SmartTagCollection> source);
			 SmartTagCollection();
		public:
			virtual ~SmartTagCollection();
	};

}

}

}
