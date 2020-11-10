#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents an external link in a workbook.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  
			///  //Open a file with external links
			///  intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(new String("d:\\book1.xls"));
			///  
			///  //Get External Link 
			///  intrusive_ptr<IExternalLink> externalLink = workbook->GetIWorksheets()->GetIExternalLinks()->GetObjectByIndex(0);
			///  
			///  //Change External Link's Data Source
			///  externalLink->SetDataSource(new String("d:\\link.xls"));
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IExternalLink : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Represents stored data source of the external link.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetOriginalDataSource()=0;
			/// <summary>
			/// Represents stored data source of the external link.
			/// </summary>
			 virtual void SetOriginalDataSource(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents data source of the external link.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDataSource()=0;
			/// <summary>
			/// Represents data source of the external link.
			/// </summary>
			 virtual void SetDataSource(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Adds an external name.
			/// </summary>
			/// <param name="text" >The text of the external name.
			/// If the external name belongs to a worksheet, the text should be as Sheet1!Text.
			/// </param>
			/// <param name="referTo" >The referTo of the external name. It must be a cell or the range.</param>
			 virtual void AddExternalName(intrusive_ptr<Aspose::Cells::Systems::String> text , intrusive_ptr<Aspose::Cells::Systems::String> referTo)=0;
			/// <summary>
			/// Indicates whether this external link is refered by others.
			/// </summary>
			 virtual bool IsReferred()=0;
			/// <summary>
			/// Indicates whether this external link is visible in MS Excel.
			/// </summary>
			 virtual bool IsVisible()=0;

	};
}
}
