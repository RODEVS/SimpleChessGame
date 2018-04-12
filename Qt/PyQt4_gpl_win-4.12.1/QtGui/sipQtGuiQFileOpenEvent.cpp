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

#line 867 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileOpenEvent.cpp"

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qfile.sip"
#include <qfile.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 36 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 98 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 27 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileOpenEvent.cpp"


PyDoc_STRVAR(doc_QFileOpenEvent_file, "file(self) -> str");

extern "C" {static PyObject *meth_QFileOpenEvent_file(PyObject *, PyObject *);}
static PyObject *meth_QFileOpenEvent_file(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFileOpenEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileOpenEvent, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->file());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileOpenEvent, sipName_file, doc_QFileOpenEvent_file);

    return NULL;
}


PyDoc_STRVAR(doc_QFileOpenEvent_url, "url(self) -> QUrl");

extern "C" {static PyObject *meth_QFileOpenEvent_url(PyObject *, PyObject *);}
static PyObject *meth_QFileOpenEvent_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFileOpenEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileOpenEvent, &sipCpp))
        {
             ::QUrl*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QUrl(sipCpp->url());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileOpenEvent, sipName_url, doc_QFileOpenEvent_url);

    return NULL;
}


PyDoc_STRVAR(doc_QFileOpenEvent_openFile, "openFile(self, QFile, QIODevice.OpenMode) -> bool");

extern "C" {static PyObject *meth_QFileOpenEvent_openFile(PyObject *, PyObject *);}
static PyObject *meth_QFileOpenEvent_openFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFile* a0;
         ::QIODevice::OpenMode* a1;
        int a1State = 0;
        const  ::QFileOpenEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QFileOpenEvent, &sipCpp, sipType_QFile, &a0, sipType_QIODevice_OpenMode, &a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->openFile(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QIODevice_OpenMode,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileOpenEvent, sipName_openFile, doc_QFileOpenEvent_openFile);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QFileOpenEvent(void *, const sipTypeDef *);}
static void *cast_QFileOpenEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QFileOpenEvent *sipCpp = reinterpret_cast< ::QFileOpenEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileOpenEvent(void *, int);}
static void release_QFileOpenEvent(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QFileOpenEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFileOpenEvent(sipSimpleWrapper *);}
static void dealloc_QFileOpenEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFileOpenEvent(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFileOpenEvent[] = {{13, 0, 1}};


static PyMethodDef methods_QFileOpenEvent[] = {
    {SIP_MLNAME_CAST(sipName_file), meth_QFileOpenEvent_file, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileOpenEvent_file)},
    {SIP_MLNAME_CAST(sipName_openFile), meth_QFileOpenEvent_openFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileOpenEvent_openFile)},
    {SIP_MLNAME_CAST(sipName_url), meth_QFileOpenEvent_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileOpenEvent_url)}
};


static pyqt4ClassPluginDef plugin_QFileOpenEvent = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QFileOpenEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QFileOpenEvent,
        {0},
        &plugin_QFileOpenEvent
    },
    {
        sipNameNr_QFileOpenEvent,
        {0, 0, 1},
        3, methods_QFileOpenEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QFileOpenEvent,
    0,
    0,
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
    dealloc_QFileOpenEvent,
    0,
    0,
    0,
    release_QFileOpenEvent,
    cast_QFileOpenEvent,
    0,
    0,
    0,
    0,
    0,
    0
};
