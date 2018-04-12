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

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextItemRenderFlags.cpp"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextItemRenderFlags.cpp"


extern "C" {static int slot_QTextItem_RenderFlags___bool__(PyObject *);}
static int slot_QTextItem_RenderFlags___bool__(PyObject *sipSelf)
{
     ::QTextItem::RenderFlags *sipCpp = reinterpret_cast< ::QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextItem::RenderFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextItemRenderFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextItem::RenderFlags *sipCpp = reinterpret_cast< ::QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QTextItem::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextItem::RenderFlags::Int() != a0->operator QTextItem::RenderFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(const_cast< ::QTextItem::RenderFlags *>(a0),sipType_QTextItem_RenderFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QTextItem_RenderFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextItem::RenderFlags *sipCpp = reinterpret_cast< ::QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QTextItem::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextItem::RenderFlags::Int() == a0->operator QTextItem::RenderFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(const_cast< ::QTextItem::RenderFlags *>(a0),sipType_QTextItem_RenderFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QTextItem_RenderFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextItem::RenderFlags *sipCpp = reinterpret_cast< ::QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = QTextItem::RenderFlags(*sipCpp ^ a0);
#line 168 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextItemRenderFlags.cpp"

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


extern "C" {static PyObject *slot_QTextItem_RenderFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTextItem::RenderFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextItem_RenderFlags, &a0, &a0State, &a1))
        {
             ::QTextItem::RenderFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTextItem::RenderFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextItem::RenderFlags *sipCpp = reinterpret_cast< ::QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = QTextItem::RenderFlags(*sipCpp | a0);
#line 242 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextItemRenderFlags.cpp"

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


extern "C" {static PyObject *slot_QTextItem_RenderFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTextItem::RenderFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextItem_RenderFlags, &a0, &a0State, &a1))
        {
             ::QTextItem::RenderFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTextItem::RenderFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextItem::RenderFlags *sipCpp = reinterpret_cast< ::QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QTextItem::RenderFlags::operator&=(a0);
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


extern "C" {static PyObject *slot_QTextItem_RenderFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTextItem::RenderFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextItem_RenderFlags, &a0, &a0State, &a1))
        {
             ::QTextItem::RenderFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTextItem::RenderFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___invert__(PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___invert__(PyObject *sipSelf)
{
     ::QTextItem::RenderFlags *sipCpp = reinterpret_cast< ::QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QTextItem::RenderFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTextItem::RenderFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___int__(PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___int__(PyObject *sipSelf)
{
     ::QTextItem::RenderFlags *sipCpp = reinterpret_cast< ::QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

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
extern "C" {static void release_QTextItem_RenderFlags(void *, int);}
static void release_QTextItem_RenderFlags(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QTextItem::RenderFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextItem_RenderFlags(void *, SIP_SSIZE_T, void *);}
static void assign_QTextItem_RenderFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTextItem::RenderFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTextItem::RenderFlags *>(sipSrc);
}


extern "C" {static void *array_QTextItem_RenderFlags(SIP_SSIZE_T);}
static void *array_QTextItem_RenderFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QTextItem::RenderFlags[sipNrElem];
}


extern "C" {static void *copy_QTextItem_RenderFlags(const void *, SIP_SSIZE_T);}
static void *copy_QTextItem_RenderFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QTextItem::RenderFlags(reinterpret_cast<const  ::QTextItem::RenderFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextItem_RenderFlags(sipSimpleWrapper *);}
static void dealloc_QTextItem_RenderFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextItem_RenderFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextItem_RenderFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextItem_RenderFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextItem::RenderFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextItem::RenderFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextItem::RenderFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QTextItem::RenderFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextItem::RenderFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QTextItem::RenderFlags *>(a0),sipType_QTextItem_RenderFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextItem_RenderFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextItem_RenderFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QTextItem::RenderFlags **sipCppPtr = reinterpret_cast< ::QTextItem::RenderFlags **>(sipCppPtrV);

#line 390 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextItem::RenderFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextItem_RenderFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlag)))
{
    *sipCppPtr = new QTextItem::RenderFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextItem::RenderFlags *>(sipConvertToType(sipPy, sipType_QTextItem_RenderFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQTextItemRenderFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextItem_RenderFlags[] = {
    {(void *)slot_QTextItem_RenderFlags___bool__, bool_slot},
    {(void *)slot_QTextItem_RenderFlags___ne__, ne_slot},
    {(void *)slot_QTextItem_RenderFlags___eq__, eq_slot},
    {(void *)slot_QTextItem_RenderFlags___ixor__, ixor_slot},
    {(void *)slot_QTextItem_RenderFlags___xor__, xor_slot},
    {(void *)slot_QTextItem_RenderFlags___ior__, ior_slot},
    {(void *)slot_QTextItem_RenderFlags___or__, or_slot},
    {(void *)slot_QTextItem_RenderFlags___iand__, iand_slot},
    {(void *)slot_QTextItem_RenderFlags___and__, and_slot},
    {(void *)slot_QTextItem_RenderFlags___invert__, invert_slot},
    {(void *)slot_QTextItem_RenderFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextItem_RenderFlags, "\1QTextItem.RenderFlags()\n"
"QTextItem.RenderFlags(Union[QTextItem.RenderFlags, QTextItem.RenderFlag])\n"
"QTextItem.RenderFlags(QTextItem.RenderFlags)");


static pyqt4ClassPluginDef plugin_QTextItem_RenderFlags = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QTextItem_RenderFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextItem__RenderFlags,
        {0},
        &plugin_QTextItem_RenderFlags
    },
    {
        sipNameNr_RenderFlags,
        {664, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextItem_RenderFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextItem_RenderFlags,
    init_type_QTextItem_RenderFlags,
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
    dealloc_QTextItem_RenderFlags,
    assign_QTextItem_RenderFlags,
    array_QTextItem_RenderFlags,
    copy_QTextItem_RenderFlags,
    release_QTextItem_RenderFlags,
    0,
    convertTo_QTextItem_RenderFlags,
    0,
    0,
    0,
    0,
    0
};
