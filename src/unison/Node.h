/*
 * Node.h
 *
 * Copyright (c) 2010 Paul Giblock <pgib/at/users.sourceforge.net>
 *
 * This file is part of Unison - http://unison.sourceforge.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 */


#ifndef NODE_H
#define NODE_H

#include <QSet>
#include <QSharedPointer>
#include "unison/types.h"

namespace Unison
{

/** Interface for all things that participate in the processing graph. */
class Node {
  public:
    virtual ~Node () {};

    virtual const QSet<Node* const> dependencies () const = 0;
    virtual const QSet<Node* const> dependents () const = 0;

    virtual QString name() const = 0;
};

/** A Safe pointer to a Node. */
typedef QSharedPointer<Node> NodePtr;

} // Unison

#endif

// vim: et ts=8 sw=2 sts=2 noai
