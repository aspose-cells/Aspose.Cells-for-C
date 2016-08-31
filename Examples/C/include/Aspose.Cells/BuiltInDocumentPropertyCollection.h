#pragma once
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/String.h"
#include "DocumentProperty.h"
//#include "System/StringHelperPal.h"
#include "PropertyGroup.h"
#include "DocumentPropertyCollection.h"
//#include "System/Boxing.h"
#include "System/Double.h"
#include "System/DateTime.h"
#include "System/Int32.h"
//#include "System/Collections/Specialized/CollectionsUtil.h"
#include "System/Collections/ArrayList.h"
#define STATIC_BUILTINDOCUMENTPROPERTYCOLLECTION()  Static_BuiltInDocumentPropertyCollection()

namespace Aspose {
namespace Cells {
namespace Properties {
class PropertySchema;
}
}
}

namespace Aspose {
namespace Cells {
namespace Properties {
#ifdef WIN32

	class ASPOSE_CELLS_API BuiltInDocumentPropertyCollection : public Aspose::Cells::Properties::DocumentPropertyCollection
#else	class BuiltInDocumentPropertyCollection : public Aspose::Cells::Properties::DocumentPropertyCollection
#endif


	{
	protected:

			static void Static_BuiltInDocumentPropertyCollection();
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::Properties::PropertySchema> GetPropertySchemaByName(intrusive_ptr<Aspose::Cells::System::String> name);
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> gAlternateNames;
			static intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> gSchema;
	public:

			 BuiltInDocumentPropertyCollection();
			 virtual intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::System::String> GetAuthor();
			void SetAuthor(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetBytes();
			void SetBytes(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetCharacters();
			void SetCharacters(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetCharactersWithSpaces();
			void SetCharactersWithSpaces(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetComments();
			void SetComments(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetCategory();
			void SetCategory(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetContentType();
			void SetContentType(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetContentStatus();
			void SetContentStatus(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetCompany();
			void SetCompany(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetHyperlinkBase();
			void SetHyperlinkBase(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::DateTime> GetCreatedTime();
			void SetCreatedTime(intrusive_ptr<Aspose::Cells::System::DateTime> value);
			intrusive_ptr<Aspose::Cells::System::String> GetKeywords();
			void SetKeywords(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::DateTime> GetLastPrinted();
			void SetLastPrinted(intrusive_ptr<Aspose::Cells::System::DateTime> value);
			intrusive_ptr<Aspose::Cells::System::String> GetLastSavedBy();
			void SetLastSavedBy(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::DateTime> GetLastSavedTime();
			void SetLastSavedTime(intrusive_ptr<Aspose::Cells::System::DateTime> value);
			Aspose::Cells::System::Int32 GetLines();
			void SetLines(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetManager();
			void SetManager(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetNameOfApplication();
			void SetNameOfApplication(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetPages();
			void SetPages(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetParagraphs();
			void SetParagraphs(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetRevisionNumber();
			void SetRevisionNumber(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetSecurity();
			void SetSecurity(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetSubject();
			void SetSubject(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetTemplate();
			void SetTemplate(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetTitle();
			void SetTitle(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Double GetTotalEditingTime();
			void SetTotalEditingTime(Aspose::Cells::System::Double value);
			intrusive_ptr<Aspose::Cells::System::String> GetVersion();
			void SetVersion(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetWords();
			void SetWords(Aspose::Cells::System::Int32 value);
			static intrusive_ptr<Aspose::Cells::System::String> GetPropertyName(Aspose::Cells::System::Int32 id , Aspose::Cells::Properties::PropertyGroup group);
			 static  bool StaticConstructIsFirst;
			static  bool AutoInit_Static_BuiltInDocumentPropertyCollection();
			static  bool StaticConstruct_BuiltInDocumentPropertyCollection_Falg;
		public:
			virtual ~BuiltInDocumentPropertyCollection();
	};

}

}

}
