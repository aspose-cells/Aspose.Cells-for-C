#pragma once
#include "System/Array2D.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/String.h"
//#include "System/Boxing.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "System/Collections/ArrayList.h"
#define STATIC_COMBINEDPARTBUILDER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class CellsTextFormatter;
class CellsFormatterParams;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CombinedPartBuilder : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> m_Params;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_AppendContentAll;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_AppendPosAll;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_AppendSize;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_AppendReversed;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_AppendContentPart;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_AppendPosPart;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_PlaceHolderIndex;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_PlaceHolderVal;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_OptionalHolderAll;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_OptionalHolderPart;
			Aspose::Cells::System::Int32 m_AppendSizeTotal;
			Aspose::Cells::System::Int32 m_AppendSizePartTemp;
			Aspose::Cells::System::Int32 m_PartStartPos;
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> m_ContentBuffer;
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> m_PatternBuffer;
	public:

			 CombinedPartBuilder(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> p , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sbContent , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sbPattern);
			void FinishOneAppendContent();
			void FinishOneAppendPart(bool reversed , Aspose::Cells::System::Int32 baseLength);
			void AddOptionalHolder(bool zero);
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> GetContentBuffer();
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> GetPatternBuffer();
			Aspose::Cells::System::Int32 GetAppendSizeTotal();
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::Internal::Format::CellsTextFormatter*>> GetAppendContent();
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> GetAppendPos();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetAppendSize();
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> GetAppendReversed();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetPlaceHolders();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetPlaceHolderIndices();
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> GetOptionalHolderPos();
			 CombinedPartBuilder();
		public:
			virtual ~CombinedPartBuilder();
	};

}

}

}

}
