/**
 * @file  LayerEditable.cpp
 * @brief Base Layer class for editable volume.
 *
 */
/*
 * Original Author: Ruopeng Wang
 * CVS Revision Info:
 *    $Author: rpwang $
 *    $Date: 2009/06/17 20:41:17 $
 *    $Revision: 1.9 $
 *
 * Copyright (C) 2008-2009,
 * The General Hospital Corporation (Boston, MA).
 * All rights reserved.
 *
 * Distribution, usage and copying of this software is covered under the
 * terms found in the License Agreement file named 'COPYING' found in the
 * FreeSurfer source code root directory, and duplicated here:
 * https://surfer.nmr.mgh.harvard.edu/fswiki/FreeSurferOpenSourceLicense
 *
 * General inquiries: freesurfer@nmr.mgh.harvard.edu
 * Bug reports: analysis-bugs@nmr.mgh.harvard.edu
 *
 */

#include "LayerEditable.h"

LayerEditable::LayerEditable() : Layer(),
    m_nMaxUndoSteps( 100 ),
    m_bModified( false ),
    m_bEditable( true )
{
  m_strTypeNames.push_back( "Editable" );
}

LayerEditable::~LayerEditable()
{}

void LayerEditable::SetModified()
{
  m_bModified = true;
  this->SendBroadcast( "LayerModified", this );
}
