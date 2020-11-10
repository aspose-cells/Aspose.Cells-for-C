#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"

namespace Aspose {
	namespace Cells {
		class ICell;
	}
}
namespace Aspose{
namespace Cells{
namespace Rendering{
			/// <summary>
			///  PdfBookmarkEntry is an entry in pdf bookmark.
			///  if Text property of current instance is null or "",
			///  current instance will be hidden and children will be inserted on current level.
			///  </summary>
	class ASPOSE_CELLS_API IPdfBookmarkEntry : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Title of a bookmark.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// Title of a bookmark.
			/// </summary>
			 virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// The cell to which the bookmark link.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetICellDestination()=0;
			/// <summary>
			/// The cell to which the bookmark link.
			/// </summary>
			 virtual void 		SetICellDestination(intrusive_ptr<Aspose::Cells::ICell> value)=0;
			/// <summary>
			/// SubEntry of a bookmark.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> GetSubEntry()=0;
			/// <summary>
			/// SubEntry of a bookmark.
			/// </summary>
			 virtual void SetSubEntry(intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> value)=0;
			/// <summary>
			/// When this property is true, the bookmarkentry will expand, otherwise it will collapse.
			/// </summary>
			 virtual bool IsOpen()=0;
			/// <summary>
			/// When this property is true, the bookmarkentry will expand, otherwise it will collapse.
			/// </summary>
			 virtual void SetOpen(bool value)=0;
			/// <summary>
			/// When this property is true, the bookmarkentry will collapse, otherwise it will expand.
			/// </summary>
			 virtual bool IsCollapse()=0;
			/// <summary>
			/// When this property is true, the bookmarkentry will collapse, otherwise it will expand.
			/// </summary>
			 virtual void SetCollapse(bool value)=0;

	};
}
}
}
