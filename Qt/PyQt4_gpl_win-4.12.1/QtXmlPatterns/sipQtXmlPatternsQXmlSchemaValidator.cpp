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

#include "sipAPIQtXmlPatterns.h"

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtXmlPatterns/qxmlschemavalidator.sip"
#include <qxmlschemavalidator.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtXmlPatterns/qxmlschema.sip"
#include <qxmlschema.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"
#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtNetwork/qnetworkaccessmanager.sip"
#include <qnetworkaccessmanager.h>
#line 36 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"
#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtXmlPatterns/qabstracturiresolver.sip"
#include <qabstracturiresolver.h>
#line 39 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"
#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtXmlPatterns/qabstractmessagehandler.sip"
#include <qabstractmessagehandler.h>
#line 42 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"
#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtXmlPatterns/qxmlnamepool.sip"
#include <qxmlnamepool.h>
#line 45 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"
#line 98 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 48 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 51 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"
#line 32 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 54 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"


PyDoc_STRVAR(doc_QXmlSchemaValidator_setSchema, "setSchema(self, QXmlSchema)");

extern "C" {static PyObject *meth_QXmlSchemaValidator_setSchema(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_setSchema(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlSchema* a0;
         ::QXmlSchemaValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp, sipType_QXmlSchema, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSchema(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_setSchema, doc_QXmlSchemaValidator_setSchema);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchemaValidator_validate, "validate(self, QUrl) -> bool\n"
"validate(self, QIODevice, documentUri: QUrl = QUrl()) -> bool\n"
"validate(self, Union[QByteArray, bytes, bytearray], documentUri: QUrl = QUrl()) -> bool");

extern "C" {static PyObject *meth_QXmlSchemaValidator_validate(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_validate(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QUrl* a0;
        const  ::QXmlSchemaValidator *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp, sipType_QUrl, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->validate(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::QIODevice* a0;
        const  ::QUrl& a1def = QUrl();
        const  ::QUrl* a1 = &a1def;
        const  ::QXmlSchemaValidator *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_documentUri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|J9", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp, sipType_QIODevice, &a0, sipType_QUrl, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->validate(a0,*a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        const  ::QUrl& a1def = QUrl();
        const  ::QUrl* a1 = &a1def;
        const  ::QXmlSchemaValidator *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_documentUri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J9", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp, sipType_QByteArray, &a0, &a0State, sipType_QUrl, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->validate(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_validate, doc_QXmlSchemaValidator_validate);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchemaValidator_namePool, "namePool(self) -> QXmlNamePool");

extern "C" {static PyObject *meth_QXmlSchemaValidator_namePool(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_namePool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlSchemaValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp))
        {
             ::QXmlNamePool*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QXmlNamePool(sipCpp->namePool());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNamePool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_namePool, doc_QXmlSchemaValidator_namePool);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchemaValidator_schema, "schema(self) -> QXmlSchema");

extern "C" {static PyObject *meth_QXmlSchemaValidator_schema(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_schema(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlSchemaValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp))
        {
             ::QXmlSchema*sipRes = 0;

#line 42 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtXmlPatterns/qxmlschemavalidator.sip"
        // For reasons we don't quite understand QXmlSchema's copy ctor has to be
        // private as far as sip is concerned - otherwise we get compiler errors.
        // However that means that sip generates the wrong code here, because it
        // doesn't realise it can take a copy of the result.
        
        Py_BEGIN_ALLOW_THREADS
        sipRes = new QXmlSchema(sipCpp->schema());
        Py_END_ALLOW_THREADS
#line 224 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtXmlPatterns/sipQtXmlPatternsQXmlSchemaValidator.cpp"

            return sipConvertFromNewType(sipRes,sipType_QXmlSchema,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_schema, doc_QXmlSchemaValidator_schema);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchemaValidator_setMessageHandler, "setMessageHandler(self, QAbstractMessageHandler)");

extern "C" {static PyObject *meth_QXmlSchemaValidator_setMessageHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_setMessageHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractMessageHandler* a0;
        PyObject *a0Keep;
         ::QXmlSchemaValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp, &a0Keep, sipType_QAbstractMessageHandler, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMessageHandler(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -7, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_setMessageHandler, doc_QXmlSchemaValidator_setMessageHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchemaValidator_messageHandler, "messageHandler(self) -> QAbstractMessageHandler");

extern "C" {static PyObject *meth_QXmlSchemaValidator_messageHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_messageHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlSchemaValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp))
        {
             ::QAbstractMessageHandler*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->messageHandler();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAbstractMessageHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_messageHandler, doc_QXmlSchemaValidator_messageHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchemaValidator_setUriResolver, "setUriResolver(self, QAbstractUriResolver)");

extern "C" {static PyObject *meth_QXmlSchemaValidator_setUriResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_setUriResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractUriResolver* a0;
        PyObject *a0Keep;
         ::QXmlSchemaValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp, &a0Keep, sipType_QAbstractUriResolver, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUriResolver(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -8, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_setUriResolver, doc_QXmlSchemaValidator_setUriResolver);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchemaValidator_uriResolver, "uriResolver(self) -> QAbstractUriResolver");

extern "C" {static PyObject *meth_QXmlSchemaValidator_uriResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_uriResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlSchemaValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp))
        {
            const  ::QAbstractUriResolver*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->uriResolver();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast< ::QAbstractUriResolver *>(sipRes),sipType_QAbstractUriResolver,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_uriResolver, doc_QXmlSchemaValidator_uriResolver);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchemaValidator_setNetworkAccessManager, "setNetworkAccessManager(self, QNetworkAccessManager)");

extern "C" {static PyObject *meth_QXmlSchemaValidator_setNetworkAccessManager(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_setNetworkAccessManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QNetworkAccessManager* a0;
        PyObject *a0Keep;
         ::QXmlSchemaValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp, &a0Keep, sipType_QNetworkAccessManager, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNetworkAccessManager(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -9, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_setNetworkAccessManager, doc_QXmlSchemaValidator_setNetworkAccessManager);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSchemaValidator_networkAccessManager, "networkAccessManager(self) -> QNetworkAccessManager");

extern "C" {static PyObject *meth_QXmlSchemaValidator_networkAccessManager(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchemaValidator_networkAccessManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlSchemaValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchemaValidator, &sipCpp))
        {
             ::QNetworkAccessManager*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->networkAccessManager();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QNetworkAccessManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchemaValidator, sipName_networkAccessManager, doc_QXmlSchemaValidator_networkAccessManager);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlSchemaValidator(void *, int);}
static void release_QXmlSchemaValidator(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QXmlSchemaValidator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlSchemaValidator(sipSimpleWrapper *);}
static void dealloc_QXmlSchemaValidator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlSchemaValidator(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QXmlSchemaValidator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlSchemaValidator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QXmlSchemaValidator *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QXmlSchemaValidator();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QXmlSchema* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlSchema, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QXmlSchemaValidator(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlSchemaValidator[] = {
    {SIP_MLNAME_CAST(sipName_messageHandler), meth_QXmlSchemaValidator_messageHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_messageHandler)},
    {SIP_MLNAME_CAST(sipName_namePool), meth_QXmlSchemaValidator_namePool, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_namePool)},
    {SIP_MLNAME_CAST(sipName_networkAccessManager), meth_QXmlSchemaValidator_networkAccessManager, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_networkAccessManager)},
    {SIP_MLNAME_CAST(sipName_schema), meth_QXmlSchemaValidator_schema, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_schema)},
    {SIP_MLNAME_CAST(sipName_setMessageHandler), meth_QXmlSchemaValidator_setMessageHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_setMessageHandler)},
    {SIP_MLNAME_CAST(sipName_setNetworkAccessManager), meth_QXmlSchemaValidator_setNetworkAccessManager, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_setNetworkAccessManager)},
    {SIP_MLNAME_CAST(sipName_setSchema), meth_QXmlSchemaValidator_setSchema, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_setSchema)},
    {SIP_MLNAME_CAST(sipName_setUriResolver), meth_QXmlSchemaValidator_setUriResolver, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_setUriResolver)},
    {SIP_MLNAME_CAST(sipName_uriResolver), meth_QXmlSchemaValidator_uriResolver, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_uriResolver)},
    {SIP_MLNAME_CAST(sipName_validate), (PyCFunction)meth_QXmlSchemaValidator_validate, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlSchemaValidator_validate)}
};

PyDoc_STRVAR(doc_QXmlSchemaValidator, "\1QXmlSchemaValidator()\n"
"QXmlSchemaValidator(QXmlSchema)");


static pyqt4ClassPluginDef plugin_QXmlSchemaValidator = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXmlPatterns_QXmlSchemaValidator = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlSchemaValidator,
        {0},
        &plugin_QXmlSchemaValidator
    },
    {
        sipNameNr_QXmlSchemaValidator,
        {0, 0, 1},
        10, methods_QXmlSchemaValidator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlSchemaValidator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlSchemaValidator,
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
    dealloc_QXmlSchemaValidator,
    0,
    0,
    0,
    release_QXmlSchemaValidator,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
