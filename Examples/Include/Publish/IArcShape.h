#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum MsoArrowheadStyle;
			enum MsoArrowheadWidth;
			enum MsoArrowheadLength;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			///  Represents the arc shape.
			///  </summary>
			/// <example>
			///  <code>
			///  [C++]
			///  //Instantiate a new Workbook.
			/// intrusive_ptr<IWorkbook> excelbook = Factory::CreateIWorkbook(); 
			///  //Add an arc shape.
			/// intrusive_ptr<IArcShape> arc1 = excelbook->GetIWorksheets()->GetObjectByIndex(0)->GetIShapes()->AddIArc(2, 0, 2, 0, 130, 130); 
			///  //Set the placement of the arc.
			/// arc1->SetPlacement(PlacementType_FreeFloating); 
			///  //Set the fill format.
			/// arc1->GetIMsoFillFormat()->SetForeColor(Systems::Drawing::Color::GetBlue()); 
			///  //Set the line style.
			/// arc1->GetIMsoLineFormat()->SetStyle(MsoLineStyle_Single);  
			///  //Set the line weight.
			/// arc1->GetIMsoLineFormat()->SetWeight(1); 
			///  //Set the color of the arc line.
			/// arc1->GetIMsoLineFormat()->SetForeColor(Systems::Drawing::Color::GetBlue()); 
			///  //Set the dash style of the arc.
			/// arc1->GetIMsoLineFormat()->SetDashStyle(MsoLineDashStyle_Solid); 
			///  //Add another arc shape.
			/// intrusive_ptr<IArcShape> arc2 = excelbook->GetIWorksheets()->GetObjectByIndex(0)->GetIShapes()->AddIArc(9, 0, 2, 0, 130, 130); 
			///  //Set the placement of the arc.
			/// arc2->SetPlacement(PlacementType_FreeFloating);  
			///  //Set the line style.
			/// arc2->GetIMsoLineFormat()->SetStyle(MsoLineStyle_Single);  
			///  //Set the line weight.
			/// arc2->GetIMsoLineFormat()->SetWeight(1); 
			///  //Set the color of the arc line.
			/// arc2->GetIMsoLineFormat()->SetForeColor(Systems::Drawing::Color::GetBlue()); 
			///  //Set the dash style of the arc.
			/// arc2->GetIMsoLineFormat()->SetDashStyle(MsoLineDashStyle_Solid); 
			///  //Save the excel file.
			/// excelbook->Save(new String("d:\\test\\ArcTest.xls"));
			///  </code> 
			///  </example>
	class ASPOSE_CELLS_API IArcShape : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Gets the begin arrow head style of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetBeginArrowheadStyle() in ILineFormat.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadStyle GetBeginArrowheadStyle()=0;
			/// <summary>
			/// Sets the begin arrow head style of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetBeginArrowheadStyle() in ILineFormat.</remarks>
			 virtual void SetBeginArrowheadStyle(Aspose::Cells::Drawing::MsoArrowheadStyle value)=0;
			/// <summary>
			/// Gets the begin arrow head width of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetBeginArrowheadWidth() in ILineFormat.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadWidth GetBeginArrowheadWidth()=0;
			/// <summary>
			/// Sets the begin arrow head width of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetBeginArrowheadWidth() in ILineFormat.</remarks>
			 virtual void SetBeginArrowheadWidth(Aspose::Cells::Drawing::MsoArrowheadWidth value)=0;
			/// <summary>
			/// Gets the begin arrow head length of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetBeginArrowheadLength() in ILineFormat.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadLength GetBeginArrowheadLength()=0;
			/// <summary>
			/// Sets the begin arrow head length of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetBeginArrowheadLength() in ILineFormat.</remarks>
			 virtual void SetBeginArrowheadLength(Aspose::Cells::Drawing::MsoArrowheadLength value)=0;
			/// <summary>
			/// Gets the end arrow head style of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetEndArrowheadStyle() in ILineFormat.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadStyle GetEndArrowheadStyle()=0;
			/// <summary>
			/// Sets the end arrow head style of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetEndArrowheadStyle() in ILineFormat.</remarks>
			 virtual void SetEndArrowheadStyle(Aspose::Cells::Drawing::MsoArrowheadStyle value)=0;
			/// <summary>
			/// Gets the end arrow head width of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetEndArrowheadWidth() in ILineFormat.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadWidth GetEndArrowheadWidth()=0;
			/// <summary>
			/// Sets the end arrow head width of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetEndArrowheadWidth() in ILineFormat.</remarks>
			 virtual void SetEndArrowheadWidth(Aspose::Cells::Drawing::MsoArrowheadWidth value)=0;
			/// <summary>
			/// Gets the end arrow head length of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetEndArrowheadLength() in ILineFormat.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadLength GetEndArrowheadLength()=0;
			/// <summary>
			/// Sets the end arrow head length of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetEndArrowheadLength() in ILineFormat.</remarks>
			 virtual void SetEndArrowheadLength(Aspose::Cells::Drawing::MsoArrowheadLength value)=0;

	};
}
}
}
