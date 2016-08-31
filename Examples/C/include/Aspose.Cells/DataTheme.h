#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Drawing/Color.h"
#include "DataThemeFont.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DATATHEME() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataColorScheme;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataTheme : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataColorScheme> GetDefaultClr(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::OpenXML::DataColorScheme> BuildDataSchemeClr(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> hexStr);
	public:

			intrusive_ptr<Aspose::Cells::System::String> Name;
			intrusive_ptr<Aspose::Cells::System::String> KeptXml;
			Aspose::Cells::System::Int32 ThemeVersion;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _Rels;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::OpenXML::DataColorScheme*>> SchemeClrArr;
			intrusive_ptr<Aspose::Cells::OpenXML::DataThemeFont> _themeFont;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _LnStyleLst;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetLineStyleList();
			 DataTheme(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> colors);
			void Copy(intrusive_ptr<Aspose::Cells::OpenXML::DataTheme> source);
			bool ExportTo2003();
			 DataTheme();
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetThemeColor(Aspose::Cells::System::Int32 idx);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetSchemeColor(intrusive_ptr<Aspose::Cells::System::String> name);
			void FillDefault();
		public:
			virtual ~DataTheme();
	};

}

}

}
