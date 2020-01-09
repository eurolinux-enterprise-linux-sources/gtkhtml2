/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
   Copyright (C) 2000 CodeFactory AB
   Copyright (C) 2000 Jonas Borgstr\366m <jonas@codefactory.se>
   Copyright (C) 2000 Anders Carlsson <andersca@codefactory.se>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
*/

#ifndef __HTMLFOCUSITERATOR_H__
#define __HTMLFOCUSITERATOR_H__

#include <libgtkhtml/dom/dom-types.h>

#define HTML_TYPE_FOCUS_ITERATOR             (html_focus_iterator_get_type ())
#define HTML_FOCUS_ITERATOR(object)          (G_TYPE_CHECK_INSTANCE_CAST ((object), HTML_TYPE_FOCUS_ITERATOR, HtmlFocusIterator))
#define HTML_FOCUS_ITERATOR_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), HTML_TYPE_FOCUS_ITERATOR, HtmlFocusIteratorClass))
#define HTML_IS_FOCUS_ITERATOR(object)       (G_TYPE_CHECK_INSTANCE_TYPE ((object),  HTML_TYPE_FOCUS_ITERATOR))
#define HTML_IS_FOCUS_ITERATOR_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), HTML_TYPE_FOCUS_ITERATOR))
#define HTML_FOCUS_ITERATOR_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), HTML_TYPE_FOCUS_ITERATOR, HtmlFocusIteratorClass))

typedef struct _HtmlFocusIterator HtmlFocusIterator;
typedef struct _HtmlFocusIteratorClass HtmlFocusIteratorClass;

struct _HtmlFocusIterator {
	GObject parent_instance;

	DomDocument *document;
	DomNode *current_node;
};

struct _HtmlFocusIteratorClass {
	GObjectClass parent_class;

};

DomElement *html_focus_iterator_next_element (DomDocument *document, DomElement *element);
DomElement *html_focus_iterator_prev_element (DomDocument *document, DomElement *element);

#endif /* __HTMLFOCUSITERATOR_H__ */
