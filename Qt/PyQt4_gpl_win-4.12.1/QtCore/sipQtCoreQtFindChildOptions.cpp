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

#include "sipAPIQtCore.h"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQtFindChildOptions.cpp"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQtFindChildOptions.cpp"


extern "C" {static int slot_Qt_FindChildOptions___bool__(PyObject *);}
static int slot_Qt_FindChildOptions___bool__(PyObject *sipSelf)
{
     ::Qt::FindChildOptions *sipCpp = reinterpret_cast< ::Qt::FindChildOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_FindChildOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::FindChildOptions::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQtFindChildOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_FindChildOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::FindChildOptions *sipCpp = reinterpret_cast< ::Qt::FindChildOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_FindChildOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::FindChildOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_FindChildOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::FindChildOptions::Int() != a0->operator Qt::FindChildOptions::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQtFindChildOptions.cpp"
            sipReleaseType(const_cast< ::Qt::FindChildOptions *>(a0),sipType_Qt_FindChildOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_FindChildOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_FindChildOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::FindChildOptions *sipCpp = reinterpret_cast< ::Qt::FindChildOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_FindChildOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::FindChildOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_FindChildOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::FindChildOptions::Int() == a0->operator Qt::FindChildOptions::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQtFindChildOptions.cpp"
            sipReleaseType(const_cast< ::Qt::FindChildOptions *>(a0),sipType_Qt_FindChildOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_FindChildOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_FindChildOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_FindChildOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::FindChildOptions *sipCpp = reinterpret_cast< ::Qt::FindChildOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_FindChildOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::FindChildOptions(*sipCpp ^ a0);
#line 168 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQtFindChildOptions.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_FindChildOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::FindChildOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_FindChildOptions, &a0, &a0State, &a1))
        {
             ::Qt::FindChildOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::FindChildOptions((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_FindChildOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_FindChildOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_FindChildOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_FindChildOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::FindChildOptions *sipCpp = reinterpret_cast< ::Qt::FindChildOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_FindChildOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::FindChildOptions(*sipCpp | a0);
#line 242 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQtFindChildOptions.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_FindChildOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::FindChildOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_FindChildOptions, &a0, &a0State, &a1))
        {
             ::Qt::FindChildOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::FindChildOptions((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_FindChildOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_FindChildOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_FindChildOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_FindChildOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::FindChildOptions *sipCpp = reinterpret_cast< ::Qt::FindChildOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_FindChildOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::Qt::FindChildOptions::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_FindChildOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::FindChildOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_FindChildOptions, &a0, &a0State, &a1))
        {
             ::Qt::FindChildOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::FindChildOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_FindChildOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_FindChildOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___invert__(PyObject *);}
static PyObject *slot_Qt_FindChildOptions___invert__(PyObject *sipSelf)
{
     ::Qt::FindChildOptions *sipCpp = reinterpret_cast< ::Qt::FindChildOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_FindChildOptions));

    if (!sipCpp)
        return 0;


    {
        {
             ::Qt::FindChildOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::FindChildOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_FindChildOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_FindChildOptions___int__(PyObject *);}
static PyObject *slot_Qt_FindChildOptions___int__(PyObject *sipSelf)
{
     ::Qt::FindChildOptions *sipCpp = reinterpret_cast< ::Qt::FindChildOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_FindChildOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_FindChildOptions(void *, int);}
static void release_Qt_FindChildOptions(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::Qt::FindChildOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_FindChildOptions(void *, SIP_SSIZE_T, void *);}
static void assign_Qt_FindChildOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::FindChildOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::FindChildOptions *>(sipSrc);
}


extern "C" {static void *array_Qt_FindChildOptions(SIP_SSIZE_T);}
static void *array_Qt_FindChildOptions(SIP_SSIZE_T sipNrElem)
{
    return new  ::Qt::FindChildOptions[sipNrElem];
}


extern "C" {static void *copy_Qt_FindChildOptions(const void *, SIP_SSIZE_T);}
static void *copy_Qt_FindChildOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::FindChildOptions(reinterpret_cast<const  ::Qt::FindChildOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_FindChildOptions(sipSimpleWrapper *);}
static void dealloc_Qt_FindChildOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_FindChildOptions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_FindChildOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_FindChildOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::FindChildOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::FindChildOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::FindChildOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::Qt::FindChildOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_FindChildOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::FindChildOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::Qt::FindChildOptions *>(a0),sipType_Qt_FindChildOptions,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_FindChildOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_FindChildOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::FindChildOptions **sipCppPtr = reinterpret_cast< ::Qt::FindChildOptions **>(sipCppPtrV);

#line 390 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::FindChildOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_FindChildOption)) ||
            sipCanConvertToType(sipPy, sipType_Qt_FindChildOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_FindChildOption)))
{
    *sipCppPtr = new Qt::FindChildOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::FindChildOptions *>(sipConvertToType(sipPy, sipType_Qt_FindChildOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQtFindChildOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_FindChildOptions[] = {
    {(void *)slot_Qt_FindChildOptions___bool__, bool_slot},
    {(void *)slot_Qt_FindChildOptions___ne__, ne_slot},
    {(void *)slot_Qt_FindChildOptions___eq__, eq_slot},
    {(void *)slot_Qt_FindChildOptions___ixor__, ixor_slot},
    {(void *)slot_Qt_FindChildOptions___xor__, xor_slot},
    {(void *)slot_Qt_FindChildOptions___ior__, ior_slot},
    {(void *)slot_Qt_FindChildOptions___or__, or_slot},
    {(void *)slot_Qt_FindChildOptions___iand__, iand_slot},
    {(void *)slot_Qt_FindChildOptions___and__, and_slot},
    {(void *)slot_Qt_FindChildOptions___invert__, invert_slot},
    {(void *)slot_Qt_FindChildOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_FindChildOptions, "\1Qt.FindChildOptions()\n"
"Qt.FindChildOptions(Union[Qt.FindChildOptions, Qt.FindChildOption])\n"
"Qt.FindChildOptions(Qt.FindChildOptions)");


static pyqt4ClassPluginDef plugin_Qt_FindChildOptions = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtCore_Qt_FindChildOptions = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__FindChildOptions,
        {0},
        &plugin_Qt_FindChildOptions
    },
    {
        sipNameNr_FindChildOptions,
        {272, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_FindChildOptions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_FindChildOptions,
    init_type_Qt_FindChildOptions,
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
    dealloc_Qt_FindChildOptions,
    assign_Qt_FindChildOptions,
    array_Qt_FindChildOptions,
    copy_Qt_FindChildOptions,
    release_Qt_FindChildOptions,
    0,
    convertTo_Qt_FindChildOptions,
    0,
    0,
    0,
    0,
    0
};
