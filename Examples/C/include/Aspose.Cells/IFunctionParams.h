#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "IFunctionRefModes.h"
#define STATIC_IFUNCTIONPARAMS() 


namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IFunctionParams : public Aspose::Cells::FormulaModel::IFunctionRefModes
	{
	public:

			virtual Aspose::Cells::System::Int32 GetMaxParam() = 0;
			virtual Aspose::Cells::System::Int32 GetMinParam() = 0;
			virtual bool GetFixedParam() = 0;
		public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
