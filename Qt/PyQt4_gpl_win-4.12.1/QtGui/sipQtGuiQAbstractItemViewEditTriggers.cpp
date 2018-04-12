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

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qabstractitemview.sip"
#include <qabstractitemview.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQAbstractItemViewEditTriggers.cpp"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qabstractitemview.sip"
#include <qabstractitemview.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQAbstractItemViewEditTriggers.cpp"


extern "C" {static int slot_QAbstractItemView_EditTriggers___bool__(PyObject *);}
static int slot_QAbstractItemView_EditTriggers___bool__(PyObject *sipSelf)
{
     ::QAbstractItemView::EditTriggers *sipCpp = reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemView_EditTriggers));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractItemView::EditTriggers::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQAbstractItemViewEditTriggers.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAbstractItemView::EditTriggers *sipCpp = reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemView_EditTriggers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractItemView::EditTriggers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractItemView_EditTriggers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractItemView::EditTriggers::Int() != a0->operator QAbstractItemView::EditTriggers::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQAbstractItemViewEditTriggers.cpp"
            sipReleaseType(const_cast< ::QAbstractItemView::EditTriggers *>(a0),sipType_QAbstractItemView_EditTriggers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QAbstractItemView_EditTriggers, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAbstractItemView::EditTriggers *sipCpp = reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemView_EditTriggers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractItemView::EditTriggers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractItemView_EditTriggers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractItemView::EditTriggers::Int() == a0->operator QAbstractItemView::EditTriggers::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQAbstractItemViewEditTriggers.cpp"
            sipReleaseType(const_cast< ::QAbstractItemView::EditTriggers *>(a0),sipType_QAbstractItemView_EditTriggers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QAbstractItemView_EditTriggers, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractItemView_EditTriggers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractItemView::EditTriggers *sipCpp = reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemView_EditTriggers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = QAbstractItemView::EditTriggers(*sipCpp ^ a0);
#line 168 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQAbstractItemViewEditTriggers.cpp"

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


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___xor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractItemView::EditTriggers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractItemView_EditTriggers, &a0, &a0State, &a1))
        {
             ::QAbstractItemView::EditTriggers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QAbstractItemView::EditTriggers((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractItemView_EditTriggers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractItemView_EditTriggers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___ior__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractItemView_EditTriggers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractItemView::EditTriggers *sipCpp = reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemView_EditTriggers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = QAbstractItemView::EditTriggers(*sipCpp | a0);
#line 242 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQAbstractItemViewEditTriggers.cpp"

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


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___or__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractItemView::EditTriggers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractItemView_EditTriggers, &a0, &a0State, &a1))
        {
             ::QAbstractItemView::EditTriggers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QAbstractItemView::EditTriggers((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractItemView_EditTriggers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractItemView_EditTriggers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___iand__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractItemView_EditTriggers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractItemView::EditTriggers *sipCpp = reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemView_EditTriggers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QAbstractItemView::EditTriggers::operator&=(a0);
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


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___and__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractItemView::EditTriggers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractItemView_EditTriggers, &a0, &a0State, &a1))
        {
             ::QAbstractItemView::EditTriggers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QAbstractItemView::EditTriggers((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractItemView_EditTriggers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractItemView_EditTriggers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___invert__(PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___invert__(PyObject *sipSelf)
{
     ::QAbstractItemView::EditTriggers *sipCpp = reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemView_EditTriggers));

    if (!sipCpp)
        return 0;


    {
        {
             ::QAbstractItemView::EditTriggers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QAbstractItemView::EditTriggers(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QAbstractItemView_EditTriggers,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractItemView_EditTriggers___int__(PyObject *);}
static PyObject *slot_QAbstractItemView_EditTriggers___int__(PyObject *sipSelf)
{
     ::QAbstractItemView::EditTriggers *sipCpp = reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractItemView_EditTriggers));

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
extern "C" {static void release_QAbstractItemView_EditTriggers(void *, int);}
static void release_QAbstractItemView_EditTriggers(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QAbstractItemView_EditTriggers(void *, SIP_SSIZE_T, void *);}
static void assign_QAbstractItemView_EditTriggers(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QAbstractItemView::EditTriggers *>(sipSrc);
}


extern "C" {static void *array_QAbstractItemView_EditTriggers(SIP_SSIZE_T);}
static void *array_QAbstractItemView_EditTriggers(SIP_SSIZE_T sipNrElem)
{
    return new  ::QAbstractItemView::EditTriggers[sipNrElem];
}


extern "C" {static void *copy_QAbstractItemView_EditTriggers(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractItemView_EditTriggers(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QAbstractItemView::EditTriggers(reinterpret_cast<const  ::QAbstractItemView::EditTriggers *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractItemView_EditTriggers(sipSimpleWrapper *);}
static void dealloc_QAbstractItemView_EditTriggers(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractItemView_EditTriggers(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QAbstractItemView_EditTriggers(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractItemView_EditTriggers(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QAbstractItemView::EditTriggers *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QAbstractItemView::EditTriggers();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QAbstractItemView::EditTriggers(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QAbstractItemView::EditTriggers* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QAbstractItemView_EditTriggers, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QAbstractItemView::EditTriggers(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QAbstractItemView::EditTriggers *>(a0),sipType_QAbstractItemView_EditTriggers,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QAbstractItemView_EditTriggers(PyObject *, void **, int *, PyObject *);}
static int convertTo_QAbstractItemView_EditTriggers(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QAbstractItemView::EditTriggers **sipCppPtr = reinterpret_cast< ::QAbstractItemView::EditTriggers **>(sipCppPtrV);

#line 390 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QAbstractItemView::EditTriggers is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractItemView_EditTrigger)) ||
            sipCanConvertToType(sipPy, sipType_QAbstractItemView_EditTriggers, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractItemView_EditTrigger)))
{
    *sipCppPtr = new QAbstractItemView::EditTriggers(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QAbstractItemView::EditTriggers *>(sipConvertToType(sipPy, sipType_QAbstractItemView_EditTriggers, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQAbstractItemViewEditTriggers.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAbstractItemView_EditTriggers[] = {
    {(void *)slot_QAbstractItemView_EditTriggers___bool__, bool_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___ne__, ne_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___eq__, eq_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___ixor__, ixor_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___xor__, xor_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___ior__, ior_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___or__, or_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___iand__, iand_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___and__, and_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___invert__, invert_slot},
    {(void *)slot_QAbstractItemView_EditTriggers___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QAbstractItemView_EditTriggers, "\1QAbstractItemView.EditTriggers()\n"
"QAbstractItemView.EditTriggers(Union[QAbstractItemView.EditTriggers, QAbstractItemView.EditTrigger])\n"
"QAbstractItemView.EditTriggers(QAbstractItemView.EditTriggers)");


static pyqt4ClassPluginDef plugin_QAbstractItemView_EditTriggers = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QAbstractItemView_EditTriggers = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QAbstractItemView__EditTriggers,
        {0},
        &plugin_QAbstractItemView_EditTriggers
    },
    {
        sipNameNr_EditTriggers,
        {4, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractItemView_EditTriggers,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAbstractItemView_EditTriggers,
    init_type_QAbstractItemView_EditTriggers,
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
    dealloc_QAbstractItemView_EditTriggers,
    assign_QAbstractItemView_EditTriggers,
    array_QAbstractItemView_EditTriggers,
    copy_QAbstractItemView_EditTriggers,
    release_QAbstractItemView_EditTriggers,
    0,
    convertTo_QAbstractItemView_EditTriggers,
    0,
    0,
    0,
    0,
    0
};
