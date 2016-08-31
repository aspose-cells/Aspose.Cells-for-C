#pragma once
#include "System/Object.h"
#include "System/Guid.h"
//#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "CommentDisplayType.h"
#include "ObjectDisplayType.h"
#define STATIC_CUSTOMWORKBOOKVIEW() 


namespace Aspose {
namespace Cells {
	class CustomWorkbookView : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 ActiveTabId;
			intrusive_ptr<Aspose::Cells::System::Guid> Guid;
			Aspose::Cells::System::Int32 Left;
			Aspose::Cells::System::Int32 Top;
			Aspose::Cells::System::Int32 Width;
			Aspose::Cells::System::Int32 Height;
			Aspose::Cells::System::Int32 Options;
			Aspose::Cells::System::Int32 SheetTabBarWidth;
			bool GetDisplayFormulaBar();
			void SetDisplayFormulaBar(bool value);
			bool GetDisplayStatusBar();
			void SetDisplayStatusBar(bool value);
			Aspose::Cells::CommentDisplayType GetCommentDisplayType();
			void SetCommentDisplayType(Aspose::Cells::CommentDisplayType value);
			bool GetDisplayVScrollBar();
			void SetDisplayVScrollBar(bool value);
			bool GetDisplayTabBar();
			void SetDisplayTabBar(bool value);
			Aspose::Cells::ObjectDisplayType GetObjectDisplayType();
			void SetObjectDisplayType(Aspose::Cells::ObjectDisplayType value);
			bool IsPrintSet();
			void SetIsPrintSet(bool value);
			bool GetHiddenRowColumn();
			void SetHiddenRowColumn(bool value);
			bool IsTabIdValid();
			void SetIsTabIdValid(bool value);
			bool IsAutoUpdated();
			void SetIsAutoUpdated(bool value);
			bool GetAllMergeChanges();
			void SetAllMergeChanges(bool value);
			bool GetMergeAutomaticChanges();
			void SetMergeAutomaticChanges(bool value);
			bool IsPersonalView();
			void SetIsPersonalView(bool value);
			bool IsMinimized();
			void SetIsMinimized(bool value);
			bool IsMaximized();
			void SetIsMaximized(bool value);
			bool GetDisplayHScrollBar();
			void SetDisplayHScrollBar(bool value);
			Aspose::Cells::System::Int32 MergeTimeInterval;
			intrusive_ptr<Aspose::Cells::System::String> Name;
			 CustomWorkbookView();
		public:
			virtual ~CustomWorkbookView();
	};

}

}
