#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/DateTime.h"

namespace Aspose {
	namespace Cells {
		namespace Properties {
			enum PropertyType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Properties{
			/// <summary>
			///  Represents a custom or built-in document property.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  
			///  //Instantiate an IWorkbook object, which must contains document property
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook(new String("C:\\book1.xls"));
			///  //Retrieve a list of all custom document properties of the Excel file
			///  intrusive_ptr<Aspose::Cells::Properties::ICustomDocumentPropertyCollection> customProperties =
			///      workbook->GetIWorksheets()->GetICustomDocumentProperties();
			///  //Accessng a custom document property by using the property index
			///  intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> customProperty1 = customProperties->GetObjectByIndex(3);
			///  //Accessng a custom document property by using the property name
			///  intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> customProperty2 = customProperties->GetObjectByIndex(new String("Owner"));
			/// 
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IDocumentProperty : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Returns the name of the property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets the value of the property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetValue()=0;
			/// <summary>
			/// Sets the value of the property.
			/// </summary>
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Indicates whether this property is linked to content
			/// </summary>
			 virtual bool IsLinkedToContent()=0;
			/// <summary>
			/// The linked content source.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSource()=0;
			/// <summary>
			/// Gets the data type of the property.
			/// </summary>
			 virtual Aspose::Cells::Properties::PropertyType GetType()=0;
			/// <summary>
			/// Returns true if this property does not have a name in the OLE2 storage
			/// and a unique name was generated only for the public API.
			/// </summary>
			 virtual bool IsGeneratedName()=0;
			/// <summary>
			/// Returns the property value as a string.
			/// </summary>
			/// <remarks><p>Converts a number property using Object.ToString(). Converts a boolean property
			/// into "Y" or "N". Converts a date property into a short date string.</p>
			/// </remarks>
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> ToString()=0;
			/// <summary>
			/// Returns the property value as integer.
			/// </summary>
			/// <remarks>
			/// Throws an exception if the property type is not PropertyType_Number.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 ToInt()=0;
			/// <summary>
			/// Returns the property value as double.
			/// </summary>
			/// <remarks>
			/// Throws an exception if the property type is not PropertyType_Float.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Double ToDouble()=0;
			/// <summary>
			/// Returns the property value as DateTime in local time zone.
			/// </summary>
			/// <remarks><p>Throws an exception if the property type is not PropertyType_Date.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> ToDateTime()=0;
			/// <summary>
			/// Returns the property value as bool.
			/// </summary>
			/// <remarks><p>Throws an exception if the property type is not PropertyType_Boolean.</p>
			/// </remarks>
			 virtual bool ToBool()=0;

	};
}
}
}
