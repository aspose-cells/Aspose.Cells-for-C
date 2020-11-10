#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Describe the AboveAverage conditional formatting rule. 
			/// This conditional formatting rule highlights cells that
			/// are above or below the average for all values in the range. 
			/// </summary>
	class ASPOSE_CELLS_API IAboveAverage : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the flag indicating whether the rule is an "above average" rule. 
			/// 'true' indicates 'above average'.
			/// Default value is true.
			/// </summary>
			 virtual bool IsAboveAverage()=0;
			/// <summary>
			/// Sets the flag indicating whether the rule is an "above average" rule. 
			/// 'true' indicates 'above average'.
			/// Default value is true.
			/// </summary>
			 virtual void SetAboveAverage(bool value)=0;
			/// <summary>
			/// Gets the flag indicating whether the 'aboveAverage' and 'belowAverage' criteria 
			/// is inclusive of the average itself, or exclusive of that value. 
			/// 'true' indicates to include the average value in the criteria.
			/// Default value is false.
			/// </summary>
			 virtual bool IsEqualAverage()=0;
			/// <summary>
			/// Sets the flag indicating whether the 'aboveAverage' and 'belowAverage' criteria 
			/// is inclusive of the average itself, or exclusive of that value. 
			/// 'true' indicates to include the average value in the criteria.
			/// Default value is false.
			/// </summary>
			 virtual void SetEqualAverage(bool value)=0;
			/// <summary>
			/// Gets the number of standard deviations to include above or below the average in the
			/// conditional formatting rule. 
			/// The input value must between 0 and 3 (include 0 and 3). 
			/// Setting this value to 0 means stdDev is not set.
			/// The default value is 0.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetStdDev()=0;
			/// <summary>
			/// Sets the number of standard deviations to include above or below the average in the
			/// conditional formatting rule. 
			/// The input value must between 0 and 3 (include 0 and 3). 
			/// Setting this value to 0 means stdDev is not set.
			/// The default value is 0.
			/// </summary>
			 virtual void SetStdDev(Aspose::Cells::Systems::Int32 value)=0;

	};
}
}
