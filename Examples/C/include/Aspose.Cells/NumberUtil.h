#pragma once
//#include "System/String.h"
#include "System/Int32.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Single.h"
#include "System/UInt64.h"
#include "System/Double.h"
//#include "System/ArgumentException.h"
#include "System/Int64.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_NUMBERUTIL() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class NumberUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const Aspose::Cells::System::Double SmallestNumberGreaterThanZero;
			static Aspose::Cells::System::Double RelativeAccuracy;
			static Aspose::Cells::System::Double PositiveRelativeAccuracy;
			static Aspose::Cells::System::Double DefaultRelativeAccuracy;
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> EpsilonOf(Aspose::Cells::System::Double value);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> PositiveEpsilonOf(Aspose::Cells::System::Double value);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Increment(Aspose::Cells::System::Double value);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Decrement(Aspose::Cells::System::Double value);
			static Aspose::Cells::System::UInt64 NumbersBetween(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static Aspose::Cells::System::UInt64 ToLexicographicalOrderedUInt64(Aspose::Cells::System::Double value);
			static Aspose::Cells::System::Int64 ToLexicographicalOrderedInt64(Aspose::Cells::System::Double value);
			static Aspose::Cells::System::UInt64 SignedMagnitudeToTwosComplementUInt64(Aspose::Cells::System::Int64 value);
			static Aspose::Cells::System::Int64 SignedMagnitudeToTwosComplementInt64(Aspose::Cells::System::Int64 value);
			static bool AlmostEqual(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Int32 maxNumbersBetween);
			static bool AlmostEqual(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::UInt64 maxNumbersBetween);
			static bool AlmostEqualNorm(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double diff , Aspose::Cells::System::Double relativeAccuracy);
			static bool AlmostEqualNorm(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double diff);
			static bool AlmostEqual(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b , Aspose::Cells::System::Double relativeAccuracy);
			static bool AlmostEqual(Aspose::Cells::System::Double a , Aspose::Cells::System::Double b);
			static bool AlmostEqual(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> x , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> y);
			 NumberUtil();
		public:
			virtual ~NumberUtil();
	};

}

}

}
