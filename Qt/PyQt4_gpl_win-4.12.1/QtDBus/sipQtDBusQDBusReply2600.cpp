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

#include "sipAPIQtDBus.h"

#line 123 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtDBus/qpydbusreply.sip"
#include <qdbusreply.h>
#include <qpydbusreply.h>
#line 30 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtDBus/sipQtDBusQDBusReply2600.cpp"



extern "C" {static void assign_QDBusReply_2600(void *, SIP_SSIZE_T, void *);}
static void assign_QDBusReply_2600(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDBusReply<bool> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDBusReply<bool> *>(sipSrc);
}


extern "C" {static void *array_QDBusReply_2600(SIP_SSIZE_T);}
static void *array_QDBusReply_2600(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDBusReply<bool>[sipNrElem];
}


extern "C" {static void *copy_QDBusReply_2600(const void *, SIP_SSIZE_T);}
static void *copy_QDBusReply_2600(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDBusReply<bool>(reinterpret_cast<const  ::QDBusReply<bool> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QDBusReply_2600(void *, int);}
static void release_QDBusReply_2600(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QDBusReply<bool> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QDBusReply_2600(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDBusReply_2600(PyObject *,void **,int *,PyObject *)
{
#line 155 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtDBus/qpydbusreply.sip"
    // We never create a QDBusReply from Python.
    return 0;
#line 72 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtDBus/sipQtDBusQDBusReply2600.cpp"
}


extern "C" {static PyObject *convertFrom_QDBusReply_2600(void *, PyObject *);}
static PyObject *convertFrom_QDBusReply_2600(void *sipCppV, PyObject *sipTransferObj)
{
    ::QDBusReply<bool> *sipCpp = reinterpret_cast< ::QDBusReply<bool> *>(sipCppV);

#line 128 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtDBus/qpydbusreply.sip"
    PyObject *value_obj;

    if (sipCpp->isValid())
    {
        if ((value_obj = PyBool_FromLong(sipCpp->value())) == NULL)
            return NULL;
    }
    else
    {
        value_obj = 0;
    }

    QPyDBusReply *reply = new QPyDBusReply(value_obj,
            sipCpp->isValid(), sipCpp->error());

    PyObject *reply_obj = sipConvertFromNewType(reply, sipType_QPyDBusReply, sipTransferObj);

    if (reply_obj == NULL)
    {
        delete reply;
        return NULL;
    }

    return reply_obj;
#line 106 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtDBus/sipQtDBusQDBusReply2600.cpp"
}


sipMappedTypeDef sipTypeDef_QtDBus_QDBusReply_2600 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1736,     /* QDBusReply<bool> */
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
    assign_QDBusReply_2600,
    array_QDBusReply_2600,
    copy_QDBusReply_2600,
    release_QDBusReply_2600,
    convertTo_QDBusReply_2600,
    convertFrom_QDBusReply_2600
};
