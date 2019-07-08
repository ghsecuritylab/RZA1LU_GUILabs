/*
* Copyright (C) TES Electronic Solutions GmbH,
* All Rights Reserved.
* Contact: info@guiliani.de
*
* This file is part of the Guiliani HMI framework
* for the development of graphical user interfaces on embedded systems.
*/

#ifndef GUI_LAYOUTER_RESOURCE__H_
#define GUI_LAYOUTER_RESOURCE__H_
#include <limits.h>

/// @file GUILayouterResource.h @ref page_helpermacros
// 
// DO NOT EDIT THIS FILE!!! Add your own IDS within UserXXXResource.h files!
// DO NOT EDIT THIS FILE!!! Add your own IDS within UserXXXResource.h files!
// DO NOT EDIT THIS FILE!!! Add your own IDS within UserXXXResource.h files!
//

// -----------------------------------------------------------------------------------------
///  LayouterIDs
#define LAYOUTER_TABLE            \
ENTRY(LAYOUTER_PERCENTAGE, CGUILayouterPercentage) \
ENTRY(LAYOUTER_ALIGN_TO_PARENT, CGUILayouterAlignToParent) \
ENTRY(LAYOUTER_LIST, CGUILayouterList) \
ENTRY(LAYOUTER_GRID, CGUILayouterGrid) \
ENTRY(LAYOUTER_REPOSITION, CGUILayouterReposition) \
ENTRY(LAYOUTER_ANCHOR, CGUILayouterAnchor) 

#ifndef GUILIANI_GUILIANILIB
    #include "UserLayouterResource.h"
#endif

/// List of layouter resource ids.
enum LayouterClassID_t
{
 LAYOUTER_START_TAG=-7,

 #define ENTRY_ENUM(a) a, ///< \ref page_helpermacros
#define ENTRY(layouter_id, layouter_classname) layouter_id, ///< \ref page_helpermacros
    LAYOUTER_TABLE

    DUMMY_LAYOUTER=0, // must be a constant 0
#ifndef GUILIANI_GUILIANILIB
    USER_LAYOUTER_TABLE
#endif
#undef ENTRY
#undef ENTRY_ENUM

 GUILIANI_INTERNAL_LAYOUTER = INT_MAX // Do not touch this. Required for ensuring consistent enum type size across libraries.
};

#endif