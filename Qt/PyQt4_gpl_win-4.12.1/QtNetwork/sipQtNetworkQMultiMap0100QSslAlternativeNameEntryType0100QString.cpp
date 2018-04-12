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

#include "sipAPIQtNetwork.h"

#line 136 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtNetwork/qsslcertificate.sip"
#include <QtCore/qmap.h>
#include <QtCore/qstring.h>
#include <QtNetwork/qssl.h>
#line 31 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtNetwork/sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp"

#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtNetwork/qssl.sip"
#include <qssl.h>
#line 35 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtNetwork/sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp"
#line 27 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtNetwork/sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp"


extern "C" {static void assign_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(void *, SIP_SSIZE_T, void *);}
static void assign_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QMultiMap< ::QSsl::AlternativeNameEntryType, ::QString> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QMultiMap< ::QSsl::AlternativeNameEntryType, ::QString> *>(sipSrc);
}


extern "C" {static void *array_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(SIP_SSIZE_T);}
static void *array_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(SIP_SSIZE_T sipNrElem)
{
    return new  ::QMultiMap< ::QSsl::AlternativeNameEntryType, ::QString>[sipNrElem];
}


extern "C" {static void *copy_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(const void *, SIP_SSIZE_T);}
static void *copy_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QMultiMap< ::QSsl::AlternativeNameEntryType, ::QString>(reinterpret_cast<const  ::QMultiMap< ::QSsl::AlternativeNameEntryType, ::QString> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(void *, int);}
static void release_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QMultiMap< ::QSsl::AlternativeNameEntryType, ::QString> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(PyObject *sipPy,void **,int *sipIsErr,PyObject *)
{
#line 264 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtNetwork/qsslcertificate.sip"
    if (sipIsErr == NULL)
    {
        // We don't support passing the type as an argument as it isn't
        // currently needed (and is unlikely to be in the future).
        PyErr_SetString(PyExc_NotImplementedError, "converting to QMultiMap<QSsl::AlternativeNameEntryType, QString> is unsupported");

        return 0;
    }

    // Keep the compiler quiet.
    sipPy = NULL;
    return 0;
#line 89 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtNetwork/sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp"
}


extern "C" {static PyObject *convertFrom_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(void *, PyObject *);}
static PyObject *convertFrom_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString(void *sipCppV, PyObject *sipTransferObj)
{
    ::QMultiMap< ::QSsl::AlternativeNameEntryType, ::QString> *sipCpp = reinterpret_cast< ::QMultiMap< ::QSsl::AlternativeNameEntryType, ::QString> *>(sipCppV);

#line 142 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtNetwork/qsslcertificate.sip"
    // Get the enum objects that are the dictionary keys.
    static PyObject *email_entry = NULL;
    static PyObject *dns_entry = NULL;

    if (email_entry == NULL)
    {
        email_entry = PyObject_GetAttrString((PyObject *)sipTypeAsPyTypeObject(sipType_QSsl),
#if PY_VERSION_HEX >= 0x02050000
                "EmailEntry");
#else
                const_cast<char *>("EmailEntry"));
#endif

        if (email_entry == NULL)
            return NULL;
    }

    if (dns_entry == NULL)
    {
        dns_entry = PyObject_GetAttrString((PyObject *)sipTypeAsPyTypeObject(sipType_QSsl),
#if PY_VERSION_HEX >= 0x02050000
                "DnsEntry");
#else
                const_cast<char *>("DnsEntry"));
#endif

        if (dns_entry == NULL)
            return NULL;
    }

    // Create the dictionary.
    PyObject *d = PyDict_New();

    if (d == NULL)
        return NULL;

    QList<QString> vl;

    // Handle the Qssl::EmailEntry key.
    vl = sipCpp->values(QSsl::EmailEntry);

    if (!vl.isEmpty())
    {
        PyObject *vlobj = PyList_New(vl.count());

        if (vlobj == NULL)
        {
            Py_DECREF(d);
            return NULL;
        }

        int rc = PyDict_SetItem(d, email_entry, vlobj);

        Py_DECREF(email_entry);
        Py_DECREF(vlobj);

        if (rc < 0)
        {
            Py_DECREF(d);
            return NULL;
        }

        for (int i = 0; i < vl.count(); ++i)
        {
            QString *s = new QString(vl.at(i));
            PyObject *vobj = sipConvertFromNewType(s, sipType_QString, sipTransferObj);

            if (vobj == NULL)
            {
                delete s;
                Py_DECREF(d);
                return NULL;
            }

            PyList_SET_ITEM(vlobj, i, vobj);
        }
    }

    // Handle the Qssl::DnsEntry key.
    vl = sipCpp->values(QSsl::DnsEntry);

    if (!vl.isEmpty())
    {
        PyObject *vlobj = PyList_New(vl.count());

        if (vlobj == NULL)
        {
            Py_DECREF(d);
            return NULL;
        }

        int rc = PyDict_SetItem(d, dns_entry, vlobj);

        Py_DECREF(dns_entry);
        Py_DECREF(vlobj);

        if (rc < 0)
        {
            Py_DECREF(d);
            return NULL;
        }

        for (int i = 0; i < vl.count(); ++i)
        {
            QString *s = new QString(vl.at(i));
            PyObject *vobj = sipConvertFromNewType(s, sipType_QString, sipTransferObj);

            if (vobj == NULL)
            {
                delete s;
                Py_DECREF(d);
                return NULL;
            }

            PyList_SET_ITEM(vlobj, i, vobj);
        }
    }

    return d;
#line 218 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtNetwork/sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_0,     /* QMultiMap<QSsl::AlternativeNameEntryType,QString> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString,
    array_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString,
    copy_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString,
    release_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString,
    convertTo_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString,
    convertFrom_QMultiMap_0100QSsl_AlternativeNameEntryType_0100QString
};
