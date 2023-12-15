// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SIGNATURELINE_H
#define ASPOSE_CELLS_DRAWING_SIGNATURELINE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class SignatureLine_Impl;

/// <summary>
/// Represent the signature line.
/// </summary>
class SignatureLine {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SignatureLine_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API SignatureLine();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SignatureLine(SignatureLine_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SignatureLine(const SignatureLine& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SignatureLine();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SignatureLine& operator=(const SignatureLine& src);
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
    /// Gets and sets the signer.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSigner();
    /// <summary>
    /// Gets and sets the signer.
    /// </summary>
    ASPOSE_CELLS_API void SetSigner(const U16String& value);
    /// <summary>
    /// Gets and sets the signer.
    /// </summary>
    ASPOSE_CELLS_API void SetSigner(const char16_t* value);
    /// <summary>
    /// Gets and sets the title of singer.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTitle();
    /// <summary>
    /// Gets and sets the title of singer.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const U16String& value);
    /// <summary>
    /// Gets and sets the title of singer.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const char16_t* value);
    /// <summary>
    /// Gets and sets the email of singer.
    /// </summary>
    ASPOSE_CELLS_API U16String GetEmail();
    /// <summary>
    /// Gets and sets the email of singer.
    /// </summary>
    ASPOSE_CELLS_API void SetEmail(const U16String& value);
    /// <summary>
    /// Gets and sets the email of singer.
    /// </summary>
    ASPOSE_CELLS_API void SetEmail(const char16_t* value);
    /// <summary>
    /// Indicates whether it is a signature line.
    /// </summary>
    ASPOSE_CELLS_API bool IsLine();
    /// <summary>
    /// Indicates whether it is a signature line.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLine(bool value);
    /// <summary>
    /// Indicates whether comments could be attached.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowComments();
    /// <summary>
    /// Indicates whether comments could be attached.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowComments(bool value);
    /// <summary>
    /// Indicates whether show signed date.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowSignedDate();
    /// <summary>
    /// Indicates whether show signed date.
    /// </summary>
    ASPOSE_CELLS_API void SetShowSignedDate(bool value);
    /// <summary>
    /// Gets and sets the text shown to user at signing time.
    /// </summary>
    ASPOSE_CELLS_API U16String GetInstructions();
    /// <summary>
    /// Gets and sets the text shown to user at signing time.
    /// </summary>
    ASPOSE_CELLS_API void SetInstructions(const U16String& value);
    /// <summary>
    /// Gets and sets the text shown to user at signing time.
    /// </summary>
    ASPOSE_CELLS_API void SetInstructions(const char16_t* value);
    
};

} } }

#endif
