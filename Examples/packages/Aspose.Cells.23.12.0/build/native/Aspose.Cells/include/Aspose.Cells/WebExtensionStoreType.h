// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONSTORETYPE_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONSTORETYPE_H

namespace Aspose { namespace Cells { namespace WebExtensions {

/// <summary>
/// Represents the store type of web extension.
/// </summary>
enum class WebExtensionStoreType {
    /// <summary>
    /// Specifies that the store type is Office.com.
    /// </summary>
    OMEX,
    /// <summary>
    /// Specifies that the store type is SharePoint corporate catalog.
    /// </summary>
    SPCatalog,
    /// <summary>
    /// Specifies that the store type is a SharePoint web application.
    /// </summary>
    SPApp,
    /// <summary>
    /// Specifies that the store type is an Exchange server.
    /// </summary>
    Exchange,
    /// <summary>
    /// Specifies that the store type is a file system share.
    /// </summary>
    FileSystem,
    /// <summary>
    /// Specifies that the store type is the system registry.
    /// </summary>
    Registry,
    /// <summary>
    /// Specifies that the store type is Centralized Deployment via Exchange.
    /// </summary>
    ExCatalog,
};

} } }

#endif
