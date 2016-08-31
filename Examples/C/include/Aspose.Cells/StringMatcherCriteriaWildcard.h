#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Char.h"
#include "System/Int32.h"
#include "System/String.h"
#include "IStringMatcherCriteria.h"
#define STATIC_STRINGMATCHERCRITERIAWILDCARD() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class StringMatcherCriteriaWildcard : public Aspose::Cells::FormulaModel::IStringMatcherCriteria
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> _charsWithWildcard;
			Aspose::Cells::System::Int32 MatchWildcard(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> chs2 , Aspose::Cells::System::Int32 i , Aspose::Cells::System::Int32 j);
	public:

			 StringMatcherCriteriaWildcard(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> charsWithWildcard);
			bool Match(intrusive_ptr<Aspose::Cells::System::String> strValue);
			Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::System::String> strValue);
			 StringMatcherCriteriaWildcard();
		public:
			virtual ~StringMatcherCriteriaWildcard();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
