#pragma once
//#include "System/StringHelperPal.h"
#include "FilterOperatorType.h"
//#include "System/String.h"
#include "System/Object.h"
#define STATIC_CUSTOMFILTER() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CustomFilter : public Aspose::Cells::System::Object
#else	class CustomFilter : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::FilterOperatorType m_FilterOperatorType;
			intrusive_ptr<Aspose::Cells::System::Object> m_Criteria;
	public:

			void Copy(intrusive_ptr<Aspose::Cells::CustomFilter> source);
			Aspose::Cells::FilterOperatorType GetFilterOperatorType();
			void SetFilterOperatorType(Aspose::Cells::FilterOperatorType value);
			intrusive_ptr<Aspose::Cells::System::Object> GetCriteria();
			void SetCriteria(intrusive_ptr<Aspose::Cells::System::Object> value);
			bool IsNullCriteria();
			 CustomFilter();
		public:
			virtual ~CustomFilter();
	};

}

}
