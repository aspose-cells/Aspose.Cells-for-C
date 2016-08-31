#pragma once
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "RevisionType.h"
#include "System/Object.h"
#include "Revision.h"
#define STATIC_REVISIONDEFINEDNAME() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Revisions {
	class RevisionDefinedName : public Aspose::Cells::Revisions::Revision
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte m_FunctionGroupId;
			Aspose::Cells::System::Byte m_OldFunctionGroupId;
			Aspose::Cells::System::Byte m_ShortcutKey;
			Aspose::Cells::System::Byte m_OldShortcutKey;
	public:

			 RevisionDefinedName();
			 RevisionDefinedName(intrusive_ptr<Aspose::Cells::Revisions::RevisionCollection> revisions);
			 virtual Aspose::Cells::Revisions::RevisionType GetType();
			bool IsOld;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> OldBinaryFormula;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinaryFormula;
			intrusive_ptr<Aspose::Cells::System::String> m_OldFormula;
			intrusive_ptr<Aspose::Cells::System::String> m_Formula;
			intrusive_ptr<Aspose::Cells::System::String> GetOldFormula();
			void SetOldFormula(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula();
			void SetFormula(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> ExtLst;
			intrusive_ptr<Aspose::Cells::System::String> Comment;
			intrusive_ptr<Aspose::Cells::System::String> OldComment;
			intrusive_ptr<Aspose::Cells::System::String> CustomMenu;
			intrusive_ptr<Aspose::Cells::System::String> OldCustomMenu;
			intrusive_ptr<Aspose::Cells::System::String> Description;
			intrusive_ptr<Aspose::Cells::System::String> OldDescription;
			intrusive_ptr<Aspose::Cells::System::String> Help;
			intrusive_ptr<Aspose::Cells::System::String> OldHelp;
			bool IsCustomView;
			bool IsButiltIn;
			bool IsFunction;
			bool IsOldFunction;
			Aspose::Cells::System::Byte GetFunctionGroupId();
			void SetFunctionGroupId(Aspose::Cells::System::Byte value);
			Aspose::Cells::System::Byte GetOldFunctionGroupId();
			void SetOldFunctionGroupId(Aspose::Cells::System::Byte value);
			bool IsHidden;
			bool IsOldHidden;
			Aspose::Cells::System::Int32 LocalTabId;
			intrusive_ptr<Aspose::Cells::System::String> Name;
			Aspose::Cells::System::Byte GetShortcutKey();
			void SetShortcutKey(Aspose::Cells::System::Byte value);
			Aspose::Cells::System::Byte GetOldShortcutKey();
			void SetOldShortcutKey(Aspose::Cells::System::Byte value);
			intrusive_ptr<Aspose::Cells::System::String> StatusBar;
			intrusive_ptr<Aspose::Cells::System::String> OldStatusBar;
			bool IsUndoRejected;
			bool IsFromRejection;
			Aspose::Cells::System::Int32 Id;
		public:
			virtual ~RevisionDefinedName();
	};

}

}

}
