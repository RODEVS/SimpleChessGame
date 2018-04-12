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

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qdesktopservices.sip"
#include <qdesktopservices.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQDesktopServices.cpp"

#line 27 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQDesktopServices.cpp"
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQDesktopServices.cpp"
#line 98 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQDesktopServices.cpp"


PyDoc_STRVAR(doc_QDesktopServices_openUrl, "openUrl(QUrl) -> bool");

extern "C" {static PyObject *meth_QDesktopServices_openUrl(PyObject *, PyObject *);}
static PyObject *meth_QDesktopServices_openUrl(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QUrl* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QUrl, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QDesktopServices::openUrl(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesktopServices, sipName_openUrl, doc_QDesktopServices_openUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QDesktopServices_setUrlHandler, "setUrlHandler(str, QObject, str)\n"
"setUrlHandler(str, Callable[[], None])");

extern "C" {static PyObject *meth_QDesktopServices_setUrlHandler(PyObject *, PyObject *);}
static PyObject *meth_QDesktopServices_setUrlHandler(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QObject* a1;
        const char* a2;
        PyObject *a2Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J8AA", sipType_QString,&a0, &a0State, sipType_QObject, &a1, &a2Keep, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QDesktopServices::setUrlHandler(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            Py_DECREF(a2Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        PyObject * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1F", sipType_QString,&a0, &a0State, &a1))
        {
#line 58 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qdesktopservices.sip"
        // Allow a callable that must be a slot of a QObject, although we never tell
        // the user if it isn't.
        if (PyMethod_Check(a1))
        {
            PyObject *self = PyMethod_GET_SELF(a1);
            PyObject *func = PyMethod_GET_FUNCTION(a1);
        
            int iserr = 0;
            QObject *receiver = reinterpret_cast<QObject *>(sipForceConvertToType(
                    self, sipType_QObject, NULL, SIP_NOT_NONE, NULL, &iserr));
        
            if (!iserr && PyFunction_Check(func))
            {
                PyObject *ascii_obj = ((PyFunctionObject *)func)->func_name;
                const char *ascii = sipString_AsASCIIString(&ascii_obj);
        
                if (ascii)
                {
                    QDesktopServices::setUrlHandler(*a0, receiver, ascii);
        
                    Py_DECREF(ascii_obj);
                }
            }
        }
#line 134 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQDesktopServices.cpp"
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesktopServices, sipName_setUrlHandler, doc_QDesktopServices_setUrlHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QDesktopServices_unsetUrlHandler, "unsetUrlHandler(str)");

extern "C" {static PyObject *meth_QDesktopServices_unsetUrlHandler(PyObject *, PyObject *);}
static PyObject *meth_QDesktopServices_unsetUrlHandler(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QDesktopServices::unsetUrlHandler(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesktopServices, sipName_unsetUrlHandler, doc_QDesktopServices_unsetUrlHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QDesktopServices_storageLocation, "storageLocation(QDesktopServices.StandardLocation) -> str");

extern "C" {static PyObject *meth_QDesktopServices_storageLocation(PyObject *, PyObject *);}
static PyObject *meth_QDesktopServices_storageLocation(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDesktopServices::StandardLocation a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QDesktopServices_StandardLocation, &a0))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString( ::QDesktopServices::storageLocation(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesktopServices, sipName_storageLocation, doc_QDesktopServices_storageLocation);

    return NULL;
}


PyDoc_STRVAR(doc_QDesktopServices_displayName, "displayName(QDesktopServices.StandardLocation) -> str");

extern "C" {static PyObject *meth_QDesktopServices_displayName(PyObject *, PyObject *);}
static PyObject *meth_QDesktopServices_displayName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDesktopServices::StandardLocation a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QDesktopServices_StandardLocation, &a0))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString( ::QDesktopServices::displayName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesktopServices, sipName_displayName, doc_QDesktopServices_displayName);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesktopServices(void *, int);}
static void release_QDesktopServices(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QDesktopServices *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDesktopServices(void *, SIP_SSIZE_T, void *);}
static void assign_QDesktopServices(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDesktopServices *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDesktopServices *>(sipSrc);
}


extern "C" {static void *array_QDesktopServices(SIP_SSIZE_T);}
static void *array_QDesktopServices(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDesktopServices[sipNrElem];
}


extern "C" {static void *copy_QDesktopServices(const void *, SIP_SSIZE_T);}
static void *copy_QDesktopServices(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDesktopServices(reinterpret_cast<const  ::QDesktopServices *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDesktopServices(sipSimpleWrapper *);}
static void dealloc_QDesktopServices(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDesktopServices(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDesktopServices(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDesktopServices(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDesktopServices *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDesktopServices();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QDesktopServices* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesktopServices, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDesktopServices(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDesktopServices[] = {
    {SIP_MLNAME_CAST(sipName_displayName), meth_QDesktopServices_displayName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesktopServices_displayName)},
    {SIP_MLNAME_CAST(sipName_openUrl), meth_QDesktopServices_openUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesktopServices_openUrl)},
    {SIP_MLNAME_CAST(sipName_setUrlHandler), meth_QDesktopServices_setUrlHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesktopServices_setUrlHandler)},
    {SIP_MLNAME_CAST(sipName_storageLocation), meth_QDesktopServices_storageLocation, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesktopServices_storageLocation)},
    {SIP_MLNAME_CAST(sipName_unsetUrlHandler), meth_QDesktopServices_unsetUrlHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesktopServices_unsetUrlHandler)}
};

static sipEnumMemberDef enummembers_QDesktopServices[] = {
    {sipName_ApplicationsLocation, static_cast<int>( ::QDesktopServices::ApplicationsLocation), 78},
    {sipName_CacheLocation, static_cast<int>( ::QDesktopServices::CacheLocation), 78},
    {sipName_DataLocation, static_cast<int>( ::QDesktopServices::DataLocation), 78},
    {sipName_DesktopLocation, static_cast<int>( ::QDesktopServices::DesktopLocation), 78},
    {sipName_DocumentsLocation, static_cast<int>( ::QDesktopServices::DocumentsLocation), 78},
    {sipName_FontsLocation, static_cast<int>( ::QDesktopServices::FontsLocation), 78},
    {sipName_HomeLocation, static_cast<int>( ::QDesktopServices::HomeLocation), 78},
    {sipName_MoviesLocation, static_cast<int>( ::QDesktopServices::MoviesLocation), 78},
    {sipName_MusicLocation, static_cast<int>( ::QDesktopServices::MusicLocation), 78},
    {sipName_PicturesLocation, static_cast<int>( ::QDesktopServices::PicturesLocation), 78},
    {sipName_TempLocation, static_cast<int>( ::QDesktopServices::TempLocation), 78},
};

PyDoc_STRVAR(doc_QDesktopServices, "\1QDesktopServices()\n"
"QDesktopServices(QDesktopServices)");


static pyqt4ClassPluginDef plugin_QDesktopServices = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QDesktopServices = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDesktopServices,
        {0},
        &plugin_QDesktopServices
    },
    {
        sipNameNr_QDesktopServices,
        {0, 0, 1},
        5, methods_QDesktopServices,
        11, enummembers_QDesktopServices,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesktopServices,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDesktopServices,
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
    dealloc_QDesktopServices,
    assign_QDesktopServices,
    array_QDesktopServices,
    copy_QDesktopServices,
    release_QDesktopServices,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
