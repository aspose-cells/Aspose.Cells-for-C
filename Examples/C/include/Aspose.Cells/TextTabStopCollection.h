#pragma once
#include "System/Object.h"
#include "TextTabStop.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "TextTabAlignmentType.h"
#define STATIC_TEXTTABSTOPCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
#ifdef WIN32

	class ASPOSE_CELLS_API TextTabStopCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class TextTabStopCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 InnerAdd(Aspose::Cells::Drawing::Texts::TextTabAlignmentType tabAlignment , Aspose::Cells::System::Int32 tabPosition);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::Drawing::Texts::TextTabAlignmentType tabAlignment , Aspose::Cells::System::Double tabPosition);
			intrusive_ptr<Aspose::Cells::Drawing::Texts::TextTabStop> GetIndexObject(Aspose::Cells::System::Int32 index);
			 TextTabStopCollection();
		public:
			virtual ~TextTabStopCollection();
	};

}

}

}

}
