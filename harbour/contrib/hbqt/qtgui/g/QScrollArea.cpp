/*
 * $Id$
 */

/* -------------------------------------------------------------------- */
/* WARNING: Automatically generated source file. DO NOT EDIT!           */
/*          Instead, edit corresponding .qth file,                      */
/*          or the generator tool itself, and run regenarate.           */
/* -------------------------------------------------------------------- */

/*
 * Harbour Project source code:
 * QT wrapper main header
 *
 * Copyright 2009-2010 Pritpal Bedi <pritpal@vouchcac.com>
 *
 * Copyright 2009 Marcos Antonio Gambeta <marcosgambeta at gmail dot com>
 * www - http://harbour-project.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA (or visit the web site http://www.gnu.org/).
 *
 * As a special exception, the Harbour Project gives permission for
 * additional uses of the text contained in its release of Harbour.
 *
 * The exception is that, if you link the Harbour libraries with other
 * files to produce an executable, this does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * Your use of that executable is in no way restricted on account of
 * linking the Harbour library code into it.
 *
 * This exception does not however invalidate any other reasons why
 * the executable file might be covered by the GNU General Public License.
 *
 * This exception applies only to the code released by the Harbour
 * Project under the name Harbour.  If you copy code from other
 * Harbour Project or Free Software Foundation releases into a copy of
 * Harbour, as the General Public License permits, the exception does
 * not apply to the code that you add in this way.  To avoid misleading
 * anyone as to the status of such modified files, you must delete
 * this exception notice from them.
 *
 * If you write modifications of your own for Harbour, it is your choice
 * whether to permit this exception to apply to your modifications.
 * If you do not wish that, delete this exception notice.
 *
 */
/*----------------------------------------------------------------------*/

#include "hbqt.h"
#include "hbqtgui_garbage.h"
#include "hbqtcore_garbage.h"

/*----------------------------------------------------------------------*/
#if QT_VERSION >= 0x040500
/*----------------------------------------------------------------------*/

#include <QtCore/QPointer>

#include <QtGui/QScrollArea>


/*
 * QScrollArea ( QWidget * parent = 0 )
 * ~QScrollArea ()
 */

typedef struct
{
   QPointer< QScrollArea > ph;
   bool bNew;
   QT_G_FUNC_PTR func;
   int type;
} QGC_POINTER_QScrollArea;

QT_G_FUNC( hbqt_gcRelease_QScrollArea )
{
   QScrollArea  * ph = NULL ;
   QGC_POINTER_QScrollArea * p = ( QGC_POINTER_QScrollArea * ) Cargo;

   if( p && p->bNew && p->ph )
   {
      ph = p->ph;
      if( ph )
      {
         const QMetaObject * m = ( ph )->metaObject();
         if( ( QString ) m->className() != ( QString ) "QObject" )
         {
            HB_TRACE( HB_TR_DEBUG, ( "ph=%p %p YES_rel_QScrollArea   /.\\   ", (void*) ph, (void*) p->ph ) );
            delete ( p->ph );
            HB_TRACE( HB_TR_DEBUG, ( "ph=%p %p YES_rel_QScrollArea   \\./   ", (void*) ph, (void*) p->ph ) );
            p->ph = NULL;
         }
         else
         {
            HB_TRACE( HB_TR_DEBUG, ( "ph=%p NO__rel_QScrollArea          ", ph ) );
            p->ph = NULL;
         }
      }
      else
      {
         HB_TRACE( HB_TR_DEBUG, ( "ph=%p DEL_rel_QScrollArea    :     Object already deleted!", ph ) );
         p->ph = NULL;
      }
   }
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "ph=%p PTR_rel_QScrollArea    :    Object not created with new=true", ph ) );
      p->ph = NULL;
   }
}

void * hbqt_gcAllocate_QScrollArea( void * pObj, bool bNew )
{
   QGC_POINTER_QScrollArea * p = ( QGC_POINTER_QScrollArea * ) hb_gcAllocate( sizeof( QGC_POINTER_QScrollArea ), hbqt_gcFuncs() );

   new( & p->ph ) QPointer< QScrollArea >( ( QScrollArea * ) pObj );
   p->bNew = bNew;
   p->func = hbqt_gcRelease_QScrollArea;
   p->type = HBQT_TYPE_QScrollArea;

   if( bNew )
   {
      HB_TRACE( HB_TR_DEBUG, ( "ph=%p    _new_QScrollArea  under p->pq", pObj ) );
   }
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "ph=%p NOT_new_QScrollArea", pObj ) );
   }
   return p;
}

HB_FUNC( QT_QSCROLLAREA )
{
   QScrollArea * pObj = NULL;

   pObj =  new QScrollArea( hbqt_par_QWidget( 1 ) ) ;

   hb_retptrGC( hbqt_gcAllocate_QScrollArea( ( void * ) pObj, true ) );
}

/*
 * Qt::Alignment alignment () const
 */
HB_FUNC( QT_QSCROLLAREA_ALIGNMENT )
{
   QScrollArea * p = hbqt_par_QScrollArea( 1 );
   if( p )
      hb_retni( ( Qt::Alignment ) ( p )->alignment() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QSCROLLAREA_ALIGNMENT FP=hb_retni( ( Qt::Alignment ) ( p )->alignment() ); p is NULL" ) );
   }
}

/*
 * void ensureVisible ( int x, int y, int xmargin = 50, int ymargin = 50 )
 */
HB_FUNC( QT_QSCROLLAREA_ENSUREVISIBLE )
{
   QScrollArea * p = hbqt_par_QScrollArea( 1 );
   if( p )
      ( p )->ensureVisible( hb_parni( 2 ), hb_parni( 3 ), hb_parnidef( 4, 50 ), hb_parnidef( 5, 50 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QSCROLLAREA_ENSUREVISIBLE FP=( p )->ensureVisible( hb_parni( 2 ), hb_parni( 3 ), hb_parnidef( 4, 50 ), hb_parnidef( 5, 50 ) ); p is NULL" ) );
   }
}

/*
 * void ensureWidgetVisible ( QWidget * childWidget, int xmargin = 50, int ymargin = 50 )
 */
HB_FUNC( QT_QSCROLLAREA_ENSUREWIDGETVISIBLE )
{
   QScrollArea * p = hbqt_par_QScrollArea( 1 );
   if( p )
      ( p )->ensureWidgetVisible( hbqt_par_QWidget( 2 ), hb_parnidef( 3, 50 ), hb_parnidef( 4, 50 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QSCROLLAREA_ENSUREWIDGETVISIBLE FP=( p )->ensureWidgetVisible( hbqt_par_QWidget( 2 ), hb_parnidef( 3, 50 ), hb_parnidef( 4, 50 ) ); p is NULL" ) );
   }
}

/*
 * void setAlignment ( Qt::Alignment )
 */
HB_FUNC( QT_QSCROLLAREA_SETALIGNMENT )
{
   QScrollArea * p = hbqt_par_QScrollArea( 1 );
   if( p )
      ( p )->setAlignment( ( Qt::Alignment ) hb_parni( 2 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QSCROLLAREA_SETALIGNMENT FP=( p )->setAlignment( ( Qt::Alignment ) hb_parni( 2 ) ); p is NULL" ) );
   }
}

/*
 * void setWidget ( QWidget * widget )
 */
HB_FUNC( QT_QSCROLLAREA_SETWIDGET )
{
   QScrollArea * p = hbqt_par_QScrollArea( 1 );
   if( p )
      ( p )->setWidget( hbqt_par_QWidget( 2 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QSCROLLAREA_SETWIDGET FP=( p )->setWidget( hbqt_par_QWidget( 2 ) ); p is NULL" ) );
   }
}

/*
 * void setWidgetResizable ( bool resizable )
 */
HB_FUNC( QT_QSCROLLAREA_SETWIDGETRESIZABLE )
{
   QScrollArea * p = hbqt_par_QScrollArea( 1 );
   if( p )
      ( p )->setWidgetResizable( hb_parl( 2 ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QSCROLLAREA_SETWIDGETRESIZABLE FP=( p )->setWidgetResizable( hb_parl( 2 ) ); p is NULL" ) );
   }
}

/*
 * QWidget * takeWidget ()
 */
HB_FUNC( QT_QSCROLLAREA_TAKEWIDGET )
{
   QScrollArea * p = hbqt_par_QScrollArea( 1 );
   if( p )
      hb_retptrGC( hbqt_gcAllocate_QWidget( ( p )->takeWidget(), false ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QSCROLLAREA_TAKEWIDGET FP=hb_retptrGC( hbqt_gcAllocate_QWidget( ( p )->takeWidget(), false ) ); p is NULL" ) );
   }
}

/*
 * QWidget * widget () const
 */
HB_FUNC( QT_QSCROLLAREA_WIDGET )
{
   QScrollArea * p = hbqt_par_QScrollArea( 1 );
   if( p )
      hb_retptrGC( hbqt_gcAllocate_QWidget( ( p )->widget(), false ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QSCROLLAREA_WIDGET FP=hb_retptrGC( hbqt_gcAllocate_QWidget( ( p )->widget(), false ) ); p is NULL" ) );
   }
}

/*
 * bool widgetResizable () const
 */
HB_FUNC( QT_QSCROLLAREA_WIDGETRESIZABLE )
{
   QScrollArea * p = hbqt_par_QScrollArea( 1 );
   if( p )
      hb_retl( ( p )->widgetResizable() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QSCROLLAREA_WIDGETRESIZABLE FP=hb_retl( ( p )->widgetResizable() ); p is NULL" ) );
   }
}


/*----------------------------------------------------------------------*/
#endif             /* #if QT_VERSION >= 0x040500 */
/*----------------------------------------------------------------------*/