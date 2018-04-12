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

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"


extern "C" {static int slot_QTextEdit_AutoFormatting___bool__(PyObject *);}
static int slot_QTextEdit_AutoFormatting___bool__(PyObject *sipSelf)
{
     ::QTextEdit::AutoFormatting *sipCpp = reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextEdit::AutoFormatting::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextEdit::AutoFormatting *sipCpp = reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QTextEdit::AutoFormatting* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextEdit::AutoFormatting::Int() != a0->operator QTextEdit::AutoFormatting::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"
            sipReleaseType(const_cast< ::QTextEdit::AutoFormatting *>(a0),sipType_QTextEdit_AutoFormatting,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QTextEdit_AutoFormatting, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextEdit::AutoFormatting *sipCpp = reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QTextEdit::AutoFormatting* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextEdit::AutoFormatting::Int() == a0->operator QTextEdit::AutoFormatting::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"
            sipReleaseType(const_cast< ::QTextEdit::AutoFormatting *>(a0),sipType_QTextEdit_AutoFormatting,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QTextEdit_AutoFormatting, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormatting)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextEdit::AutoFormatting *sipCpp = reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = QTextEdit::AutoFormatting(*sipCpp ^ a0);
#line 168 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"

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


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTextEdit::AutoFormatting* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextEdit_AutoFormatting, &a0, &a0State, &a1))
        {
             ::QTextEdit::AutoFormatting*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTextEdit::AutoFormatting((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormatting)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextEdit::AutoFormatting *sipCpp = reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = QTextEdit::AutoFormatting(*sipCpp | a0);
#line 242 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"

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


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTextEdit::AutoFormatting* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextEdit_AutoFormatting, &a0, &a0State, &a1))
        {
             ::QTextEdit::AutoFormatting*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTextEdit::AutoFormatting((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormatting)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextEdit::AutoFormatting *sipCpp = reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QTextEdit::AutoFormatting::operator&=(a0);
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


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTextEdit::AutoFormatting* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextEdit_AutoFormatting, &a0, &a0State, &a1))
        {
             ::QTextEdit::AutoFormatting*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTextEdit::AutoFormatting((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___invert__(PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___invert__(PyObject *sipSelf)
{
     ::QTextEdit::AutoFormatting *sipCpp = reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;


    {
        {
             ::QTextEdit::AutoFormatting*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTextEdit::AutoFormatting(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___int__(PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___int__(PyObject *sipSelf)
{
     ::QTextEdit::AutoFormatting *sipCpp = reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

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
extern "C" {static void release_QTextEdit_AutoFormatting(void *, int);}
static void release_QTextEdit_AutoFormatting(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextEdit_AutoFormatting(void *, SIP_SSIZE_T, void *);}
static void assign_QTextEdit_AutoFormatting(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTextEdit::AutoFormatting *>(sipSrc);
}


extern "C" {static void *array_QTextEdit_AutoFormatting(SIP_SSIZE_T);}
static void *array_QTextEdit_AutoFormatting(SIP_SSIZE_T sipNrElem)
{
    return new  ::QTextEdit::AutoFormatting[sipNrElem];
}


extern "C" {static void *copy_QTextEdit_AutoFormatting(const void *, SIP_SSIZE_T);}
static void *copy_QTextEdit_AutoFormatting(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QTextEdit::AutoFormatting(reinterpret_cast<const  ::QTextEdit::AutoFormatting *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextEdit_AutoFormatting(sipSimpleWrapper *);}
static void dealloc_QTextEdit_AutoFormatting(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextEdit_AutoFormatting(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextEdit_AutoFormatting(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextEdit_AutoFormatting(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextEdit::AutoFormatting *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextEdit::AutoFormatting();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextEdit::AutoFormatting(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QTextEdit::AutoFormatting* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextEdit::AutoFormatting(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTextEdit::AutoFormatting *>(a0),sipType_QTextEdit_AutoFormatting,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextEdit_AutoFormatting(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextEdit_AutoFormatting(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QTextEdit::AutoFormatting **sipCppPtr = reinterpret_cast< ::QTextEdit::AutoFormatting **>(sipCppPtrV);

#line 390 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextEdit::AutoFormatting is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormattingFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextEdit_AutoFormatting, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormattingFlag)))
{
    *sipCppPtr = new QTextEdit::AutoFormatting(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextEdit::AutoFormatting *>(sipConvertToType(sipPy, sipType_QTextEdit_AutoFormatting, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextEdit_AutoFormatting[] = {
    {(void *)slot_QTextEdit_AutoFormatting___bool__, bool_slot},
    {(void *)slot_QTextEdit_AutoFormatting___ne__, ne_slot},
    {(void *)slot_QTextEdit_AutoFormatting___eq__, eq_slot},
    {(void *)slot_QTextEdit_AutoFormatting___ixor__, ixor_slot},
    {(void *)slot_QTextEdit_AutoFormatting___xor__, xor_slot},
    {(void *)slot_QTextEdit_AutoFormatting___ior__, ior_slot},
    {(void *)slot_QTextEdit_AutoFormatting___or__, or_slot},
    {(void *)slot_QTextEdit_AutoFormatting___iand__, iand_slot},
    {(void *)slot_QTextEdit_AutoFormatting___and__, and_slot},
    {(void *)slot_QTextEdit_AutoFormatting___invert__, invert_slot},
    {(void *)slot_QTextEdit_AutoFormatting___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextEdit_AutoFormatting, "\1QTextEdit.AutoFormatting()\n"
"QTextEdit.AutoFormatting(Union[QTextEdit.AutoFormatting, QTextEdit.AutoFormattingFlag])\n"
"QTextEdit.AutoFormatting(QTextEdit.AutoFormatting)");


static pyqt4ClassPluginDef plugin_QTextEdit_AutoFormatting = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QTextEdit_AutoFormatting = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextEdit__AutoFormatting,
        {0},
        &plugin_QTextEdit_AutoFormatting
    },
    {
        sipNameNr_AutoFormatting,
        {645, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextEdit_AutoFormatting,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextEdit_AutoFormatting,
    init_type_QTextEdit_AutoFormatting,
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
    dealloc_QTextEdit_AutoFormatting,
    assign_QTextEdit_AutoFormatting,
    array_QTextEdit_AutoFormatting,
    copy_QTextEdit_AutoFormatting,
    release_QTextEdit_AutoFormatting,
    0,
    convertTo_QTextEdit_AutoFormatting,
    0,
    0,
    0,
    0,
    0
};
