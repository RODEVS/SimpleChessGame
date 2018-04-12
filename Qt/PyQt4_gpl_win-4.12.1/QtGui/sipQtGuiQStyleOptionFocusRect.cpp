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

#line 361 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQStyleOptionFocusRect.cpp"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQStyleOptionFocusRect.cpp"
#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 36 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQStyleOptionFocusRect.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionFocusRect(void *, const sipTypeDef *);}
static void *cast_QStyleOptionFocusRect(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionFocusRect *sipCpp = reinterpret_cast< ::QStyleOptionFocusRect *>(sipCppV);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFocusRect(void *, int);}
static void release_QStyleOptionFocusRect(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QStyleOptionFocusRect *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionFocusRect(void *, SIP_SSIZE_T, void *);}
static void assign_QStyleOptionFocusRect(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionFocusRect *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionFocusRect *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFocusRect(SIP_SSIZE_T);}
static void *array_QStyleOptionFocusRect(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleOptionFocusRect[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFocusRect(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFocusRect(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleOptionFocusRect(reinterpret_cast<const  ::QStyleOptionFocusRect *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFocusRect(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFocusRect(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionFocusRect(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionFocusRect(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionFocusRect(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionFocusRect *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStyleOptionFocusRect();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionFocusRect* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFocusRect, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStyleOptionFocusRect(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionFocusRect[] = {{499, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionFocusRect[] = {
    {sipName_Type, static_cast<int>( ::QStyleOptionFocusRect::Type), 518},
    {sipName_Version, static_cast<int>( ::QStyleOptionFocusRect::Version), 519},
};


extern "C" {static PyObject *varget_QStyleOptionFocusRect_backgroundColor(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFocusRect_backgroundColor(void *sipSelf, PyObject *, PyObject *)
{
     ::QColor*sipVal;
     ::QStyleOptionFocusRect *sipCpp = reinterpret_cast< ::QStyleOptionFocusRect *>(sipSelf);

    sipVal = &sipCpp->backgroundColor;

    return sipConvertFromType(sipVal, sipType_QColor, NULL);
}


extern "C" {static int varset_QStyleOptionFocusRect_backgroundColor(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFocusRect_backgroundColor(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QColor*sipVal;
     ::QStyleOptionFocusRect *sipCpp = reinterpret_cast< ::QStyleOptionFocusRect *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QColor *>(sipForceConvertToType(sipPy,sipType_QColor,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->backgroundColor = *sipVal;

    sipReleaseType(sipVal, sipType_QColor, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionFocusRect[] = {
    {InstanceVariable, sipName_backgroundColor, (PyMethodDef *)varget_QStyleOptionFocusRect_backgroundColor, (PyMethodDef *)varset_QStyleOptionFocusRect_backgroundColor, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionFocusRect, "\1QStyleOptionFocusRect()\n"
"QStyleOptionFocusRect(QStyleOptionFocusRect)");


static pyqt4ClassPluginDef plugin_QStyleOptionFocusRect = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QStyleOptionFocusRect = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFocusRect,
        {0},
        &plugin_QStyleOptionFocusRect
    },
    {
        sipNameNr_QStyleOptionFocusRect,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionFocusRect,
        1, variables_QStyleOptionFocusRect,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionFocusRect,
    -1,
    -1,
    supers_QStyleOptionFocusRect,
    0,
    init_type_QStyleOptionFocusRect,
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
    dealloc_QStyleOptionFocusRect,
    assign_QStyleOptionFocusRect,
    array_QStyleOptionFocusRect,
    copy_QStyleOptionFocusRect,
    release_QStyleOptionFocusRect,
    cast_QStyleOptionFocusRect,
    0,
    0,
    0,
    0,
    0,
    0
};
