// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DIGITALSIGNATURES_DIGITALSIGNATURECOLLECTION_H
#define ASPOSE_CELLS_DIGITALSIGNATURES_DIGITALSIGNATURECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Enumerator.h"

namespace Aspose { namespace Cells { namespace DigitalSignatures {
    class DigitalSignature;
} } }

namespace Aspose { namespace Cells { namespace DigitalSignatures {

using namespace Aspose::Cells;

class DigitalSignatureCollection_Impl;

/// <summary>
/// Provides a collection of digital signatures attached to a document.
/// </summary>
class DigitalSignatureCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DigitalSignatureCollection_Impl* _impl;
    
public:
    /// <summary>
    /// The constructor of DigitalSignatureCollection.
    /// </summary>
    ASPOSE_CELLS_API DigitalSignatureCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DigitalSignatureCollection(DigitalSignatureCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DigitalSignatureCollection(const DigitalSignatureCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DigitalSignatureCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DigitalSignatureCollection& operator=(const DigitalSignatureCollection& src);
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
    /// Add one signature to DigitalSignatureCollection.
    /// </summary>
    /// <param name="digitalSignature">Digital signature in collection.</param>
    ASPOSE_CELLS_API void Add(const DigitalSignature& digitalSignature);
    /// <summary>
    /// Get the enumerator for DigitalSignatureCollection,
    /// this enumerator allows iteration over the collection
    /// </summary>
    /// <returns>The enumerator to iteration.</returns>
    ASPOSE_CELLS_API Enumerator<DigitalSignature> GetEnumerator();
    
};

} } }

#endif
