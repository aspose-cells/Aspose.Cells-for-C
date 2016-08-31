#pragma once
//#include "System/Drawing/Size.h"
#include "System/Collections/ArrayList.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Drawing/FontStyle.h"
//#include "System/Math.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
//#include "System/Collections/IDictionaryEnumerator.h"
//#include "System/Double.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_COLUMNAUTOFITTER() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
}
}
}
namespace Aspose {
namespace Cells {
class AutoFitterFontString;
class AutoFitterOptions;
class WorksheetCollection;
class Cells;
class Style;
}
}

namespace Aspose {
namespace Cells {
	class ColumnAutoFitter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static Aspose::Cells::System::Int32 GetStringWidth(Aspose::Cells::WorksheetCollection* sheets , Aspose::Cells::CellsSs::CellData* CellData , Aspose::Cells::Style* style , Aspose::Cells::System::String* text , bool filterCheckBox);
			static Aspose::Cells::System::Int32 GetStringWidth(Aspose::Cells::WorksheetCollection* sheets , Aspose::Cells::CellsSs::CellData* CellData , Aspose::Cells::Style* style , Aspose::Cells::System::String* text , bool filterCheckBox , Aspose::Cells::System::Int32 textStartIndex , Aspose::Cells::System::Int32 valueLength);
			static Aspose::Cells::System::Int32 GetStringWidth(Aspose::Cells::AutoFitterFontString* fontString);
			static bool HasFilterComboBox(Aspose::Cells::Cells* cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static void AutoFitWidth(Aspose::Cells::Cells* cells , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn , Aspose::Cells::AutoFitterOptions* options);
			static void GatherString(Aspose::Cells::System::Collections::ArrayList* list , Aspose::Cells::Style* style , Aspose::Cells::System::String* text);
			static bool IsIngoredCell(Aspose::Cells::Cells* cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::CellsSs::CellData* celldata , Aspose::Cells::AutoFitterOptions* options);
	public:

			 ColumnAutoFitter();
			static void AutoFitColumn(Aspose::Cells::Cells* cells , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn , Aspose::Cells::AutoFitterOptions* options);
		public:
			virtual ~ColumnAutoFitter();
	};

}

}
