// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DIGITALSIGNATURES_DIGITALSIGNATURE_H
#define ASPOSE_CELLS_DIGITALSIGNATURES_DIGITALSIGNATURE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/XAdESType.h"

namespace Aspose { namespace Cells { namespace DigitalSignatures {

using namespace Aspose::Cells;

class DigitalSignature_Impl;

/// <summary>
/// Signature in file.
/// </summary>
class ASPOSE_CELLS_API2 DigitalSignature {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DigitalSignature_Impl* _impl;
    
public:
    /// <summary>
    /// Constructor of digitalSignature. Uses Bouncy Castle implementation.
    /// </summary>
    /// <param name="rawData">A byte array containing data from an X.509 certificate.</param>
    /// <param name="password">The password required to access the X.509 certificate data.</param>
    /// <param name="comments">The purpose to signature.</param>
    /// <param name="signTime">The utc time when the document was signed.</param>
    ASPOSE_CELLS_API DigitalSignature(const Vector<uint8_t>& rawData, const U16String& password, const U16String& comments, const Date& signTime);
    /// <summary>
    /// Constructor of digitalSignature. Uses Bouncy Castle implementation.
    /// </summary>
    /// <param name="rawData">A byte array containing data from an X.509 certificate.</param>
    /// <param name="password">The password required to access the X.509 certificate data.</param>
    /// <param name="comments">The purpose to signature.</param>
    /// <param name="signTime">The utc time when the document was signed.</param>
    ASPOSE_CELLS_API DigitalSignature(const Vector<uint8_t>& rawData, const char16_t* password, const char16_t* comments, const Date& signTime);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DigitalSignature(DigitalSignature_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DigitalSignature(const DigitalSignature& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DigitalSignature();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DigitalSignature& operator=(const DigitalSignature& src);
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
    /// The purpose to signature.
    /// </summary>
    ASPOSE_CELLS_API U16String GetComments();
    /// <summary>
    /// The purpose to signature.
    /// </summary>
    ASPOSE_CELLS_API void SetComments(const U16String& value);
    /// <summary>
    /// The purpose to signature.
    /// </summary>
    ASPOSE_CELLS_API void SetComments(const char16_t* value);
    /// <summary>
    /// The time when the document was signed.
    /// </summary>
    ASPOSE_CELLS_API Date GetSignTime();
    /// <summary>
    /// The time when the document was signed.
    /// </summary>
    ASPOSE_CELLS_API void SetSignTime(const Date& value);
    /// <summary>
    /// Specifies the text of actual signature in the digital signature.
    /// Default value is Empty.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Specifies the text of actual signature in the digital signature.
    /// Default value is Empty.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Specifies the text of actual signature in the digital signature.
    /// Default value is Empty.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// Specifies an image for the digital signature.
    /// Default value is null.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetImage();
    /// <summary>
    /// Specifies an image for the digital signature.
    /// Default value is null.
    /// </summary>
    ASPOSE_CELLS_API void SetImage(const Vector<uint8_t>& value);
    /// <summary>
    /// If this digital signature is valid and the document has not been tampered with,
    /// this value will be true.
    /// </summary>
    ASPOSE_CELLS_API bool IsValid();
    /// <summary>
    /// XAdES type.
    /// Default value is None(XAdES is off).
    /// </summary>
    ASPOSE_CELLS_API XAdESType GetXAdESType();
    /// <summary>
    /// XAdES type.
    /// Default value is None(XAdES is off).
    /// </summary>
    ASPOSE_CELLS_API void SetXAdESType(XAdESType value);
    
};

} } }

#endif
