#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/DateTime.h"
#define STATIC_DOCUMENTINFO() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class DocumentInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> mGeneratorName;
			intrusive_ptr<Aspose::Cells::System::String> mTitle;
			intrusive_ptr<Aspose::Cells::System::String> mSubject;
			intrusive_ptr<Aspose::Cells::System::String> mAuthor;
			intrusive_ptr<Aspose::Cells::System::String> mCreator;
			intrusive_ptr<Aspose::Cells::System::String> mKeywords;
			intrusive_ptr<Aspose::Cells::System::String> mDescription;
			intrusive_ptr<Aspose::Cells::System::String> mLastModifiedBy;
			intrusive_ptr<Aspose::Cells::System::String> mRevision;
			intrusive_ptr<Aspose::Cells::System::String> mCategory;
			intrusive_ptr<Aspose::Cells::System::DateTime> mLastPrinted;
			intrusive_ptr<Aspose::Cells::System::DateTime> mCreationDate;
			intrusive_ptr<Aspose::Cells::System::DateTime> mModifiedDate;
	public:

			intrusive_ptr<Aspose::Cells::System::String> GetGeneratorName();
			void SetGeneratorName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetTitle();
			void SetTitle(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetAuthor();
			void SetAuthor(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetSubject();
			void SetSubject(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetCreator();
			void SetCreator(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetKeywords();
			void SetKeywords(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetDescription();
			void SetDescription(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetLastModifiedBy();
			void SetLastModifiedBy(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetRevision();
			void SetRevision(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetCategory();
			void SetCategory(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::DateTime> GetLastPrinted();
			void SetLastPrinted(intrusive_ptr<Aspose::Cells::System::DateTime> value);
			intrusive_ptr<Aspose::Cells::System::DateTime> GetCreationDate();
			void SetCreationDate(intrusive_ptr<Aspose::Cells::System::DateTime> value);
			intrusive_ptr<Aspose::Cells::System::DateTime> GetModifiedDate();
			void SetModifiedDate(intrusive_ptr<Aspose::Cells::System::DateTime> value);
			 DocumentInfo();
		public:
			virtual ~DocumentInfo();
	};

}

}

}

}
