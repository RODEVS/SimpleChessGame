/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt4.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 548 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQMoveEvent.cpp"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQMoveEvent.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQMoveEvent.cpp"


class sipQMoveEvent : public  ::QMoveEvent
{
public:
    sipQMoveEvent(const  ::QPoint&,const  ::QPoint&);
    sipQMoveEvent(const  ::QMoveEvent&);
    ~sipQMoveEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMoveEvent(const sipQMoveEvent &);
    sipQMoveEvent &operator = (const sipQMoveEvent &);
};

sipQMoveEvent::sipQMoveEvent(const  ::QPoint& a0,const  ::QPoint& a1):  ::QMoveEvent(a0,a1), sipPySelf(0)
{
}

sipQMoveEvent::sipQMoveEvent(const  ::QMoveEvent& a0):  ::QMoveEvent(a0), sipPySelf(0)
{
}

sipQMoveEvent::~sipQMoveEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QMoveEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QMoveEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QMoveEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMoveEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMoveEvent, sipName_pos, doc_QMoveEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QMoveEvent_oldPos, "oldPos(self) -> QPoint");

extern "C" {static PyObject *meth_QMoveEvent_oldPos(PyObject *, PyObject *);}
static PyObject *meth_QMoveEvent_oldPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMoveEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPoint(sipCpp->oldPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMoveEvent, sipName_oldPos, doc_QMoveEvent_oldPos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QMoveEvent(void *, const sipTypeDef *);}
static void *cast_QMoveEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QMoveEvent *sipCpp = reinterpret_cast< ::QMoveEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMoveEvent(void *, int);}
static void release_QMoveEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQMoveEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QMoveEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QMoveEvent(sipSimpleWrapper *);}
static void dealloc_QMoveEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQMoveEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMoveEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QMoveEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMoveEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMoveEvent *sipCpp = 0;

    {
        const  ::QPoint* a0;
        const  ::QPoint* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_QPoint, &a0, sipType_QPoint, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMoveEvent(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QMoveEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMoveEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMoveEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QMoveEvent[] = {{13, 0, 1}};


static PyMethodDef methods_QMoveEvent[] = {
    {SIP_MLNAME_CAST(sipName_oldPos), meth_QMoveEvent_oldPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMoveEvent_oldPos)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QMoveEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMoveEvent_pos)}
};

PyDoc_STRVAR(doc_QMoveEvent, "\1QMoveEvent(QPoint, QPoint)\n"
"QMoveEvent(QMoveEvent)");


static pyqt4ClassPluginDef plugin_QMoveEvent = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QMoveEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QMoveEvent,
        {0},
        &plugin_QMoveEvent
    },
    {
        sipNameNr_QMoveEvent,
        {0, 0, 1},
        2, methods_QMoveEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMoveEvent,
    -1,
    -1,
    supers_QMoveEvent,
    0,
    init_type_QMoveEvent,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QMoveEvent,
    0,
    0,
    0,
    release_QMoveEvent,
    cast_QMoveEvent,
    0,
    0,
    0,
    0,
    0,
    0
};
