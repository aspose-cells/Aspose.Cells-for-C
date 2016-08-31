#pragma once
#include "System/Object.h"
#include "ICombinedAlgorithm.h"
//#include "System/Int16.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#define STATIC_COMBINEDALGORITHMOPERATOR() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CombinedAlgorithmOperator : public Aspose::Cells::FormulaModel::ICombinedAlgorithm
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			Aspose::Cells::System::Int32 _baseRow;
			Aspose::Cells::System::Int32 _baseCol;
			bool _rawMode;
	public:

			 CombinedAlgorithmOperator(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 CombinedAlgorithmOperator();
		public:
			virtual ~CombinedAlgorithmOperator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
