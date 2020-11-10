#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IConditionalFormattingValue;
		enum FormatConditionValueType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Describes a collection of CFValueObject.
			/// Use only for icon sets.
			/// </summary>
	class ASPOSE_CELLS_API IConditionalFormattingValueCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Get the CFValueObject element at the specified index.
			/// </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValue> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Adds <see cref="IConditionalFormattingValue" />
			///  object.
			/// </summary>
			/// <param name="type" >The value type.</param>
			/// <param name="value" >The value.</param>
			/// <returns>Returns the index of new object in the list.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::FormatConditionValueType type , intrusive_ptr<Aspose::Cells::Systems::String> value)=0;

	};
}
}
