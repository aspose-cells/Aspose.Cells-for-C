#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "IStringMatcher.h"
#include "System/Int32.h"
#define STATIC_ISTRINGMATCHERCRITERIA() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IStringMatcherCriteria : public Aspose::Cells::CellsSs::IStringMatcher
	{
	public:

			virtual Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::String> strValue) = 0;
		public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
