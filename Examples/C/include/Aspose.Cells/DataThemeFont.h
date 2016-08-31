#pragma once
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/StringHelperPal.h"
#include "CountryCode.h"
//#include "System/Int16.h"
#include "DataFontScheme.h"
#include "System/Int32.h"
#include "LangCode.h"
#define STATIC_DATATHEMEFONT()  Static_DataThemeFont()


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataThemeFont : public Aspose::Cells::System::Object
	{
	protected:

			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _langMap;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _scriptMap;
			static void Static_DataThemeFont();
	private:

			void Init_Vars();
			static Aspose::Cells::System::Int32 CountryCodeToLangCode(Aspose::Cells::CountryCode countryCode);
			static void FillLangMap(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> langMap);
			static void FillScriptMap(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> scriptMap);
	public:

			intrusive_ptr<Aspose::Cells::System::String> _name;
			intrusive_ptr<Aspose::Cells::OpenXML::DataFontScheme> _majorFont;
			intrusive_ptr<Aspose::Cells::OpenXML::DataFontScheme> _minorFont;
			 DataThemeFont();
			Aspose::Cells::System::Int32 GetLangCode(intrusive_ptr<Aspose::Cells::System::String> lang);
			intrusive_ptr<Aspose::Cells::System::String> GetFontNameByCountryCode(Aspose::Cells::CountryCode countryCode , bool isMajor);
			Aspose::Cells::System::Int32 GetScriptCode(intrusive_ptr<Aspose::Cells::System::String> script);
			Aspose::Cells::System::Int32 GetScriptByLang(Aspose::Cells::System::Int32 lang);
			intrusive_ptr<Aspose::Cells::System::String> GetFontName(intrusive_ptr<Aspose::Cells::System::String> lang , intrusive_ptr<Aspose::Cells::System::String> altLang , bool isMajor);
			intrusive_ptr<Aspose::Cells::System::String> GetFontName(intrusive_ptr<Aspose::Cells::System::String> lang , bool isMajor);
			intrusive_ptr<Aspose::Cells::System::String> GetFontName(Aspose::Cells::System::Int32 langCode , bool isMajor);
			 static  bool StaticConstructIsFirst;
			static  bool AutoInit_Static_DataThemeFont();
			static  bool StaticConstruct_DataThemeFont_Falg;
		public:
			virtual ~DataThemeFont();
	};

}

}

}
