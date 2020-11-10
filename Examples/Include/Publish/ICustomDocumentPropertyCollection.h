#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/DateTime.h"
#include "Aspose.Cells.Systems/Double.h"
#include "IDocumentPropertyCollection.h"

namespace Aspose {
	namespace Cells {
		namespace Properties {
			class IDocumentProperty;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Properties{
			/// <summary>
			///  A collection of custom document properties. 
			///  </summary>
			/// <remarks>
			///  <p>Each <see cref="IDocumentProperty" />
			///  object represents a custom property of a container document.</p>
			/// 
			///  </remarks>
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  
			///  //Instantiate an IWorkbook object, which must contains document property
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook(new String("C:\\book1.xls"));
			///  
			///  //Retrieve a list of all custom document properties of the Excel file
			///  intrusive_ptr<Aspose::Cells::Properties::ICustomDocumentPropertyCollection> customProperties =
			///      workbook->GetIWorksheets()->GetICustomDocumentProperties();
			/// 
			///  
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API ICustomDocumentPropertyCollection : virtual public Aspose::Cells::Properties::IDocumentPropertyCollection
	{
		public:
			/// <overloads>Creates a new custom document property.</overloads>
			/// <summary>
			/// Creates a new custom document property of the <b>PropertyType.String</b>
			///  data type.
			/// </summary>
			/// <param name="name" >The name of the property.</param>
			/// <param name="value" >The value of the property.</param>
			/// <returns>The newly created property object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> 		AddIDocumentProperty(intrusive_ptr<Aspose::Cells::Systems::String> name , intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Creates a new custom document property of the <b>PropertyType.Number</b>
			///  data type.
			/// </summary>
			/// <param name="name" >The name of the property.</param>
			/// <param name="value" >The value of the property.</param>
			/// <returns>The newly created property object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> 		AddIDocumentProperty(intrusive_ptr<Aspose::Cells::Systems::String> name , Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Creates a new custom document property of the <b>PropertyType.DateTime</b>
			///  data type.
			/// </summary>
			/// <param name="name" >The name of the property.</param>
			/// <param name="value" >The value of the property.</param>
			/// <returns>The newly created property object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> 		AddIDocumentProperty(intrusive_ptr<Aspose::Cells::Systems::String> name , intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			/// Creates a new custom document property of the <b>PropertyType.Boolean</b>
			///  data type.
			/// </summary>
			/// <param name="name" >The name of the property.</param>
			/// <param name="value" >The value of the property.</param>
			/// <returns>The newly created property object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> 		AddIDocumentProperty(intrusive_ptr<Aspose::Cells::Systems::String> name , bool value)=0;
			/// <summary>
			/// Creates a new custom document property of the <b>PropertyType.Float</b>
			///  data type.
			/// </summary>
			/// <param name="name" >The name of the property.</param>
			/// <param name="value" >The value of the property.</param>
			/// <returns>The newly created property object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> 		AddIDocumentProperty(intrusive_ptr<Aspose::Cells::Systems::String> name , Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			///  Creates a new custom document property which links to content.
			/// </summary>
			/// <param name="name" >The name of the property.</param>
			/// <param name="source" >The source of the property</param>
			/// <returns>The newly created property object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> 		AddLinkToContentProperty(intrusive_ptr<Aspose::Cells::Systems::String> name , intrusive_ptr<Aspose::Cells::Systems::String> source)=0;
			/// <summary>
			/// Update custom document property value which links to content.
			/// </summary>
			 virtual void UpdateLinkedPropertyValue()=0;
			/// <summary>
			/// Update custom document property value to linked range.
			/// </summary>
			 virtual void UpdateLinkedRange()=0;

	};
}
}
}
