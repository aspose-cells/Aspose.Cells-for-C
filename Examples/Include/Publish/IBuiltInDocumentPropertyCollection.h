#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/DateTime.h"
#include "System/Double.h"
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
			/// A collection of built-in document properties.
			/// </summary>
			/// <remarks><p>Provides access to <see cref="IDocumentProperty" />
			///  objects by their names (using an indexer) and
			/// via a set of typed properties that return values of appropriate types.</p>
			/// </remarks>
	class ASPOSE_CELLS_API IBuiltInDocumentPropertyCollection : virtual public Aspose::Cells::Properties::IDocumentPropertyCollection
	{
		public:
			/// <overloads>Returns an <see cref="IDocumentProperty" />
			///  object.</overloads>
			/// <summary>
			/// Returns an <see cref="IDocumentProperty" />
			///  object by the name of the property.
			/// </summary>
			/// <remarks><p>The string names of the properties correspond to the names of the typed
			/// properties available from <see cref="IBuiltInDocumentPropertyCollection" />
			/// .</p>
			/// 
			/// 
			/// <p>If you request a property that is not present in the document, but the name
			/// of the property is recognized as a valid built-in name, a new <see cref="IDocumentProperty" />
			///  
			/// is created, added to the collection and returned. The newly created property is assigned
			/// a default value (empty string, zero, false or DateTime.MinValue depending on the type
			/// of the built-in property).</p>
			/// 
			/// 
			/// <p>If you request a property that is not present in the document and the name
			/// is not recognized as a built-in name, a null is returned.</p>
			/// </remarks>
			/// <param name="name" >The case-insensitive name of the property to retrieve.</param>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> name)=0;
			/// <summary>
			/// Gets or sets the name of the document's author.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetAuthor()=0;
			/// <summary>
			/// Gets or sets the name of the document's author.
			/// </summary>
			 virtual void SetAuthor(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents an estimate of the number of bytes in the document.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetBytes()=0;
			/// <summary>
			/// Represents an estimate of the number of bytes in the document.
			/// </summary>
			 virtual void SetBytes(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents an estimate of the number of characters in the document.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCharacters()=0;
			/// <summary>
			/// Represents an estimate of the number of characters in the document.
			/// </summary>
			 virtual void SetCharacters(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents an estimate of the number of characters (including spaces) in the document.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCharactersWithSpaces()=0;
			/// <summary>
			/// Represents an estimate of the number of characters (including spaces) in the document.
			/// </summary>
			 virtual void SetCharactersWithSpaces(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets or sets the document comments.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetComments()=0;
			/// <summary>
			/// Gets or sets the document comments.
			/// </summary>
			 virtual void SetComments(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the category of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetCategory()=0;
			/// <summary>
			/// Gets or sets the category of the document.
			/// </summary>
			 virtual void SetCategory(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the content type of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetContentType()=0;
			/// <summary>
			/// Gets or sets the content type of the document.
			/// </summary>
			 virtual void SetContentType(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the content status of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetContentStatus()=0;
			/// <summary>
			/// Gets or sets the content status of the document.
			/// </summary>
			 virtual void SetContentStatus(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the company property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetCompany()=0;
			/// <summary>
			/// Gets or sets the company property.
			/// </summary>
			 virtual void SetCompany(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the hyperlinkbase property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetHyperlinkBase()=0;
			/// <summary>
			/// Gets or sets the hyperlinkbase property.
			/// </summary>
			 virtual void SetHyperlinkBase(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets date of the document creation in UTC.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::DateTime> GetCreatedTime()=0;
			/// <summary>
			/// Gets or sets date of the document creation in UTC.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetCreatedTime(intrusive_ptr<Aspose::Cells::System::DateTime> value)=0;
			/// <summary>
			/// Gets or sets the document keywords.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetKeywords()=0;
			/// <summary>
			/// Gets or sets the document keywords.
			/// </summary>
			 virtual void SetKeywords(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the date when the document was last printed in UTC.
			/// </summary>
			/// <remarks><p>If the document was never printed, this property will return DateTime.MinValue.</p>
			/// <p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::DateTime> GetLastPrinted()=0;
			/// <summary>
			/// Gets or sets the date when the document was last printed in UTC.
			/// </summary>
			/// <remarks><p>If the document was never printed, this property will return DateTime.MinValue.</p>
			/// <p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetLastPrinted(intrusive_ptr<Aspose::Cells::System::DateTime> value)=0;
			/// <summary>
			/// Gets or sets the name of the last author.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetLastSavedBy()=0;
			/// <summary>
			/// Gets or sets the name of the last author.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetLastSavedBy(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the time of the last save in UTC.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::DateTime> GetLastSavedTime()=0;
			/// <summary>
			/// Gets or sets the time of the last save in UTC.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetLastSavedTime(intrusive_ptr<Aspose::Cells::System::DateTime> value)=0;
			/// <summary>
			/// Represents an estimate of the number of lines in the document.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual Aspose::Cells::System::Int32 GetLines()=0;
			/// <summary>
			/// Represents an estimate of the number of lines in the document.
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetLines(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets or sets the manager property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetManager()=0;
			/// <summary>
			/// Gets or sets the manager property.
			/// </summary>
			 virtual void SetManager(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the name of the application.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetNameOfApplication()=0;
			/// <summary>
			/// Gets or sets the name of the application.
			/// </summary>
			 virtual void SetNameOfApplication(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents an estimate of the number of pages in the document.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetPages()=0;
			/// <summary>
			/// Represents an estimate of the number of pages in the document.
			/// </summary>
			 virtual void SetPages(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents an estimate of the number of paragraphs in the document.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetParagraphs()=0;
			/// <summary>
			/// Represents an estimate of the number of paragraphs in the document.
			/// </summary>
			 virtual void SetParagraphs(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets or sets the document revision number. 
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual Aspose::Cells::System::Int32 GetRevisionNumber()=0;
			/// <summary>
			/// Gets or sets the document revision number. 
			/// </summary>
			/// <remarks><p>Aspose.Cells does not update this property when you modify the document.</p>
			/// </remarks>
			 virtual void SetRevisionNumber(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets or sets the subject of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetSubject()=0;
			/// <summary>
			/// Gets or sets the subject of the document.
			/// </summary>
			 virtual void SetSubject(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the informational name of the document template.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetTemplate()=0;
			/// <summary>
			/// Gets or sets the informational name of the document template.
			/// </summary>
			 virtual void SetTemplate(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the title of the document.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetTitle()=0;
			/// <summary>
			/// Gets or sets the title of the document.
			/// </summary>
			 virtual void SetTitle(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets or sets the total editing time in minutes.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetTotalEditingTime()=0;
			/// <summary>
			/// Gets or sets the total editing time in minutes.
			/// </summary>
			 virtual void SetTotalEditingTime(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the version number of the application that created the document.
			/// </summary>
			/// <remarks>
			/// It's format is "00.0000",for example : 12.0000
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetVersion()=0;
			/// <summary>
			/// Represents the version number of the application that created the document.
			/// </summary>
			/// <remarks>
			/// It's format is "00.0000",for example : 12.0000
			/// </remarks>
			 virtual void SetVersion(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates the display mode of the document thumbnail.
			/// </summary>
			 virtual bool GetScaleCrop()=0;
			/// <summary>
			/// Indicates the display mode of the document thumbnail.
			/// </summary>
			 virtual void SetScaleCrop(bool value)=0;
			/// <summary>
			/// Indicates whether hyperlinks in a document are up-to-date.
			/// </summary>
			 virtual bool GetLinksUpToDate()=0;
			/// <summary>
			/// Indicates whether hyperlinks in a document are up-to-date.
			/// </summary>
			 virtual void SetLinksUpToDate(bool value)=0;
			/// <summary>
			/// Represents an estimate of the number of words in the document.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetWords()=0;
			/// <summary>
			/// Represents an estimate of the number of words in the document.
			/// </summary>
			 virtual void SetWords(Aspose::Cells::System::Int32 value)=0;
public:

			static  bool 		AutoInit_Static_BuiltInDocumentPropertyCollection();

	};
}
}
}
