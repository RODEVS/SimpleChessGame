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

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtNetwork/sipQtNetworkQList0100QNetworkInterface.cpp"

#line 64 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtNetwork/qnetworkinterface.sip"
#include <qnetworkinterface.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtNetwork/sipQtNetworkQList0100QNetworkInterface.cpp"


extern "C" {static void assign_QList_0100QNetworkInterface(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0100QNetworkInterface(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QNetworkInterface> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QNetworkInterface> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QNetworkInterface(SIP_SSIZE_T);}
static void *array_QList_0100QNetworkInterface(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QNetworkInterface>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QNetworkInterface(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QNetworkInterface(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QNetworkInterface>(reinterpret_cast<const QList< ::QNetworkInterface> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QNetworkInterface(void *, int);}
static void release_QList_0100QNetworkInterface(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList< ::QNetworkInterface> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QNetworkInterface(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QNetworkInterface(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QNetworkInterface> **sipCppPtr = reinterpret_cast<QList< ::QNetworkInterface> **>(sipCppPtrV);

#line 59 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QNetworkInterface, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QNetworkInterface> *ql = new QList<QNetworkInterface>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QNetworkInterface *t = reinterpret_cast<QNetworkInterface *>(sipConvertToType(itm, sipType_QNetworkInterface, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QNetworkInterface, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QNetworkInterface, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 123 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtNetwork/sipQtNetworkQList0100QNetworkInterface.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QNetworkInterface(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QNetworkInterface(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QNetworkInterface> *sipCpp = reinterpret_cast<QList< ::QNetworkInterface> *>(sipCppV);

#line 32 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QNetworkInterface *t = new QNetworkInterface(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QNetworkInterface, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 157 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtNetwork/sipQtNetworkQList0100QNetworkInterface.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QList_0100QNetworkInterface = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_3194,     /* QList<QNetworkInterface> */
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
    assign_QList_0100QNetworkInterface,
    array_QList_0100QNetworkInterface,
    copy_QList_0100QNetworkInterface,
    release_QList_0100QNetworkInterface,
    convertTo_QList_0100QNetworkInterface,
    convertFrom_QList_0100QNetworkInterface
};