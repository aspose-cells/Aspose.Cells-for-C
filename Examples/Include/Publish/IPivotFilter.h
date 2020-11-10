#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		class IAutoFilter;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Pivot {
			enum PivotFilterType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents a PivotFilter in PivotFilter Collection.
			/// </summary>
	class ASPOSE_CELLS_API IPivotFilter : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the autofilter of the pivot filter.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IAutoFilter> 		GetIAutoFilter()=0;
			/// <summary>
			/// Gets the autofilter type of the pivot filter.
			/// </summary>
			 virtual Aspose::Cells::Pivot::PivotFilterType GetFilterType()=0;
			/// <summary>
			/// Gets the field index of the pivot filter.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetFieldIndex()=0;
			/// <summary>
			/// Gets the string value1 of the label pivot filter.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetValue1()=0;
			/// <summary>
			/// Sets the string value1 of the label pivot filter.
			/// </summary>
			 virtual void SetValue1(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the string value2 of the label pivot filter.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetValue2()=0;
			/// <summary>
			/// Sets the string value2 of the label pivot filter.
			/// </summary>
			 virtual void SetValue2(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the measure field index of the pivot filter.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetMeasureFldIndex()=0;
			/// <summary>
			/// Gets the measure field index of the pivot filter.
			/// </summary>
			 virtual void SetMeasureFldIndex(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the member property field index of the pivot filter.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetMemberPropertyFieldIndex()=0;
			/// <summary>
			/// Gets the member property field index of the pivot filter.
			/// </summary>
			 virtual void SetMemberPropertyFieldIndex(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the name of the pivot filter.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets the name of the pivot filter.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the Evaluation Order of the pivot filter.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetEvaluationOrder()=0;
			/// <summary>
			/// Gets the Evaluation Order of the pivot filter.
			/// </summary>
			 virtual void SetEvaluationOrder(Aspose::Cells::Systems::Int32 value)=0;

	};
}
}
}
