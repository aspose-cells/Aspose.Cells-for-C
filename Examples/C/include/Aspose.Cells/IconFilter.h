#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#include "IconSetType.h"
#define STATIC_ICONFILTER() 

namespace Aspose {
namespace Cells {
class FilterColumn;
class Cell;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API IconFilter : public Aspose::Cells::System::Object
#else	class IconFilter : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FilterColumn> m_filterColumn;
			Aspose::Cells::IconSetType m_IconSetType;
			Aspose::Cells::System::Int32 m_iconId;
	public:

			 IconFilter(intrusive_ptr<Aspose::Cells::FilterColumn> filterColumn);
			void Copy(intrusive_ptr<Aspose::Cells::IconFilter> source);
			Aspose::Cells::IconSetType GetIconSetType();
			void SetIconSetType(Aspose::Cells::IconSetType value);
			Aspose::Cells::System::Int32 GetIconId();
			void SetIconId(Aspose::Cells::System::Int32 value);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::Cell> cell);
			 IconFilter();
		public:
			virtual ~IconFilter();
	};

}

}
