#pragma once
//#include "System/StringHelperPal.h"
#include "System/String.h"
#include "TextTypefaceType.h"
#include "System/Object.h"
#include "TextTypeface.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_TEXTTYPEFACECOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
	class TextTypefaceCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Drawing::Texts::TextTypeface> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Drawing::Texts::TextTypeface> GetByType(Aspose::Cells::Drawing::Texts::TextTypefaceType type);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Drawing::Texts::TextTypeface> typeFace);
			intrusive_ptr<Aspose::Cells::Drawing::Texts::TextTypeface> Add(intrusive_ptr<Aspose::Cells::System::String> type);
			intrusive_ptr<Aspose::Cells::Drawing::Texts::TextTypeface> Add(Aspose::Cells::Drawing::Texts::TextTypefaceType type , intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::Drawing::Texts::TextTypeface> Add(Aspose::Cells::Drawing::Texts::TextTypefaceType type);
			void SetName(intrusive_ptr<Aspose::Cells::System::String> name);
			void SetName(Aspose::Cells::Drawing::Texts::TextTypefaceType type , intrusive_ptr<Aspose::Cells::System::String> name);
			void Copy(intrusive_ptr<Aspose::Cells::Drawing::Texts::TextTypefaceCollection> source);
			 TextTypefaceCollection();
		public:
			virtual ~TextTypefaceCollection();
	};

}

}

}

}
