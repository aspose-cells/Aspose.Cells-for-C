#pragma once
#include "InternalColor.h"
#include "System/Object.h"
#include "System/Drawing/Color.h"
#include "System/Int32.h"
#define STATIC_COLORFILTER() 

namespace Aspose {
namespace Cells {
class Cell;
class FilterColumn;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ColorFilter : public Aspose::Cells::System::Object
#else	class ColorFilter : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FilterColumn> m_Filter;
			bool m_FillColor;
			Aspose::Cells::System::Int32 m_DxfId;
			intrusive_ptr<Aspose::Cells::InternalColor> m_Value;
	public:

			 ColorFilter(intrusive_ptr<Aspose::Cells::FilterColumn> filter);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::Cell> cell , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void Copy(intrusive_ptr<Aspose::Cells::ColorFilter> source , bool isInSameWorkbook);
			bool GetFilterByFillColor();
			void SetFilterByFillColor(bool value);
			Aspose::Cells::System::Int32 GetDxfId();
			void SetDxfId(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::InternalColor> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::InternalColor> value);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			bool GetNoFill();
			void InitInternalColor(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 ColorFilter();
		public:
			virtual ~ColorFilter();
	};

}

}
