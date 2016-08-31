#pragma once
#include "System/Object.h"
//#include "System/Math.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#define STATIC_CALCMATRIX() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class IParallel1DNumberAlgorithm;
class FormulaNodeError;
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcMatrix : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static bool IsErrValueForEmptyData(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CheckEmptyErrValue(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> BuildValOrDivError(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData1 , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData2 , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> noValue);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> LinestTrue(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> x , bool stats);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> LinestFalse(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> x , bool stats);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> RegressionX(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> vx);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> RegressionY(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> vx , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , Aspose::Cells::System::Double vy);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Coefficient(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> x);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Gauss(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> a);
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> MatchNumericD1(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData1 , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData2 , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> val12 , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> noValue);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process1DNumber(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper1 , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper2 , intrusive_ptr<Aspose::Cells::FormulaModel::IParallel1DNumberAlgorithm> algorithm);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Chitest(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData1 , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeData2 , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Trend(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeDataY , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeDataX , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeDataNewX , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool consts , bool isLog , bool useRange);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Linest(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeDataY , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> rangeDataX , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool consts , bool stats , bool isLog);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> Transpose(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> a);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> MMult(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> a , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> b);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> MInverse(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> data);
			static Aspose::Cells::System::Double MDETERM(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> a);
			 CalcMatrix();
		public:
			virtual ~CalcMatrix();
	};

}

}

}
