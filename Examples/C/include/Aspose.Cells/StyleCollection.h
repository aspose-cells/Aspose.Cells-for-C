#pragma once
#include "BuiltinStyleType.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
#include "ThemeColorType.h"
#include "System/Double.h"
#include "Style.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_STYLECOLLECTION() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API StyleCollection : public Aspose::Cells::System::Object
#else	class StyleCollection : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* sheets;
	public:

			 StyleCollection(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::Style> GetThemeStyle(Aspose::Cells::ThemeColorType themeColorType , Aspose::Cells::System::Double tint);
			intrusive_ptr<Aspose::Cells::Style> CreateBuiltinStyle(Aspose::Cells::BuiltinStyleType type);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> styleList;
			Aspose::Cells::System::Int32 Add();
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Style> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 GetCount();
			void AddRead(intrusive_ptr<Aspose::Cells::Style> style , bool flag);
			void Clear();
			void Copy(intrusive_ptr<Aspose::Cells::StyleCollection> source);
			 StyleCollection();
		public:
			virtual ~StyleCollection();
	};

}

}
