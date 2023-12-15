// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PROPERTIES_BUILTINDOCUMENTPROPERTYCOLLECTION_H
#define ASPOSE_CELLS_PROPERTIES_BUILTINDOCUMENTPROPERTYCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/DocumentPropertyCollection.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"

namespace Aspose { namespace Cells { namespace Properties {
    class DocumentProperty;
} } }

namespace Aspose { namespace Cells { namespace Properties {

using namespace Aspose::Cells;

class BuiltInDocumentPropertyCollection_Impl;

/// <summary>
/// A collection of built-in document properties.
/// </summary>
/// <remarks>
/// <p>Provides access to <see cref="DocumentProperty"/> objects by their names (using an indexer) and
/// via a set of typed properties that return values of appropriate types.</p>
/// </remarks>
class BuiltInDocumentPropertyCollection : public DocumentPropertyCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    BuiltInDocumentPropertyCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API BuiltInDocumentPropertyCollection(BuiltInDocumentPropertyCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API BuiltInDocumentPropertyCollection(const BuiltInDocumentPropertyCollection& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API BuiltInDocumentPropertyCollection(const DocumentPropertyCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~BuiltInDocumentPropertyCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API BuiltInDocumentPropertyCollection& operator=(const BuiltInDocumentPropertyCollection& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <overloads>Returns a <see cref="DocumentProperty"/> object.</overloads>
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> object by the name of the property.
    /// </summary>
    /// <remarks>
    /// <p>The string names of the properties correspond to the names of the typed
    /// properties available from <see cref="BuiltInDocumentPropertyCollection"/>.</p>
    /// <p>If you request a property that is not present in the document, but the name
    /// of the property is recognized as a valid built-in name, a new <see cref="DocumentProperty"/>
    /// is created, added to the collection and returned. The newly created property is assigned
    /// a default value (empty string, zero, false or DateTime.MinValue depending on the type
    /// of the built-in property).</p>
    /// <p>If you request a property that is not present in the document and the name
    /// is not recognized as a built-in name, a null is returned.</p>
    /// </remarks>
    /// <param name="name">The case-insensitive name of the property to retrieve.</param>
    ASPOSE_CELLS_API DocumentProperty Get(const U16String& name);
    /// <overloads>Returns a <see cref="DocumentProperty"/> object.</overloads>
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> object by the name of the property.
    /// </summary>
    /// <remarks>
    /// <p>The string names of the properties correspond to the names of the typed
    /// properties available from <see cref="BuiltInDocumentPropertyCollection"/>.</p>
    /// <p>If you request a property that is not present in the document, but the name
    /// of the property is recognized as a valid built-in name, a new <see cref="DocumentProperty"/>
    /// is created, added to the collection and returned. The newly created property is assigned
    /// a default value (empty string, zero, false or DateTime.MinValue depending on the type
    /// of the built-in property).</p>
    /// <p>If you request a property that is not present in the document and the name
    /// is not recognized as a built-in name, a null is returned.</p>
    /// </remarks>
    /// <param name="name">The case-insensitive name of the property to retrieve.</param>
    ASPOSE_CELLS_API DocumentProperty Get(const char16_t* name);
    /// <summary>
    /// Gets or sets the document's language.
    /// </summary>
    ASPOSE_CELLS_API U16String GetLanguage();
    /// <summary>
    /// Gets or sets the document's language.
    /// </summary>
    ASPOSE_CELLS_API void SetLanguage(const U16String& value);
    /// <summary>
    /// Gets or sets the document's language.
    /// </summary>
    ASPOSE_CELLS_API void SetLanguage(const char16_t* value);
    /// <summary>
    /// Gets or sets the name of the document's author.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAuthor();
    /// <summary>
    /// Gets or sets the name of the document's author.
    /// </summary>
    ASPOSE_CELLS_API void SetAuthor(const U16String& value);
    /// <summary>
    /// Gets or sets the name of the document's author.
    /// </summary>
    ASPOSE_CELLS_API void SetAuthor(const char16_t* value);
    /// <summary>
    /// Gets or sets the document comments.
    /// </summary>
    ASPOSE_CELLS_API U16String GetComments();
    /// <summary>
    /// Gets or sets the document comments.
    /// </summary>
    ASPOSE_CELLS_API void SetComments(const U16String& value);
    /// <summary>
    /// Gets or sets the document comments.
    /// </summary>
    ASPOSE_CELLS_API void SetComments(const char16_t* value);
    /// <summary>
    /// Gets or sets the category of the document.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCategory();
    /// <summary>
    /// Gets or sets the category of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetCategory(const U16String& value);
    /// <summary>
    /// Gets or sets the category of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetCategory(const char16_t* value);
    /// <summary>
    /// Gets or sets the content type of the document.
    /// </summary>
    ASPOSE_CELLS_API U16String GetContentType();
    /// <summary>
    /// Gets or sets the content type of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetContentType(const U16String& value);
    /// <summary>
    /// Gets or sets the content type of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetContentType(const char16_t* value);
    /// <summary>
    /// Gets or sets the content status of the document.
    /// </summary>
    ASPOSE_CELLS_API U16String GetContentStatus();
    /// <summary>
    /// Gets or sets the content status of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetContentStatus(const U16String& value);
    /// <summary>
    /// Gets or sets the content status of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetContentStatus(const char16_t* value);
    /// <summary>
    /// Gets or sets the company property.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCompany();
    /// <summary>
    /// Gets or sets the company property.
    /// </summary>
    ASPOSE_CELLS_API void SetCompany(const U16String& value);
    /// <summary>
    /// Gets or sets the company property.
    /// </summary>
    ASPOSE_CELLS_API void SetCompany(const char16_t* value);
    /// <summary>
    /// Gets or sets the hyperlinkbase property.
    /// </summary>
    ASPOSE_CELLS_API U16String GetHyperlinkBase();
    /// <summary>
    /// Gets or sets the hyperlinkbase property.
    /// </summary>
    ASPOSE_CELLS_API void SetHyperlinkBase(const U16String& value);
    /// <summary>
    /// Gets or sets the hyperlinkbase property.
    /// </summary>
    ASPOSE_CELLS_API void SetHyperlinkBase(const char16_t* value);
    /// <summary>
    /// Gets or sets date of the document creation in local timezone.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API Date GetCreatedTime();
    /// <summary>
    /// Gets or sets date of the document creation in local timezone.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetCreatedTime(const Date& value);
    /// <summary>
    /// Gets or sets the Universal time of the document creation.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API Date GetCreatedUniversalTime();
    /// <summary>
    /// Gets or sets the Universal time of the document creation.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetCreatedUniversalTime(const Date& value);
    /// <summary>
    /// Gets or sets the document keywords.
    /// </summary>
    ASPOSE_CELLS_API U16String GetKeywords();
    /// <summary>
    /// Gets or sets the document keywords.
    /// </summary>
    ASPOSE_CELLS_API void SetKeywords(const U16String& value);
    /// <summary>
    /// Gets or sets the document keywords.
    /// </summary>
    ASPOSE_CELLS_API void SetKeywords(const char16_t* value);
    /// <summary>
    /// Gets or sets the date when the document was last printed in local timezone.
    /// </summary>
    /// <remarks>
    /// <p>If the document was never printed, this property will return DateTime.MinValue.</p>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API Date GetLastPrinted();
    /// <summary>
    /// Gets or sets the date when the document was last printed in local timezone.
    /// </summary>
    /// <remarks>
    /// <p>If the document was never printed, this property will return DateTime.MinValue.</p>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetLastPrinted(const Date& value);
    /// <summary>
    /// Gets or sets the Universal time when the document was last printed.
    /// </summary>
    ASPOSE_CELLS_API Date GetLastPrintedUniversalTime();
    /// <summary>
    /// Gets or sets the Universal time when the document was last printed.
    /// </summary>
    ASPOSE_CELLS_API void SetLastPrintedUniversalTime(const Date& value);
    /// <summary>
    /// Gets or sets the name of the last author.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API U16String GetLastSavedBy();
    /// <summary>
    /// Gets or sets the name of the last author.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetLastSavedBy(const U16String& value);
    /// <summary>
    /// Gets or sets the name of the last author.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetLastSavedBy(const char16_t* value);
    /// <summary>
    /// Gets or sets the time of the last save in local timezone.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API Date GetLastSavedTime();
    /// <summary>
    /// Gets or sets the time of the last save in local timezone.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetLastSavedTime(const Date& value);
    /// <summary>
    /// Gets or sets the universal time of the last save.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API Date GetLastSavedUniversalTime();
    /// <summary>
    /// Gets or sets the universal time of the last save.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetLastSavedUniversalTime(const Date& value);
    /// <summary>
    /// Gets or sets the manager property.
    /// </summary>
    ASPOSE_CELLS_API U16String GetManager();
    /// <summary>
    /// Gets or sets the manager property.
    /// </summary>
    ASPOSE_CELLS_API void SetManager(const U16String& value);
    /// <summary>
    /// Gets or sets the manager property.
    /// </summary>
    ASPOSE_CELLS_API void SetManager(const char16_t* value);
    /// <summary>
    /// Gets or sets the name of the application.
    /// </summary>
    ASPOSE_CELLS_API U16String GetNameOfApplication();
    /// <summary>
    /// Gets or sets the name of the application.
    /// </summary>
    ASPOSE_CELLS_API void SetNameOfApplication(const U16String& value);
    /// <summary>
    /// Gets or sets the name of the application.
    /// </summary>
    ASPOSE_CELLS_API void SetNameOfApplication(const char16_t* value);
    /// <summary>
    /// Represents an estimate of the number of pages in the document.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPages();
    /// <summary>
    /// Represents an estimate of the number of pages in the document.
    /// </summary>
    ASPOSE_CELLS_API void SetPages(int32_t value);
    /// <summary>
    /// Gets or sets the document revision number.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API U16String GetRevisionNumber();
    /// <summary>
    /// Gets or sets the document revision number.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetRevisionNumber(const U16String& value);
    /// <summary>
    /// Gets or sets the document revision number.
    /// </summary>
    /// <remarks>
    /// <p>Aspose.Cells does not update this property when you modify the document.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetRevisionNumber(const char16_t* value);
    /// <summary>
    /// Gets or sets the subject of the document.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSubject();
    /// <summary>
    /// Gets or sets the subject of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetSubject(const U16String& value);
    /// <summary>
    /// Gets or sets the subject of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetSubject(const char16_t* value);
    /// <summary>
    /// Gets or sets the informational name of the document template.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTemplate();
    /// <summary>
    /// Gets or sets the informational name of the document template.
    /// </summary>
    ASPOSE_CELLS_API void SetTemplate(const U16String& value);
    /// <summary>
    /// Gets or sets the informational name of the document template.
    /// </summary>
    ASPOSE_CELLS_API void SetTemplate(const char16_t* value);
    /// <summary>
    /// Gets or sets the title of the document.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTitle();
    /// <summary>
    /// Gets or sets the title of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const U16String& value);
    /// <summary>
    /// Gets or sets the title of the document.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const char16_t* value);
    /// <summary>
    /// Gets or sets the total editing time in minutes.
    /// </summary>
    ASPOSE_CELLS_API double GetTotalEditingTime();
    /// <summary>
    /// Gets or sets the total editing time in minutes.
    /// </summary>
    ASPOSE_CELLS_API void SetTotalEditingTime(double value);
    /// <summary>
    /// Represents the version number of the application that created the document.
    /// </summary>
    /// <remarks>
    /// It's format is "00.0000",for example : 12.0000
    /// </remarks>
    ASPOSE_CELLS_API U16String GetVersion();
    /// <summary>
    /// Represents the version number of the application that created the document.
    /// </summary>
    /// <remarks>
    /// It's format is "00.0000",for example : 12.0000
    /// </remarks>
    ASPOSE_CELLS_API void SetVersion(const U16String& value);
    /// <summary>
    /// Represents the version number of the application that created the document.
    /// </summary>
    /// <remarks>
    /// It's format is "00.0000",for example : 12.0000
    /// </remarks>
    ASPOSE_CELLS_API void SetVersion(const char16_t* value);
    /// <summary>
    /// Represents the version of the file.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDocumentVersion();
    /// <summary>
    /// Represents the version of the file.
    /// </summary>
    ASPOSE_CELLS_API void SetDocumentVersion(const U16String& value);
    /// <summary>
    /// Represents the version of the file.
    /// </summary>
    ASPOSE_CELLS_API void SetDocumentVersion(const char16_t* value);
    /// <summary>
    /// Indicates the display mode of the document thumbnail.
    /// </summary>
    ASPOSE_CELLS_API bool GetScaleCrop();
    /// <summary>
    /// Indicates the display mode of the document thumbnail.
    /// </summary>
    ASPOSE_CELLS_API void SetScaleCrop(bool value);
    /// <summary>
    /// Indicates whether hyperlinks in a document are up-to-date.
    /// </summary>
    ASPOSE_CELLS_API bool GetLinksUpToDate();
    /// <summary>
    /// Indicates whether hyperlinks in a document are up-to-date.
    /// </summary>
    ASPOSE_CELLS_API void SetLinksUpToDate(bool value);
    /// <summary>
    /// Represents an estimate of the number of words in the document.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetWords();
    /// <summary>
    /// Represents an estimate of the number of words in the document.
    /// </summary>
    ASPOSE_CELLS_API void SetWords(int32_t value);
    
};

} } }

#endif
