// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_PDFSECURITY_PDFSECURITYOPTIONS_H
#define ASPOSE_CELLS_RENDERING_PDFSECURITY_PDFSECURITYOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Rendering { namespace PdfSecurity {

using namespace Aspose::Cells;

class PdfSecurityOptions_Impl;

/// <summary>
/// Options for encrypting and access permissions for a PDF document.
/// PDF/A does not allow security setting.
/// </summary>
class PdfSecurityOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PdfSecurityOptions_Impl* _impl;
    
public:
    /// <summary>
    /// The constructor of PdfSecurityOptions
    /// </summary>
    ASPOSE_CELLS_API PdfSecurityOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PdfSecurityOptions(PdfSecurityOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PdfSecurityOptions(const PdfSecurityOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PdfSecurityOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PdfSecurityOptions& operator=(const PdfSecurityOptions& src);
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
    /// <summary>
    /// Gets or sets the user password required for opening the encrypted PDF document.
    /// </summary>
    /// <remarks>
    /// <p>The owner password or user password will be required to open an encrypted PDF document for viewing.</p>
    /// <p>The user password can be null or empty string, in this case no password will be required from the user when opening the PDF document.</p>
    /// <p>Opening the document with the correct owner password allows full access to the document.</p>
    /// <p>Opening the document with the correct user password (or opening a document that does not have a user password)
    /// allows limited access as the permissions specified.</p>
    /// </remarks>
    ASPOSE_CELLS_API U16String GetUserPassword();
    /// <summary>
    /// Gets or sets the user password required for opening the encrypted PDF document.
    /// </summary>
    /// <remarks>
    /// <p>The owner password or user password will be required to open an encrypted PDF document for viewing.</p>
    /// <p>The user password can be null or empty string, in this case no password will be required from the user when opening the PDF document.</p>
    /// <p>Opening the document with the correct owner password allows full access to the document.</p>
    /// <p>Opening the document with the correct user password (or opening a document that does not have a user password)
    /// allows limited access as the permissions specified.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetUserPassword(const U16String& value);
    /// <summary>
    /// Gets or sets the user password required for opening the encrypted PDF document.
    /// </summary>
    /// <remarks>
    /// <p>The owner password or user password will be required to open an encrypted PDF document for viewing.</p>
    /// <p>The user password can be null or empty string, in this case no password will be required from the user when opening the PDF document.</p>
    /// <p>Opening the document with the correct owner password allows full access to the document.</p>
    /// <p>Opening the document with the correct user password (or opening a document that does not have a user password)
    /// allows limited access as the permissions specified.</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetUserPassword(const char16_t* value);
    /// <summary>
    /// Gets or sets the owner password for the encrypted PDF document.
    /// </summary>
    /// <remarks>
    /// The owner password allows the user to open an encrypted PDF document without any access restrictions specified.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetOwnerPassword();
    /// <summary>
    /// Gets or sets the owner password for the encrypted PDF document.
    /// </summary>
    /// <remarks>
    /// The owner password allows the user to open an encrypted PDF document without any access restrictions specified.
    /// </remarks>
    ASPOSE_CELLS_API void SetOwnerPassword(const U16String& value);
    /// <summary>
    /// Gets or sets the owner password for the encrypted PDF document.
    /// </summary>
    /// <remarks>
    /// The owner password allows the user to open an encrypted PDF document without any access restrictions specified.
    /// </remarks>
    ASPOSE_CELLS_API void SetOwnerPassword(const char16_t* value);
    /// <summary>
    /// Indicates whether to allow to print the document.
    /// </summary>
    /// <remarks>
    /// Possibly not at the highest quality level,
    /// depending on whether <see cref="FullQualityPrintPermission"/> is also set.
    /// </remarks>
    ASPOSE_CELLS_API bool GetPrintPermission();
    /// <summary>
    /// Indicates whether to allow to print the document.
    /// </summary>
    /// <remarks>
    /// Possibly not at the highest quality level,
    /// depending on whether <see cref="FullQualityPrintPermission"/> is also set.
    /// </remarks>
    ASPOSE_CELLS_API void SetPrintPermission(bool value);
    /// <summary>
    /// Indicates whether to allow to modify the contents of the document by operations other than those controlled
    /// by <see cref="AnnotationsPermission"/>, <see cref="FillFormsPermission"/> and <see cref="AssembleDocumentPermission"/>.
    /// </summary>
    ASPOSE_CELLS_API bool GetModifyDocumentPermission();
    /// <summary>
    /// Indicates whether to allow to modify the contents of the document by operations other than those controlled
    /// by <see cref="AnnotationsPermission"/>, <see cref="FillFormsPermission"/> and <see cref="AssembleDocumentPermission"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetModifyDocumentPermission(bool value);
    /// <summary>
    /// Indicates whether to allow to add or modify text annotations, fill in interactive form fields.
    /// </summary>
    /// <remarks>
    /// if <see cref="ModifyDocumentPermission"/> is also set, create or modify interactive form fields (including signature fields).
    /// </remarks>
    ASPOSE_CELLS_API bool GetAnnotationsPermission();
    /// <summary>
    /// Indicates whether to allow to add or modify text annotations, fill in interactive form fields.
    /// </summary>
    /// <remarks>
    /// if <see cref="ModifyDocumentPermission"/> is also set, create or modify interactive form fields (including signature fields).
    /// </remarks>
    ASPOSE_CELLS_API void SetAnnotationsPermission(bool value);
    /// <summary>
    /// Indicates whether to allow to fill in existing interactive form fields (including signature fields),
    /// even if <see cref="ModifyDocumentPermission"/> is clear.
    /// </summary>
    ASPOSE_CELLS_API bool GetFillFormsPermission();
    /// <summary>
    /// Indicates whether to allow to fill in existing interactive form fields (including signature fields),
    /// even if <see cref="ModifyDocumentPermission"/> is clear.
    /// </summary>
    ASPOSE_CELLS_API void SetFillFormsPermission(bool value);
    /// <summary>
    /// Indicates whether to allow to copy or otherwise extract text and graphics from the document
    /// by operations other than that controlled by <see cref="AccessibilityExtractContent"/>.
    /// </summary>
    ASPOSE_CELLS_API bool GetExtractContentPermission();
    /// <summary>
    /// Indicates whether to allow to copy or otherwise extract text and graphics from the document
    /// by operations other than that controlled by <see cref="AccessibilityExtractContent"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetExtractContentPermission(bool value);
    /// <summary>
    /// Indicates whether to allow to extract text and graphics (in support of accessibility to users with disabilities or for other purposes).
    /// </summary>
    ASPOSE_CELLS_API bool GetAccessibilityExtractContent();
    /// <summary>
    /// Indicates whether to allow to extract text and graphics (in support of accessibility to users with disabilities or for other purposes).
    /// </summary>
    ASPOSE_CELLS_API void SetAccessibilityExtractContent(bool value);
    /// <summary>
    /// Indicates whether to allow to assemble the document (insert, rotate, or delete pages and create bookmarks or thumbnail images),
    /// even if <see cref="ModifyDocumentPermission"/> is clear.
    /// </summary>
    ASPOSE_CELLS_API bool GetAssembleDocumentPermission();
    /// <summary>
    /// Indicates whether to allow to assemble the document (insert, rotate, or delete pages and create bookmarks or thumbnail images),
    /// even if <see cref="ModifyDocumentPermission"/> is clear.
    /// </summary>
    ASPOSE_CELLS_API void SetAssembleDocumentPermission(bool value);
    /// <summary>
    /// Indicates whether to allow to print the document to a representation from
    /// which a faithful digital copy of the PDF content could be generated.
    /// </summary>
    /// <remarks>
    /// When it is clear (and <see cref="PrintPermission"/> is set), printing is limited to a low level
    /// representation of the appearance, possibly of degraded quality.
    /// </remarks>
    ASPOSE_CELLS_API bool GetFullQualityPrintPermission();
    /// <summary>
    /// Indicates whether to allow to print the document to a representation from
    /// which a faithful digital copy of the PDF content could be generated.
    /// </summary>
    /// <remarks>
    /// When it is clear (and <see cref="PrintPermission"/> is set), printing is limited to a low level
    /// representation of the appearance, possibly of degraded quality.
    /// </remarks>
    ASPOSE_CELLS_API void SetFullQualityPrintPermission(bool value);
    
};

} } } }

#endif
