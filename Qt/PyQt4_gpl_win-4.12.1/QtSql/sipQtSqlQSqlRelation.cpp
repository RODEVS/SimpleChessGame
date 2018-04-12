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

#include "sipAPIQtSql.h"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtSql/qsqlrelationaltablemodel.sip"
#include <qsqlrelationaltablemodel.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtSql/sipQtSqlQSqlRelation.cpp"

#line 27 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtSql/sipQtSqlQSqlRelation.cpp"


PyDoc_STRVAR(doc_QSqlRelation_tableName, "tableName(self) -> str");

extern "C" {static PyObject *meth_QSqlRelation_tableName(PyObject *, PyObject *);}
static PyObject *meth_QSqlRelation_tableName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlRelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRelation, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->tableName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRelation, sipName_tableName, doc_QSqlRelation_tableName);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRelation_indexColumn, "indexColumn(self) -> str");

extern "C" {static PyObject *meth_QSqlRelation_indexColumn(PyObject *, PyObject *);}
static PyObject *meth_QSqlRelation_indexColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlRelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRelation, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->indexColumn());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRelation, sipName_indexColumn, doc_QSqlRelation_indexColumn);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRelation_displayColumn, "displayColumn(self) -> str");

extern "C" {static PyObject *meth_QSqlRelation_displayColumn(PyObject *, PyObject *);}
static PyObject *meth_QSqlRelation_displayColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlRelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRelation, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->displayColumn());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRelation, sipName_displayColumn, doc_QSqlRelation_displayColumn);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRelation_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QSqlRelation_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSqlRelation_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlRelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRelation, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRelation, sipName_isValid, doc_QSqlRelation_isValid);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSqlRelation(void *, int);}
static void release_QSqlRelation(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QSqlRelation *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSqlRelation(void *, SIP_SSIZE_T, void *);}
static void assign_QSqlRelation(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSqlRelation *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSqlRelation *>(sipSrc);
}


extern "C" {static void *array_QSqlRelation(SIP_SSIZE_T);}
static void *array_QSqlRelation(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSqlRelation[sipNrElem];
}


extern "C" {static void *copy_QSqlRelation(const void *, SIP_SSIZE_T);}
static void *copy_QSqlRelation(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSqlRelation(reinterpret_cast<const  ::QSqlRelation *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSqlRelation(sipSimpleWrapper *);}
static void dealloc_QSqlRelation(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSqlRelation(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSqlRelation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSqlRelation(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSqlRelation *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSqlRelation();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSqlRelation(*a0,*a1,*a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            return sipCpp;
        }
    }

    {
        const  ::QSqlRelation* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSqlRelation, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSqlRelation(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSqlRelation[] = {
    {SIP_MLNAME_CAST(sipName_displayColumn), meth_QSqlRelation_displayColumn, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRelation_displayColumn)},
    {SIP_MLNAME_CAST(sipName_indexColumn), meth_QSqlRelation_indexColumn, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRelation_indexColumn)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSqlRelation_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRelation_isValid)},
    {SIP_MLNAME_CAST(sipName_tableName), meth_QSqlRelation_tableName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRelation_tableName)}
};

PyDoc_STRVAR(doc_QSqlRelation, "\1QSqlRelation()\n"
"QSqlRelation(str, str, str)\n"
"QSqlRelation(QSqlRelation)");


static pyqt4ClassPluginDef plugin_QSqlRelation = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSql_QSqlRelation = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSqlRelation,
        {0},
        &plugin_QSqlRelation
    },
    {
        sipNameNr_QSqlRelation,
        {0, 0, 1},
        4, methods_QSqlRelation,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSqlRelation,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSqlRelation,
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
    dealloc_QSqlRelation,
    assign_QSqlRelation,
    array_QSqlRelation,
    copy_QSqlRelation,
    release_QSqlRelation,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
