#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		class IStyle;
		enum ThemeColorType;
		enum BuiltinStyleType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="IStyle" />
			///  objects.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<IStyleCollection> styles = workbook->GetIStyles();
			/// int styleIndex = styles->Add();
			/// intrusive_ptr<IStyle> style = workbook->GetIStyles()->GetObjectByIndex(styleIndex);
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// <remarks>
			/// NOTE: This class is now obsolete. Instead, 
			/// please use CreateIStyle() in IWorkbook to create and manipulate style for workbook instead of Add() in IStyleCollection
			/// and use GetNamedIStyle() in IWorkbook to get named style instead of GetObjectByIndex(StringPtr).</remarks>
			/// 
			/// 
	class ASPOSE_CELLS_API IStyleCollection : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the theme style.
			/// </summary>
			/// 
			/// <param name="themeColorType" >The theme color type.</param>
			/// 
			/// <param name="tint" >The tint value.</param>
			/// 
			/// <returns/>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetThemeIStyle(Aspose::Cells::ThemeColorType themeColorType , Aspose::Cells::System::Double tint)=0;
			/// <summary>
			/// Creates built-in style by given type.
			/// </summary>
			/// 
			/// <param name="type" />
			/// 
			/// <returns>style object</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		CreateBuiltinIStyle(Aspose::Cells::BuiltinStyleType type)=0;
			/// <summary>
			/// Adds an <see cref="IStyle" />
			///  to the collection.
			/// </summary>
			/// 
			/// <returns><see cref="IStyle" />
			///  object index.</returns>
			/// 
			/// <remarks>
			/// If using this method to create a new style and the style name is set, 
			/// a new style will be added to the style dialog of MS Excel.
			/// To avoid this, you can leave the style name blank. 
			/// NOTE: This property is now obsolete. Instead, 
			/// please use CreateIStyle() of IWorkbook to create and manipulate style for workbook instead.</remarks>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Add()=0;
			/// <summary>
			///  Gets the <see cref="IStyle" />
			///  element at the specified index.
			///  </summary>
			/// 
			/// <param name="index" >The zero based index of the element.</param>
			/// 
			/// <returns>The element at the specified index.</returns>
			/// 
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			///  Gets the <see cref="IStyle" />
			///  element with the specified name.
			///  </summary>
			/// 
			/// <param name="name" >Style name</param>
			/// 
			/// <returns>The element with the specified name.</returns>
			/// 
			/// <example>
			///  <code>
			///  [C++]
			/// 
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			///  intrusive_ptr<IStyleCollection> styles = workbook->GetIStyles();
			///  int styleIndex = styles->Add();
			///  intrusive_ptr<IStyle> style = styles->GetObjectByIndex(styleIndex);
			///  style->SetName(new String("MyStyle"));
			///  intrusive_ptr<IStyle> newStyle = styles->GetObjectByIndex(new String("MyStyle"));
			/// 
			/// </code>
			/// </example>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> name)=0;
			/// <summary>
			/// Gets the count of elements in the collection.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetCount()=0;

	};
}
}
