#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#include "System/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ICommentShape;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IFont;
		class IStyleFlag;
		class IFontSetting;
		enum TextOrientationType;
		enum TextAlignmentType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents a cell comment.
			/// </summary>
	class ASPOSE_CELLS_API IComment : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets Name of the original comment author
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetAuthor()=0;
			/// <summary>
			/// Sets Name of the original comment author
			/// </summary>
			 virtual void SetAuthor(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Get a Shape object that represents the shape attached to the specified comment.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ICommentShape> 		GetICommentShape()=0;
			/// <summary>
			/// Gets the row index of the comment.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetRow()=0;
			/// <summary>
			/// Gets the column index of the comment.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetColumn()=0;
			/// <summary>
			/// Represents the content of comment.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetNote()=0;
			/// <summary>
			/// Represents the content of comment.
			/// </summary>
			 virtual void SetNote(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the html string which contains data and some formats in this comment.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetHtmlNote()=0;
			/// <summary>
			/// Sets the html string which contains data and some formats in this comment.
			/// </summary>
			 virtual void SetHtmlNote(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the font of comment.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// Format some chararcters with the font setting.
			/// </summary>
			/// <param name="startIndex" >The start index.</param>
			/// <param name="length" >The the length.</param>
			/// <param name="font" >The font setting.</param>
			/// <param name="flag" >The flag of the font setting.</param>
			 virtual void 		FormatCharactersByIFont(Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 length , intrusive_ptr<Aspose::Cells::IFont> font , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Returns a Characters object that represents a range of characters within the comment text.
			/// </summary>
			/// <param name="startIndex" >The index of the start of the character.</param>
			/// <param name="length" >The number of characters.</param>
			/// <returns>Characters object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IFontSetting> 		GetCharacters(Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 length)=0;
			/// <summary>
			/// Returns all Characters objects 
			/// that represents a range of characters within the comment text.
			/// </summary>
			/// <returns>All Characters objects </returns>
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetCharacters()=0;
			/// <summary>
			/// Represents if the comment is visible or not.
			/// </summary>
			 virtual bool IsVisible()=0;
			/// <summary>
			/// Represents if the comment is visible or not.
			/// </summary>
			 virtual void SetVisible(bool value)=0;
			/// <summary>
			///  Gets the text orientation type of the comment.
			/// </summary>
			 virtual Aspose::Cells::TextOrientationType GetTextOrientationType()=0;
			/// <summary>
			///  Sets the text orientation type of the comment.
			/// </summary>
			 virtual void SetTextOrientationType(Aspose::Cells::TextOrientationType value)=0;
			/// <summary>
			///  Gets the text horizontal alignment type of the comment.
			/// </summary>
			 virtual Aspose::Cells::TextAlignmentType GetTextHorizontalAlignment()=0;
			/// <summary>
			///  Sets the text horizontal alignment type of the comment.
			/// </summary>
			 virtual void SetTextHorizontalAlignment(Aspose::Cells::TextAlignmentType value)=0;
			/// <summary>
			///  Gets the text vertical alignment type of the comment.
			/// </summary>
			 virtual Aspose::Cells::TextAlignmentType GetTextVerticalAlignment()=0;
			/// <summary>
			///  Sets the text vertical alignment type of the comment.
			/// </summary>
			 virtual void SetTextVerticalAlignment(Aspose::Cells::TextAlignmentType value)=0;
			/// <summary>
			/// Indicates if size of comment is adjusted automatically according to its content.
			/// </summary>
			 virtual bool GetAutoSize()=0;
			/// <summary>
			/// Indicates if size of comment is adjusted automatically according to its content.
			/// </summary>
			 virtual void SetAutoSize(bool value)=0;
			/// <summary>
			/// Represents the height of the comment, in unit of centimeters.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetHeightCM()=0;
			/// <summary>
			/// Represents the height of the comment, in unit of centimeters.
			/// </summary>
			 virtual void SetHeightCM(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the width of the comment, in unit of centimeters.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetWidthCM()=0;
			/// <summary>
			/// Represents the width of the comment, in unit of centimeters.
			/// </summary>
			 virtual void SetWidthCM(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the width of the comment, in unit of inches.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetWidthInch()=0;
			/// <summary>
			/// Represents the width of the comment, in unit of inches.
			/// </summary>
			 virtual void SetWidthInch(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the height of the comment, in unit of inches.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetHeightInch()=0;
			/// <summary>
			/// Represents the height of the comment, in unit of inches.
			/// </summary>
			 virtual void SetHeightInch(Aspose::Cells::System::Double value)=0;

	};
}
}
