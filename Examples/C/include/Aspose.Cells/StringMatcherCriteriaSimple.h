#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#include "System/String.h"
#include "IStringMatcherCriteria.h"
#define STATIC_STRINGMATCHERCRITERIASIMPLE() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class StringMatcherCriteriaSimple : public Aspose::Cells::FormulaModel::IStringMatcherCriteria
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> _key;
	public:

			 StringMatcherCriteriaSimple(intrusive_ptr<Aspose::Cells::System::String> key);
			bool Match(intrusive_ptr<Aspose::Cells::System::String> strValue);
			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::String> strValue);
			 StringMatcherCriteriaSimple();
		public:
			virtual ~StringMatcherCriteriaSimple();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
