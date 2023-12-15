// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_OOXMLCOMPRESSIONTYPE_H
#define ASPOSE_CELLS_OOXMLCOMPRESSIONTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// The Ooxml compression type
/// </summary>
enum class OoxmlCompressionType {
    /// <summary>
    /// The fastest but least effective compression.
    /// </summary>
    Level1 = 1,
    /// <summary>
    /// A little slower, but better, than level 1.
    /// </summary>
    Level2 = 2,
    /// <summary>
    /// A little slower, but better, than level 2.
    /// </summary>
    Level3 = 3,
    /// <summary>
    /// A little slower, but better, than level 3.
    /// </summary>
    Level4 = 4,
    /// <summary>
    /// A little slower than level 4, but with better compression.
    /// </summary>
    Level5 = 5,
    /// <summary>
    /// A good balance of speed and compression efficiency.
    /// </summary>
    Level6 = 6,
    /// <summary>
    /// Pretty good compression!
    /// </summary>
    Level7 = 7,
    /// <summary>
    /// Better compression than Level7!
    /// </summary>
    Level8 = 8,
    /// <summary>
    /// The "best" compression, where best means greatest reduction in size of the input data stream.
    /// This is also the slowest compression.
    /// </summary>
    Level9 = 9,
};

} }

#endif
